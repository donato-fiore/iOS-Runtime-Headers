// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSGRIDVIEWCONTROLLERPADSPEC_H
#define PUPHOTOSGRIDVIEWCONTROLLERPADSPEC_H



#import "PUPhotosGridViewControllerSpec.h"

@interface PUPhotosGridViewControllerPadSpec : PUPhotosGridViewControllerSpec



-(BOOL)canDisplayEditActionsInNavigationBar;
-(BOOL)canDisplayOptionsInPopover;
-(BOOL)canDisplaySlideshowButton;
-(BOOL)shouldPlaceDeleteInCenterToolbarPosition;
-(BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
-(BOOL)shouldUseAspectItems;
-(BOOL)usesStackPopTransition;
-(BOOL)wantsBackButtonTitleForPhotoBrowser;
-(BOOL)wantsCustomNavigationTransition;
-(NSInteger)cellBannerTextAlignment;
-(NSInteger)cellFillMode;
-(NSInteger)sectionHeaderStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)albumPickerViewControllerSpec;
-(struct CGSize )baseInterItemSpacing;
-(unsigned short)thumbnailImageFormat;
-(void)configureCollectionViewGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif