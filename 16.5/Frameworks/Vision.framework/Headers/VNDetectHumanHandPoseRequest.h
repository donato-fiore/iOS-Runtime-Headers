// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTHUMANHANDPOSEREQUEST_H
#define VNDETECTHUMANHANDPOSEREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

@property NSUInteger maximumHandCount;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedJointNamesForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedJointsGroupNamesForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)setProcessedResults:(id)arg0 ;


@end


#endif