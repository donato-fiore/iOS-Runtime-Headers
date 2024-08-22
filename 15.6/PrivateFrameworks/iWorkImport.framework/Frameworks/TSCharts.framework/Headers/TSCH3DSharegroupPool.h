// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DSHAREGROUPPOOL_H
#define TSCH3DSHAREGROUPPOOL_H

@class NSMutableArray, NSCondition, NSString;
@protocol TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable;

#import <Foundation/Foundation.h>

#import "TSCH3DSharegroupDelayChecker.h"

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable>

 {
    NSInteger _size;
    NSInteger _numAlive;
    NSInteger _disableLevel;
    NSMutableArray *_sharegroups;
    NSCondition *_condition;
    BOOL _busy;
    TSCH3DSharegroupDelayChecker *_checker;
    NSUInteger _applicationState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(BOOL)canCreateOpenGLObjects;
-(BOOL)canFlushObjects;
-(BOOL)canRenderForAnimations;
-(BOOL)canRenderUsingOpenGL;
-(BOOL)p_applicationStateAllowsAnimationRendering;
-(BOOL)p_applicationStateAllowsObjectFlushing;
-(BOOL)p_applicationStateAllowsOpenGLObjectCreation;
-(BOOL)p_applicationStateAllowsOpenGLRendering;
-(BOOL)p_canUseOpenGLWithCheck:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)obtainSharegroup;
-(id)p_obtainSharegroupFromSharegroups;
-(void)applicationDidBecomeActive;
-(void)applicationWillEnterForeground;
-(void)applicationWillResignActive;
-(void)disable;
-(void)enable;
-(void)flush;
-(void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(CGFloat)arg0 ;
-(void)p_flushSharegroupsIfPossible;
-(void)p_lockAndPerformBlock:(id)arg0 ;
-(void)p_removeSharegroupsFromFlushingManager;
-(void)releaseSharegroup:(id)arg0 ;
-(void)scheduleCheckCondition;
-(void)waitForBackgroundThreadsWithTimeout:(CGFloat)arg0 ;
-(void)willCheckCondition;


@end


#endif