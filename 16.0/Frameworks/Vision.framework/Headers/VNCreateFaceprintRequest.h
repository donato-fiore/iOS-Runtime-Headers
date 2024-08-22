// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCREATEFACEPRINTREQUEST_H
#define VNCREATEFACEPRINTREQUEST_H

@class NSString, NSArray;
@protocol VNFaceObservationAccepting;


#import "VNImageBasedRequest.h"

@interface VNCreateFaceprintRequest : VNImageBasedRequest <VNFaceObservationAccepting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceFaceprintCreation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)createVNEntityIdentificationModelEntryPrintForRevision:(NSUInteger)arg0 fromDescriptorData:(*void)arg1 length:(NSUInteger)arg2 elementCount:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif