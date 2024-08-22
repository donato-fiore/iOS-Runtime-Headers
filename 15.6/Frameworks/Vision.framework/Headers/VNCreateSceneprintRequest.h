// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCREATESCENEPRINTREQUEST_H
#define VNCREATESCENEPRINTREQUEST_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL returnAllResults;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;
@property (nonatomic) BOOL useCenterTileOnly;


+(Class)configurationClass;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)hasCancellationHook;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_applicableDetectorForRequestRevision:(NSUInteger)arg0 applicableDetectorOptions:(*id)arg1 loadedInSession:(id)arg2 error:(*id)arg3 ;
-(id)_applicableDetectorLoadedInSession:(id)arg0 error:(*id)arg1 ;
-(id)_detectorTypeForRequestRevision:(NSUInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif