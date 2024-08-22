// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLNEWALBUMEXTRACTIONSTEP_H
#define CPLNEWALBUMEXTRACTIONSTEP_H



#import "CPLBatchExtractionStep.h"

@interface CPLNewAlbumExtractionStep : CPLBatchExtractionStep

@property (readonly, nonatomic) NSUInteger maximumCount; // ivar: _maximumCount


-(BOOL)extractToBatch:(id)arg0 maximumCount:(NSUInteger)arg1 maximumResourceSize:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg0 ;
-(id)initWithStorage:(id)arg0 scopeIdentifier:(id)arg1 maximumCount:(NSUInteger)arg2 ;
-(id)shortDescription;


@end


#endif