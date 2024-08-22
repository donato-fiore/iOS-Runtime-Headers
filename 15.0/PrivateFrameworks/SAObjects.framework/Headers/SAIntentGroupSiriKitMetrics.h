// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPSIRIKITMETRICS_H
#define SAINTENTGROUPSIRIKITMETRICS_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupSiriKitMetrics : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intentTypeName;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *metricsStateOrigin;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSNumber *taskStepStartTime;
@property (copy, nonatomic) NSString *turnId;


+(id)siriKitMetrics;
+(id)siriKitMetricsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif