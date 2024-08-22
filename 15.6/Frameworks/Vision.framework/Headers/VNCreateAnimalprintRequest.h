// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCREATEANIMALPRINTREQUEST_H
#define VNCREATEANIMALPRINTREQUEST_H

@class NSString, NSArray;
@protocol VNDetectedObjectObservationAccepting;


#import "VNImageBasedRequest.h"

@interface VNCreateAnimalprintRequest : VNImageBasedRequest <VNDetectedObjectObservationAccepting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;


+(NSUInteger)compatibleRevisionForDependentRequestOfClass:(Class)arg0 beingPerformedByRevision:(NSUInteger)arg1 ;
+(id)createVNEntityIdentificationModelEntryPrintForRevision:(NSUInteger)arg0 fromDescriptorData:(*void)arg1 length:(NSUInteger)arg2 elementCount:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)dependencyProcessingOrdinality;
-(void)_determineAnimalsToProcessFrom:(id)arg0 outputAnimalsThatNeedNoProcessing:(id)arg1 outputAnimalsThatNeedAnimalprints:(id)arg2 ;


@end


#endif