// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VN5KJNH3EYUYALXNPZR5Z7ZI_H
#define VN5KJNH3EYUYALXNPZR5Z7ZI_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VN5kJNH3eYuyaLxNpZr5Z7zi : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger imageCropAndScaleOption;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)knownClassificationsForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedPrivateRevisions;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_applicableDetectorLoadedInSession:(id)arg0 appliedConfigurationOptions:(*id)arg1 error:(*id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)resultsSortingComparator:(SEL)arg0 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif