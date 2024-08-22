// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLBYCLASSEXTRACTIONSTEP_H
#define CPLBYCLASSEXTRACTIONSTEP_H

@class NSString;


#import "CPLBatchExtractionStep.h"

@interface CPLByClassExtractionStep : CPLBatchExtractionStep {
    *unk _query;
}


@property (readonly, nonatomic) Class extractionClass; // ivar: _extractionClass
@property (readonly, nonatomic) NSUInteger maximumCount; // ivar: _maximumCount
@property (readonly, copy, nonatomic) NSString *queryDescription; // ivar: _queryDescription


-(BOOL)extractToBatch:(id)arg0 maximumCount:(NSUInteger)arg1 maximumResourceSize:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg0 ;
-(id)initWithStorage:(id)arg0 scopeIdentifier:(id)arg1 description:(id)arg2 class:(Class)arg3 maximumCount:(NSUInteger)arg4 query:(*unk)arg5 ;
-(id)shortDescription;
-(void)reset;


@end


#endif