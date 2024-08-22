// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCLASSIFYFACEATTRIBUTESREQUEST_H
#define VNCLASSIFYFACEATTRIBUTESREQUEST_H

@class NSString, NSArray;
@protocol VNFaceObservationAccepting;


#import "VNImageBasedRequest.h"

@interface VNClassifyFaceAttributesRequest : VNImageBasedRequest <VNFaceObservationAccepting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;


+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)dependentRequestCompatibility;
+(struct ? *)revisionAvailability;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)dependencyProcessingOrdinality;


@end


#endif