// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFALLBACKPRESENTATIONWINDOW_H
#define _UIFALLBACKPRESENTATIONWINDOW_H



#import "UIApplicationRotationFollowingWindow.h"

@interface _UIFallbackPresentationWindow : UIApplicationRotationFollowingWindow



+(BOOL)_isSystemWindow;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_includeInDefaultImageSnapshot;


@end


#endif