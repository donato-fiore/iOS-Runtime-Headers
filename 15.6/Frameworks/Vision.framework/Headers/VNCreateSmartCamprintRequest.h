// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCREATESMARTCAMPRINTREQUEST_H
#define VNCREATESMARTCAMPRINTREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNCreateSmartCamprintRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL returnAllResults;


+(Class)configurationClass;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif