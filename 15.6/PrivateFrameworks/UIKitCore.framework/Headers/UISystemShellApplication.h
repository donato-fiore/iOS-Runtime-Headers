// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISYSTEMSHELLAPPLICATION_H
#define UISYSTEMSHELLAPPLICATION_H

@class FBDisplayLayoutTransition;


#import "UIApplication.h"

@interface UISystemShellApplication : UIApplication {
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    id *_didFinishLaunchingObserver;
}




+(BOOL)registerAsSystemApp;
+(BOOL)rendersLocally;
-(BOOL)_openURL:(id)arg0 ;
-(BOOL)_saveSnapshotWithName:(id)arg0 ;
-(BOOL)canOpenURL:(id)arg0 ;
-(BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(NSUInteger)arg0 ;
-(BOOL)handleStatusBarHoverActionForRegion:(NSInteger)arg0 ;
-(BOOL)isFrontBoard;
-(BOOL)isSuspended;
-(BOOL)isSuspendedEventsOnly;
-(BOOL)isSuspendedUnderLock;
-(NSInteger)_interfaceOrientationRotationDirectionFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(NSInteger)startupInterfaceOrientation;
-(id)init;
-(void)noteActiveInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithSettings:(id)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)noteActiveInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)resetIdleTimerAndUndim;


@end


#endif