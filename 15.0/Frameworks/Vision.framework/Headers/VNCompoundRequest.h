// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCOMPOUNDREQUEST_H
#define VNCOMPOUNDREQUEST_H

@class NSNumber, NSArray;


#import "VNRequest.h"

@interface VNCompoundRequest : VNRequest {
    NSNumber *_cachedDependencyProcessingOrdinality;
}


@property (readonly, copy, nonatomic) NSArray *originalRequests; // ivar: _originalRequests
@property (readonly, nonatomic) CGRect regionOfInterest;


+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)arg0 ;
+(id)compoundRequestsForOriginalRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
-(BOOL)usesCPUOnly;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)compoundResults;
-(id)description;
-(id)initWithOriginalRequests:(id)arg0 ;
-(id)resultsSortingComparator:(SEL)arg0 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)recordWarningsInOriginalRequests;


@end


#endif