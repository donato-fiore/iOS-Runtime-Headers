// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGADGETCUSTOMSECTIONHEADERUIVIEW_H
#define PXGADGETCUSTOMSECTIONHEADERUIVIEW_H

@class UILabel, UIImageView, UIButton;


#import "PXGadgetSectionHeaderUIView.h"

@interface PXGadgetCustomSectionHeaderUIView : PXGadgetSectionHeaderUIView

@property (retain, nonatomic) UILabel *appleInternalLabel; // ivar: _appleInternalLabel
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UILabel *iconTitleLabel; // ivar: _iconTitleLabel
@property (retain, nonatomic) UIButton *infoButton; // ivar: _infoButton


+(CGFloat)_preferredHeightOfAppleInternalTextWithWidth:(CGFloat)arg0 ;
+(CGFloat)preferredHeightForText:(id)arg0 buttonType:(NSUInteger)arg1 fittingWidth:(CGFloat)arg2 style:(NSUInteger)arg3 dividerHidden:(BOOL)arg4 isAccessibilitySize:(BOOL)arg5 ;
-(void)configureTitleLabel:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif