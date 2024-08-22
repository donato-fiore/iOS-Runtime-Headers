// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLDROPALLRECORDSEXTRACTIONSTEP_H
#define CPLDROPALLRECORDSEXTRACTIONSTEP_H



#import "CPLBatchExtractionStep.h"

@interface CPLDropAllRecordsExtractionStep : CPLBatchExtractionStep



-(BOOL)extractToBatch:(id)arg0 maximumCount:(NSUInteger)arg1 maximumResourceSize:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg0 ;
-(id)shortDescription;
-(void)reset;


@end


#endif