// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCLASSIFYJUNKIMAGEREQUEST_H
#define VNCLASSIFYJUNKIMAGEREQUEST_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VNClassifyJunkImageRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)knownClassificationsForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_applicableDetectorAndOptions:(*id)arg0 loadedInSession:(id)arg1 error:(*id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif