// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUISCENECONTROLLER_H
#define AFUISCENECONTROLLER_H

@class FBScene, FBApplicationUpdateScenesTransaction, BKSProcessAssertion, NSString;
@protocol FBSceneObserver, FBApplicationUpdateScenesTransactionObserver, AFUISceneControllerDelegate;

#import <Foundation/Foundation.h>

#import "AFUISceneConfiguration.h"

@interface AFUISceneController : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver>

 {
    FBScene *_scene;
    FBApplicationUpdateScenesTransaction *_createTransaction;
    BKSProcessAssertion *_backgroundRunningAssertion;
    AFUISceneConfiguration *_pendingConfigurationToApply;
    BOOL _sceneForeground;
    NSUInteger _invalidationReason;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUISceneControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_currentConfiguration;
-(void)_recordSceneCreateBegin;
-(void)_recordSceneCreateEnd;
-(void)cancelSceneLoadingTimeOut;
-(void)dealloc;
-(void)invalidateSceneForReason:(NSUInteger)arg0 explanation:(id)arg1 ;
-(void)requestSceneViewWithConfiguration:(id)arg0 completionBlock:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sceneLoadingTimeOutDidOccur;
-(void)startSceneLoadingTimeOutTimerWithDuration:(CGFloat)arg0 ;
-(void)transaction:(id)arg0 didLaunchProcess:(id)arg1 ;
-(void)updateSceneViewWithConfiguration:(id)arg0 ;


@end


#endif