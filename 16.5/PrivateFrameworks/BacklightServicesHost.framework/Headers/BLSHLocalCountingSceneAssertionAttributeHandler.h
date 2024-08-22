// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHLOCALCOUNTINGSCENEASSERTIONATTRIBUTEHANDLER_H
#define BLSHLOCALCOUNTINGSCENEASSERTIONATTRIBUTEHANDLER_H

@class NSString;
@protocol BLSHSceneEnvironmentObserving;


#import "BLSHLocalCountingAssertionAttributeHandler.h"

@interface BLSHLocalCountingSceneAssertionAttributeHandler : BLSHLocalCountingAssertionAttributeHandler <BLSHSceneEnvironmentObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)attributeBaseClass;
+(id)attributeClasses;
-(id)countingTargetForEntry:(id)arg0 ;
-(void)activateForSceneEnvironment:(id)arg0 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateForSceneEnvironment:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 environment:(id)arg1 ;


@end


#endif