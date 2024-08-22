// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENT3DSTORE_H
#define PKPEERPAYMENT3DSTORE_H

@class NSMutableArray, NSCache, SCNMaterial, NSString;
@protocol PKMotionManagerClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_activeScenes;
    NSCache *_cache;
    SCNMaterial *_textMaterial;
    NSObject<OS_dispatch_queue> *_sceneLoadingQueue;
    ? _rotationMatrix;
    ? _skew;
    ? _lastRollPitch;
    ? _staticRotationMatrix;
    ? _staticSkew;
    BOOL _monitorMotion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldMonitorMotion;
-(id)_init;
-(id)init;
-(id)material;
-(id)nodeForCharacter:(id)arg0 ;
-(void)_setMonitorMotion:(BOOL)arg0 ;
-(void)_updateMonitorMotion;
// -(void)charactersForText:(id)arg0 completion:(id)arg1 synchronously:(unk)arg2  ;
-(void)motionManager:(id)arg0 didReceiveMotion:(id)arg1 ;
// -(void)newSceneWithCompletion:(id)arg0 synchronously:(unk)arg1  ;
-(void)relinquishScene:(id)arg0 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidBecomeInactive:(id)arg0 ;


@end


#endif