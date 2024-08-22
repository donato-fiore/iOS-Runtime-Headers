// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEBLURSCOREREQUEST_H
#define VNIMAGEBLURSCOREREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (nonatomic) NSUInteger blurDeterminationMethod;
@property (nonatomic) NSUInteger maximumIntermediateSideLength;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif