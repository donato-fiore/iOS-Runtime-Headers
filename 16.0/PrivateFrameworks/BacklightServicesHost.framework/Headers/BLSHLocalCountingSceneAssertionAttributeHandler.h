// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHLOCALCOUNTINGSCENEASSERTIONATTRIBUTEHANDLER_H
#define BLSHLOCALCOUNTINGSCENEASSERTIONATTRIBUTEHANDLER_H

@class NSString;
@protocol FBSceneObserver;


#import "BLSHLocalCountingAssertionAttributeHandler.h"

@interface BLSHLocalCountingSceneAssertionAttributeHandler : BLSHLocalCountingAssertionAttributeHandler <FBSceneObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)attributeBaseClass;
+(id)attributeClasses;
-(id)countingTargetForEntry:(id)arg0 ;
-(void)activateForScene:(id)arg0 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateForScene:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif