// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VN5KJNH3EYUYALXNPZR5Z7ZI_H
#define VN5KJNH3EYUYALXNPZR5Z7ZI_H



#import "VNImageBasedRequest.h"

@interface VN5kJNH3eYuyaLxNpZr5Z7zi : VNImageBasedRequest

@property NSUInteger imageCropAndScaleOption;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)knownClassificationsForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedPrivateRevisions;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif