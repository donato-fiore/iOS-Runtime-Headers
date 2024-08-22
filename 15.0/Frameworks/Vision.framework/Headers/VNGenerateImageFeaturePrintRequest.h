// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNGENERATEIMAGEFEATUREPRINTREQUEST_H
#define VNGENERATEIMAGEFEATUREPRINTREQUEST_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VNGenerateImageFeaturePrintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_applicableDetectorAndOptions:(*id)arg0 loadedInSession:(id)arg1 error:(*id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif