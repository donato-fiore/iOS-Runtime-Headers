// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWOPPORTUNISTICINFERENCEANALYTICSPAYLOAD_H
#define BWOPPORTUNISTICINFERENCEANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWOpportunisticInferenceAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int facesProcessedCount; // ivar: _facesProcessedCount
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger inferenceDeadlineOverdue; // ivar: _inferenceDeadlineOverdue
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalInferenceExecutionTime; // ivar: _totalInferenceExecutionTime


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)reset;


@end


#endif