// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDARBITERHOST_H
#define _UIKEYBOARDARBITERHOST_H

@class FBSScene, FBSSceneClientSettings, NSString;
@protocol _UIKeyboardArbiterLink, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UIKeyboardArbiter.h"

@interface _UIKeyboardArbiterHost : NSObject <_UIKeyboardArbiterLink>

 {
    FBSScene *_scene;
    FBSSceneClientSettings *_clientSettings;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAvailable;
@property (weak, nonatomic) _UIKeyboardArbiter *owner; // ivar: owner
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


+(id)launchAdvisorWithOmniscientDelegate:(id)arg0 ;
+(id)launchAdvisorWithOmniscientDelegate:(id)arg0 sceneDelegate:(id)arg1 ;
+(void)launch;
-(id)_createSceneWithIdentifier:(id)arg0 initialClientSettings:(id)arg1 ;
-(void)attach:(id)arg0 ;
-(void)connectWithQueue:(id)arg0 ;
-(void)createSceneWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)detach:(id)arg0 ;
-(void)updateSceneSettings;


@end


#endif