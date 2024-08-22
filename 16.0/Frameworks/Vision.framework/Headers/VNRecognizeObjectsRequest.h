// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRECOGNIZEOBJECTSREQUEST_H
#define VNRECOGNIZEOBJECTSREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNRecognizeObjectsRequest : VNImageBasedRequest

@property NSUInteger imageCropAndScaleOption;
@property float modelMinimumDetectionConfidence;
@property float modelNonMaximumSuppressionThreshold;
@property (readonly, copy) NSArray *results;
@property BOOL useImageAnalyzerScaling;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)knownObjectIdentifiersRecognizedByRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;


@end


#endif