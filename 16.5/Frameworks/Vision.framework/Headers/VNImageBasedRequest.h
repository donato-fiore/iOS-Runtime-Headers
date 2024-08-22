// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGEBASEDREQUEST_H
#define VNIMAGEBASEDREQUEST_H

@class NSString, NSArray;
@protocol VNFaceObservationAcceptingInternal, VNDetectedObjectObservationAcceptingInternal, VNImageIdealImageSizeProviding;


#import "VNRequest.h"

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal, VNDetectedObjectObservationAcceptingInternal, VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (nonatomic) CGRect regionOfInterest;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
-(BOOL)getOptionalValidatedInputDetectedObjectObservations:(*id)arg0 forObservationClass:(Class)arg1 relationWithRegionOfInterest:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)getOptionalValidatedInputFaceObservations:(*id)arg0 clippedToRegionOfInterest:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isFullCoverageRegionOfInterest;
-(BOOL)validateConfigurationAndReturnError:(*id)arg0 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_detectedObjectObservationsForRegionOfInterestContainingDetectedObjectObservations:(id)arg0 relationWithRegionOfInterest:(NSUInteger)arg1 ;
-(id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg0 ;
-(struct CGRect )regionOfInterestNonIntegralPixelRectForWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(struct CGRect )regionOfInterestPixelRectForWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif