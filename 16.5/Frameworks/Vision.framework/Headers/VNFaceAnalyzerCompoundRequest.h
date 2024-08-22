// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACEANALYZERCOMPOUNDREQUEST_H
#define VNFACEANALYZERCOMPOUNDREQUEST_H



#import "VNHomologousObservationClassCompoundRequest.h"

@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest



+(Class)configurationClass;
+(id)compoundRequestsForOriginalRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(NSInteger)dependencyProcessingOrdinality;
-(NSUInteger)detectionLevel;
-(id)initWithDetectorType:(id)arg0 configuration:(id)arg1 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg0 obtainedInPerformingContext:(id)arg1 ;


@end


#endif