// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCROPTOOLCONTROLLERSPEC_H
#define PUCROPTOOLCONTROLLERSPEC_H

@class UIColor, PXLabelSpec;


#import "PUPhotoEditToolControllerSpec.h"

@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (readonly, nonatomic) CGSize cropActionButtonSize;
@property (readonly, nonatomic) UIColor *cropAspectButtonColor;
@property (readonly, nonatomic) UIColor *cropAspectButtonSelectedColor;
@property (readonly, nonatomic) CGFloat cropAspectFlipperWidth;
@property (readonly, nonatomic) UIEdgeInsets cropAspectRatioButtonTitleInset;
@property (readonly, nonatomic) UIEdgeInsets cropAspectRatioScrollContentInset;
@property (readonly, nonatomic) CGFloat cropAspectRatioScrollHeight;
@property (readonly, nonatomic) CGFloat cropHandleViewLineMargin;
@property (readonly, nonatomic) CGFloat cropHandleViewLineThickness;
@property (readonly, nonatomic) PXLabelSpec *cropHeaderLabelSpec;
@property (readonly, nonatomic) CGFloat cropRectMargin;
@property (readonly, nonatomic) CGFloat leftInsetForiPad;
@property (readonly, nonatomic) CGSize minimumCropHandleViewSize;
@property (readonly, nonatomic) CGFloat minimumCropInset;
@property (readonly, nonatomic) CGSize minimumCropSize;
@property (readonly, nonatomic) CGFloat standardBottomBarWidth;
@property (readonly, nonatomic) CGFloat standardSideBarHeight;


-(CGFloat)standardBottomBarHeight;
-(CGFloat)standardSideBarWidth;


@end


#endif