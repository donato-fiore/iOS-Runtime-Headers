// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSHEADERVIEW_H
#define PKPASSHEADERVIEW_H

@class UIView, PKRemoteDataAccessor, UIImageView, UILabel, PKPass, PKPeerPaymentAccount, UIColor, PKPassFaceViewRendererState;
@protocol PKPassHeaderViewDelegate, PKPassLibraryDataProvider;


#import "PKPassView.h"

@interface PKPassHeaderView : UIView {
    PKRemoteDataAccessor *_remoteDataAccessor;
    UIView *_passMaskView;
    UIImageView *_maskShadow;
    UILabel *_title;
    UILabel *_subtitle;
    CGFloat passImageHeight;
}


@property (weak, nonatomic) NSObject<PKPassHeaderViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL expiredPass; // ivar: _expiredPass
@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (retain, nonatomic) NSObject<PKPassLibraryDataProvider> *passLibraryOverride; // ivar: _passLibraryOverride
@property (readonly, nonatomic) PKPassView *passView; // ivar: _passView
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) PKPassFaceViewRendererState *rendererState; // ivar: _rendererState
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (nonatomic) BOOL showModificationDate; // ivar: _showModificationDate
@property (nonatomic, getter=isSmall) BOOL small; // ivar: _small
@property (nonatomic) NSUInteger suppressedContent; // ivar: _suppressedContent


-(id)initWithPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 rendererState:(id)arg1 ;
-(struct ? )passSizeInfoForHeight:(CGFloat)arg0 ;
-(struct CGSize )passViewSizeForHeight:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_passLibraryDidChange:(id)arg0 ;
-(void)_resetFonts;
-(void)_updateContent;
-(void)_updateTextContent;
-(void)dealloc;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateModifiedDate;
-(void)updateShadow:(CGFloat)arg0 ;


@end


#endif