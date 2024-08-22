// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSGRIDVIEWCONTROLLERSPEC_H
#define PUPHOTOSGRIDVIEWCONTROLLERSPEC_H


#import <Foundation/Foundation.h>

#import "PUAlbumPickerViewControllerSpec.h"

@interface PUPhotosGridViewControllerSpec : NSObject

@property (readonly, nonatomic) PUAlbumPickerViewControllerSpec *albumPickerViewControllerSpec; // ivar: _albumPickerViewControllerSpec
@property (readonly, nonatomic) CGSize baseInterItemSpacing; // ivar: _baseInterItemSpacing
@property (readonly, nonatomic) BOOL canCommitPreview;
@property (readonly, nonatomic) BOOL canDisplayEditActionsInNavigationBar; // ivar: _canDisplayEditActionsInNavigationBar
@property (readonly, nonatomic) BOOL canDisplayOptionsInPopover; // ivar: _canDisplayOptionsInPopover
@property (readonly, nonatomic) BOOL canDisplaySlideshowButton; // ivar: _canDisplaySlideshowButton
@property (readonly, nonatomic) NSInteger cellBannerTextAlignment;
@property (readonly, nonatomic) NSInteger cellFillMode;
@property (readonly, nonatomic) CGSize contentSizeForViewInPopover;
@property (readonly, nonatomic) BOOL displaysAvalancheStacks;
@property (readonly, nonatomic) NSInteger forceLoadInitialSectionCount;
@property (readonly, nonatomic) UIEdgeInsets gridContentInsets;
@property (readonly, nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) CGFloat sectionHeaderHeight;
@property (readonly, nonatomic) UIEdgeInsets sectionHeaderInsets;
@property (readonly, nonatomic) NSInteger sectionHeaderStyle;
@property (readonly, nonatomic) BOOL shouldPlaceDeleteInCenterToolbarPosition;
@property (readonly, nonatomic) BOOL shouldPlaceSelectAllButtonInRightNavigationBar;
@property (readonly, nonatomic) NSInteger sizeSubclass; // ivar: _sizeSubclass
@property (readonly, nonatomic) unsigned short thumbnailImageFormat;
@property (readonly, nonatomic) BOOL usesStackPopTransition; // ivar: _usesStackPopTransition
@property (readonly, nonatomic) BOOL wantsBackButtonTitleForPhotoBrowser;
@property (readonly, nonatomic) BOOL wantsCustomNavigationTransition;


-(BOOL)shouldUseAspectItems;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)configureCollectionViewGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif