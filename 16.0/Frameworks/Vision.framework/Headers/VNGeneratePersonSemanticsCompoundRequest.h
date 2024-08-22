// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNGENERATEPERSONSEMANTICSCOMPOUNDREQUEST_H
#define VNGENERATEPERSONSEMANTICSCOMPOUNDREQUEST_H

@class NSArray;


#import "VNCompoundRequest.h"

@interface VNGeneratePersonSemanticsCompoundRequest : VNCompoundRequest

@property (readonly, copy) NSArray *results;


+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(NSInteger)compoundRequestRevisionForRequest:(id)arg0 ;
+(id)compoundRequestsForOriginalRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithOriginalRequests:(id)arg0 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;


@end


#endif