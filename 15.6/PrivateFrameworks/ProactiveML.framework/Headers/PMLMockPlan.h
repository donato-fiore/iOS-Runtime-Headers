// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLMOCKPLAN_H
#define PMLMOCKPLAN_H

@class NSString;
@protocol PMLPlanProtocol;

#import <Foundation/Foundation.h>

#import "PMLTrainingStore.h"

@interface PMLMockPlan : NSObject <PMLPlanProtocol>

 {
    PMLTrainingStore *_store;
    BOOL _returnValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didRun; // ivar: _didRun
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *planId; // ivar: _planId
@property (readonly) Class superclass;
@property NSUInteger version; // ivar: _version


+(id)lastDeserializedPlanWithId:(id)arg0 ;
+(id)lastDeserializedPlansMap;
+(void)clearLastDeserializedPlans;
+(void)setLastDeserializedPlanWithId:(id)arg0 toPlan:(id)arg1 ;
-(id)initWithPlanId:(id)arg0 ;
-(id)initWithPlanId:(id)arg0 store:(id)arg1 ;
-(id)initWithPlanId:(id)arg0 store:(id)arg1 version:(NSUInteger)arg2 returningAfterRunning:(BOOL)arg3 ;
-(id)initWithPlanId:(id)arg0 version:(NSUInteger)arg1 ;
-(id)initWithPlanId:(id)arg0 version:(NSUInteger)arg1 returningAfterRunning:(BOOL)arg2 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithVersion:(NSUInteger)arg0 ;
-(id)runWithError:(*id)arg0 ;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif