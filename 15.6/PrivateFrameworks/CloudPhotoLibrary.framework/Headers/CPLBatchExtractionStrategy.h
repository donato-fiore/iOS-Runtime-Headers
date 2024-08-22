// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLBATCHEXTRACTIONSTRATEGY_H
#define CPLBATCHEXTRACTIONSTRATEGY_H

@class NSArray, NSEnumerator, NSString;
@protocol CPLBatchExtractionStrategyStorage;

#import <Foundation/Foundation.h>

#import "CPLBatchExtractionStep.h"

@interface CPLBatchExtractionStrategy : NSObject {
    NSArray *_steps;
    NSEnumerator *_stepEnumerator;
    CPLBatchExtractionStep *_currentStep;
    BOOL _loggedForThisStep;
    BOOL _finished;
}


@property (readonly, copy, nonatomic) NSString *currentStepDescription;
@property (nonatomic) NSUInteger maximumRecordCountPerBatch; // ivar: _maximumRecordCountPerBatch
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *scopeIdentifier; // ivar: _scopeIdentifier
@property (readonly, weak, nonatomic) NSObject<CPLBatchExtractionStrategyStorage> *storage; // ivar: _storage
@property (readonly, copy, nonatomic) NSString *strategyName; // ivar: _strategyName


+(id)overQuotaStrategyWithStorage:(id)arg0 coveringScopeIdentifier:(id)arg1 ;
+(id)usualStrategyWithStorage:(id)arg0 coveringScopeIdentifier:(id)arg1 ;
-(BOOL)_hasChanges;
-(BOOL)extractBatch:(*id)arg0 maximumResourceSize:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithName:(id)arg0 storage:(id)arg1 scopeIdentifier:(id)arg2 steps:(id)arg3 ;
-(void)_computeNextStep;
-(void)reset;
-(void)resetConditionallyFromNewIncomingChange:(id)arg0 ;


@end


#endif