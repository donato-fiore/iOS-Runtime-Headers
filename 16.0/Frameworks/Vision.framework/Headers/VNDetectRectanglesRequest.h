// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTRECTANGLESREQUEST_H
#define VNDETECTRECTANGLESREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectRectanglesRequest : VNImageBasedRequest

@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) NSUInteger maximumObservations;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) float minimumSize;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) NSUInteger requiredVersion;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)supportedImageSizeSet;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)setProcessedResults:(id)arg0 ;


@end


#endif