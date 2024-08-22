// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTCONTOURSREQUEST_H
#define VNDETECTCONTOURSREQUEST_H

@class NSNumber, NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectContoursRequest : VNImageBasedRequest

@property (nonatomic) float contrastAdjustment;
@property (retain, nonatomic) NSNumber *contrastPivot;
@property (nonatomic) BOOL detectDarkOnLight;
@property (nonatomic) BOOL detectsDarkOnLight;
@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly;
@property (nonatomic) BOOL inHierarchy;
@property (nonatomic) NSUInteger maximumImageDimension;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif