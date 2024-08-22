// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITTOOLCONTROLLERSPEC_H
#define PUPHOTOEDITTOOLCONTROLLERSPEC_H

@class NSString;
@protocol PUPhotoEditLayoutDynamicAdaptable;


#import "PUViewControllerSpec.h"

@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isiPadLayout;
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (readonly, nonatomic) CGFloat standardBottomBarHeight;
@property (readonly, nonatomic) CGFloat standardSideBarWidth;
@property (readonly) Class superclass;


+(id)toolPickerSelectionColor;


@end


#endif