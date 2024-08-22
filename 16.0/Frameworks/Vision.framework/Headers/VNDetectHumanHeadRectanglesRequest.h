// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTHUMANHEADRECTANGLESREQUEST_H
#define VNDETECTHUMANHEADRECTANGLESREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectHumanHeadRectanglesRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif