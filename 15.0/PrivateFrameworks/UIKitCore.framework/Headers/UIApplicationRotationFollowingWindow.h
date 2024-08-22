// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIAPPLICATIONROTATIONFOLLOWINGWINDOW_H
#define UIAPPLICATIONROTATIONFOLLOWINGWINDOW_H



#import "UIWindow.h"

@interface UIApplicationRotationFollowingWindow : UIWindow

@property (nonatomic) BOOL limitToWindowLevel; // ivar: _limitToWindowLevel
@property (nonatomic) NSInteger priorityLevel; // ivar: _priorityLevel


+(BOOL)_isSystemWindow;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldControlAutorotation;
-(BOOL)isInterfaceAutorotationDisabled;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg0 selector:(SEL)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 attached:(BOOL)arg1 ;
-(id)_topMostWindow;
-(id)init;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_commonApplicationRotationFollowingWindowInit;
-(void)_handleStatusBarOrientationChange:(id)arg0 ;
-(void)applicationWindowRotated:(id)arg0 ;


@end


#endif