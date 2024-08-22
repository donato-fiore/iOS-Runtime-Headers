// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLNEWASSETEXTRACTIONSTEP_H
#define CPLNEWASSETEXTRACTIONSTEP_H

@class NSMutableSet;


#import "CPLBatchExtractionStep.h"

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep {
    NSMutableSet *_alreadySeenMasterScopedIdentifiers;
}


@property (readonly, nonatomic) NSUInteger maximumCount; // ivar: _maximumCount


-(BOOL)extractToBatch:(id)arg0 maximumCount:(NSUInteger)arg1 maximumResourceSize:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg0 ;
-(id)initWithStorage:(id)arg0 scopeIdentifier:(id)arg1 maximumCount:(NSUInteger)arg2 ;
-(id)shortDescription;
-(void)reset;


@end


#endif