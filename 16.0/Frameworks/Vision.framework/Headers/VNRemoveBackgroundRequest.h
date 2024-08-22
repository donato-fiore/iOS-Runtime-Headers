// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNREMOVEBACKGROUNDREQUEST_H
#define VNREMOVEBACKGROUNDREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNRemoveBackgroundRequest : VNImageBasedRequest

@property (nonatomic) BOOL cropResult;
@property (nonatomic) BOOL performInPlace;
@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL returnMask;
@property (nonatomic) BOOL usesCPUOnly;


+(Class)configurationClass;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif