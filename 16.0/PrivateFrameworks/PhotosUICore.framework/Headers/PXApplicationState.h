// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXAPPLICATIONSTATE_H
#define PXAPPLICATIONSTATE_H

@class NSMutableSet, UIApplication;


#import "PXObservable.h"

@interface PXApplicationState : PXObservable {
    NSMutableSet *_disabledIdleTimerTokens;
}


@property (readonly, nonatomic) UIApplication *application; // ivar: _application
@property (readonly, nonatomic) BOOL isHidden; // ivar: _isHidden
@property (readonly, nonatomic) BOOL isLaunchedForTesting;


+(BOOL)isRunningInPhotosApp;
+(BOOL)isRunningInPhotosTopShelfExtension;
+(id)sharedState;
-(BOOL)isDisablingIdleTimerForReasons:(*id)arg0 ;
-(id)beginDisablingIdleTimerForReason:(id)arg0 ;
-(id)init;
-(id)initWithApplication:(id)arg0 ;
-(id)initWithApplication:(id)arg0 isExtension:(BOOL)arg1 ;
-(void)_appDidHide:(id)arg0 ;
-(void)_appDidUnhide:(id)arg0 ;
-(void)_sceneDidActivate:(id)arg0 ;
-(void)_sceneWillDeactivate:(id)arg0 ;
-(void)endDisablingIdleTimer:(id)arg0 ;


@end


#endif