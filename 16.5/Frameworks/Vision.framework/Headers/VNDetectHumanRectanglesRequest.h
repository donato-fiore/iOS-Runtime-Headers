// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTHUMANRECTANGLESREQUEST_H
#define VNDETECTHUMANRECTANGLESREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectHumanRectanglesRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL upperBodyOnly;


+(BOOL)revisionSupportsFullBodyDetection:(NSUInteger)arg0 ;
+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)description;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif