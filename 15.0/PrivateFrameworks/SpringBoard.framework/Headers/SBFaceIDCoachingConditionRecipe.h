// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFACEIDCOACHINGCONDITIONRECIPE_H
#define SBFACEIDCOACHINGCONDITIONRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBFaceIDCoachingConditionRecipe : NSObject <SBTestRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)load;
-(BOOL)_overrideCoachingConditionEnabled;
-(id)title;
-(void)_setOverrideCoachingConditionEnabled:(BOOL)arg0 ;
-(void)_setOverrideCoachingEvent:(NSUInteger)arg0 ;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif