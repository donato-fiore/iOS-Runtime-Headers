// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTRECTANGLESREQUEST_H
#define VNDETECTRECTANGLESREQUEST_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) NSUInteger maximumObservations;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) float minimumSize;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) NSUInteger requiredVersion;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)setSortedResults:(id)arg0 ;


@end


#endif