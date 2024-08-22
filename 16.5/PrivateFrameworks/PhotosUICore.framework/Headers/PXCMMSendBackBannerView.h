// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMSENDBACKBANNERVIEW_H
#define PXCMMSENDBACKBANNERVIEW_H

@class UIView, NSString, UILabel;


#import "PXCapsuleButton.h"
#import "PXCMMImageView.h"
#import "PXUpdater.h"

@interface PXCMMSendBackBannerView : UIView {
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    id *_actionButtonAction;
    PXCMMImageView *_imageView;
    UILabel *_captionLabel;
    UILabel *_headlineLabel;
    PXUpdater *_updater;
}




+(CGFloat)bottomInset;
+(CGFloat)captionLabelTopInset;
+(id)_headlineLabelFont;
+(id)captionLabelFont;
-(id)_actionButtonWithTitle:(id)arg0 action:(SEL)arg1 enabled:(BOOL)arg2 ;
-(id)_attributedStringWithString:(id)arg0 ;
-(id)_headlineStringAttributes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)new;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateActionButton;
-(void)_updateLabels;
-(void)layoutSubviews;
-(void)setActionButtonWithTitle:(id)arg0 actionBlock:(id)arg1 ;
-(void)setAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif