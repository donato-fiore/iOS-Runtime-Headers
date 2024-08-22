// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTFACERECTANGLESREQUEST_H
#define VNDETECTFACERECTANGLESREQUEST_H

@class NSString, NSNumber, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (nonatomic) NSUInteger faceCoreType;
@property (readonly) NSUInteger hash;
@property (nonatomic) float precisionRecallThreshold;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)_detectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif