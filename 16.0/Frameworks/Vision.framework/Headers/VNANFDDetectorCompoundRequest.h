// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNANFDDETECTORCOMPOUNDREQUEST_H
#define VNANFDDETECTORCOMPOUNDREQUEST_H



#import "VNCompoundRequest.h"

@interface VNANFDDetectorCompoundRequest : VNCompoundRequest



+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(Class)configurationClass;
+(NSInteger)compoundRequestRevisionForRequest:(id)arg0 ;
+(id)compoundRequestsForOriginalRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithDetectorType:(id)arg0 configuration:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg0 obtainedInPerformingContext:(id)arg1 ;


@end


#endif