// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQBANNERVIEW_H
#define ICQBANNERVIEW_H

@class UIView, ICQOffer, NSArray, NSString, UIColor, UIFont;
@protocol UITextViewDelegate, ICQUpgradeFlowManagerDelegate, ICQBannerViewDelegate;


#import "ICQUpgradeFlowOptions.h"
#import "ICQUpgradeFlowManager.h"
#import "_ICQTextView.h"

@interface ICQBannerView : UIView <UITextViewDelegate, ICQUpgradeFlowManagerDelegate>

 {
    ICQOffer *_offer;
}


@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *detailMessageColor; // ivar: _detailMessageColor
@property (retain, nonatomic) UIFont *detailMessageFont; // ivar: _detailMessageFont
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions; // ivar: _flowOptions
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *linkMessageColor; // ivar: _linkMessageColor
@property (retain, nonatomic) UIFont *linkMessageFont; // ivar: _linkMessageFont
@property (copy, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (copy, nonatomic) UIFont *linkTextFont; // ivar: _linkTextFont
@property (retain, nonatomic) ICQUpgradeFlowManager *localFlowManager; // ivar: _localFlowManager
@property (retain, nonatomic) ICQOffer *offer;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) CGFloat textLineSpacing; // ivar: _textLineSpacing
@property (nonatomic) NSDirectionalEdgeInsets textMargins; // ivar: _textMargins
@property (readonly, nonatomic) _ICQTextView *textView; // ivar: _textView
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont


+(BOOL)shouldShowForOffer:(id)arg0 ;
+(id)replaceWordsIn:(id)arg0 with:(id)arg1 ;
-(BOOL)_launchFlowManagerWithLink:(id)arg0 ;
-(BOOL)_legacyDelegateMethodHandlesAction:(NSInteger)arg0 ;
-(BOOL)_performLink:(id)arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(NSInteger)_delegateActionForAction:(NSInteger)arg0 ;
-(NSInteger)semanticContentAttribute;
-(NSInteger)userInterfaceLayoutDirection;
-(id)_getOffer;
-(id)_initWithFrame:(struct CGRect )arg0 ;
-(id)attributedText;
-(id)detailAttributedText;
-(id)detailMessageAttributes;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOffer:(id)arg0 ;
-(id)linkAttributes;
-(id)messageAttributes;
-(id)textParagraphStyle;
-(id)textParagraphStyleAttributes;
-(id)titleAttributes;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyTextParagraphAttributes;
-(void)_applyTextStorageAttributes;
-(void)_handlePushReceivedDarwinNotification;
-(void)_registerForDarwinNotifications;
-(void)_updateBannerViewConstraints;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)updateBannerView;
-(void)updateConstraints;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif