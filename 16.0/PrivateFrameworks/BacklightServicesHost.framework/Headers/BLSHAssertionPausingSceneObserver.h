// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHASSERTIONPAUSINGSCENEOBSERVER_H
#define BLSHASSERTIONPAUSINGSCENEOBSERVER_H

@class FBScene, BLSPauseWhenSceneBackgroundAttribute, NSString;
@protocol BLSHLocalAssertionAttributeHandlerEntry, FBSceneObserver, BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

#import <Foundation/Foundation.h>


@interface BLSHAssertionPausingSceneObserver : NSObject <BLSHLocalAssertionAttributeHandlerEntry, FBSceneObserver>

 {
    FBScene *_scene;
    os_unfair_lock_s _lock;
    BOOL _invalidated;
    BOOL _paused;
}


@property (readonly, weak, nonatomic) NSObject<BLSAssertionServiceResponding> *assertion; // ivar: _assertion
@property (readonly, weak, nonatomic) BLSPauseWhenSceneBackgroundAttribute *attribute; // ivar: _attribute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<BLSHAssertionAttributeHandlerService> *service; // ivar: _service
@property (readonly) Class superclass;


+(id)activateForAttribute:(id)arg0 fromAssertion:(id)arg1 forService:(id)arg2 attributeHandler:(id)arg3 ;
-(BOOL)reactivateIfPossible;
-(void)dealloc;
-(void)invalidate;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif