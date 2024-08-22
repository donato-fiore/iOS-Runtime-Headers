// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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


+(id)createVNEntityIdentificationModelEntryPrintForRevision:(NSUInteger)arg0 fromDescriptorData:(*void)arg1 length:(NSUInteger)arg2 elementCount:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)dependentRequestMappingTable;
+(struct ? *)revisionAvailability;
+(void)initialize;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)_determineAnimalsToProcessFrom:(id)arg0 outputAnimalsThatNeedNoProcessing:(id)arg1 outputAnimalsThatNeedAnimalprints:(id)arg2 ;


@end


#endif