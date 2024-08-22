// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSLIDESHOWSETTINGSVIEWCONTROLLERSPEC_H
#define PUSLIDESHOWSETTINGSVIEWCONTROLLERSPEC_H

@class UIColor, UIView;


#import "PUViewControllerSpec.h"

@interface PUSlideshowSettingsViewControllerSpec : PUViewControllerSpec

@property (readonly, nonatomic) UIColor *cellBackgroundColor;
@property (readonly, nonatomic) NSUInteger rectEdgeForExtendedLayout;
@property (readonly, nonatomic) BOOL shouldShowNavigationBar;
@property (readonly, nonatomic) BOOL shouldUseBlurredBackground;
@property (readonly, nonatomic) UIColor *tableViewBackgroundColor;
@property (readonly, nonatomic) UIView *tableViewHeaderView;


-(id)currentChange;
-(id)newSpecChange;


@end


#endif