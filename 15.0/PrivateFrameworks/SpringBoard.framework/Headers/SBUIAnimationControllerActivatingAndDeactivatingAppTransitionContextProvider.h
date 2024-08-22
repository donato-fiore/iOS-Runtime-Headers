// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIANIMATIONCONTROLLERACTIVATINGANDDEACTIVATINGAPPTRANSITIONCONTEXTPROVIDER_H
#define SBUIANIMATIONCONTROLLERACTIVATINGANDDEACTIVATINGAPPTRANSITIONCONTEXTPROVIDER_H

@class NSString, NSSet;
@protocol SBUIAnimationControllerTransitionContextProvider;

#import <Foundation/Foundation.h>

#import "SBApplicationSceneEntity.h"

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider>



@property (retain, nonatomic) SBApplicationSceneEntity *activatingAppSceneEntity; // ivar: _toAppSceneEntity
@property (retain, nonatomic) SBApplicationSceneEntity *deactivatingAppSceneEntity; // ivar: _fromAppSceneEntity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity; // ivar: _fromApplicationSceneEntity
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity; // ivar: _toApplicationSceneEntity


+(id)transitionContextProviderWithToApplicationSceneEntity:(id)arg0 fromApplicationSceneEntity:(id)arg1 ;
-(id)initWithToApplicationSceneEntity:(id)arg0 fromApplicationSceneEntity:(id)arg1 ;


@end


#endif