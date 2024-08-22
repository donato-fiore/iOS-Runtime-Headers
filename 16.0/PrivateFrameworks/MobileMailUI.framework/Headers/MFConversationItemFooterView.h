// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCONVERSATIONITEMFOOTERVIEW_H
#define MFCONVERSATIONITEMFOOTERVIEW_H

@class UIView, UIVisualEffectView, EMCachingContactStore, NSString, UIButton;
@protocol UIPointerInteractionDelegate, ConversationSearchOverlayAdding, MFMessageFooterViewDelegate;


#import "MFMessageDisplayMetrics.h"
#import "ConversationSearchOverlayView.h"

@interface MFConversationItemFooterView : UIView <UIPointerInteractionDelegate, ConversationSearchOverlayAdding>



@property (nonatomic) BOOL allowsPointerSnapping; // ivar: _allowsPointerSnapping
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) EMCachingContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) CGFloat currentYOffset; // ivar: _currentYOffset
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultRevealActionButtonOriginY; // ivar: _defaultRevealActionButtonOriginY
@property (nonatomic) CGFloat defaultSeeMoreButtonOriginY; // ivar: _defaultSeeMoreButtonOriginY
@property (weak, nonatomic) NSObject<MFMessageFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (retain, nonatomic) ConversationSearchOverlayView *findOverlayView; // ivar: _findOverlayView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL messageContainsBlockQuotes; // ivar: _messageContainsBlockQuotes
@property (retain, nonatomic) UIButton *revealActionsButton; // ivar: _revealActionsButton
@property (retain, nonatomic) UIButton *seeMoreButton; // ivar: _seeMoreButton
@property (nonatomic) CGFloat seeMoreButtonAlpha;
@property (readonly, nonatomic) CGFloat seeMoreButtonHeight;
@property (nonatomic, getter=isSeeMoreButtonHidden) BOOL seeMoreButtonHidden;
@property (copy, nonatomic) NSString *senderName; // ivar: _senderName
@property (readonly, nonatomic) BOOL shouldHideStickyFooterView;
@property (readonly) Class superclass;


+(id)nameFont;
+(id)prefixFont;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_fontMetricCacheDidInvalidate:(id)arg0 ;
-(void)_updateBackgroundView;
-(void)_updateButtons;
-(void)_updateSeeMoreButton;
-(void)addConversationSearchOverlay;
-(void)addTarget:(id)arg0 action:(SEL)arg1 toButton:(NSInteger)arg2 ;
-(void)hideAttribution;
-(void)layoutActionButtonWithBounds:(struct CGRect )arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSeeMoreButton;
-(void)layoutSubviews;
-(void)moveOriginYByOffset:(CGFloat)arg0 ;
-(void)removeConversationSearchOverlay;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)showAttributionWithSenderName:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif