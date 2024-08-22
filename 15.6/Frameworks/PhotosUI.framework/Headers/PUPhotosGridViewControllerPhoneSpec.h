// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSGRIDVIEWCONTROLLERPHONESPEC_H
#define PUPHOTOSGRIDVIEWCONTROLLERPHONESPEC_H



#import "PUPhotosGridViewControllerSpec.h"

@interface PUPhotosGridViewControllerPhoneSpec : PUPhotosGridViewControllerSpec



-(BOOL)canDisplayOptionsInPopover;
-(BOOL)canDisplaySlideshowButton;
-(BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
-(BOOL)shouldUseAspectItems;
-(NSInteger)cellFillMode;
-(NSInteger)forceLoadInitialSectionCount;
-(NSUInteger)supportedInterfaceOrientations;
-(id)albumPickerViewControllerSpec;
-(id)photosPickerViewControllerSpec;
-(struct CGSize )baseInterItemSpacing;
-(struct UIEdgeInsets )gridContentInsets;
-(unsigned short)thumbnailImageFormat;
-(void)configureCollectionViewGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif