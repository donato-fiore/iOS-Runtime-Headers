// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTOBJECTATPOINTREQUEST_H
#define VNDETECTOBJECTATPOINTREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectObjectAtPointRequest : VNImageBasedRequest

@property (nonatomic) CGPoint inputPoint;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)initWithPoint:(struct CGPoint )arg0 ;
-(id)initWithPoint:(struct CGPoint )arg0 completionHandler:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif