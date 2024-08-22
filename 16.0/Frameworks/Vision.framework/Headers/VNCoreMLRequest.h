// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCOREMLREQUEST_H
#define VNCOREMLREQUEST_H



#import "VNImageBasedRequest.h"
#import "VNCoreMLModel.h"

@interface VNCoreMLRequest : VNImageBasedRequest

@property (nonatomic) NSUInteger imageCropAndScaleOption;
@property (readonly, nonatomic) VNCoreMLModel *model; // ivar: _model


+(Class)configurationClass;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)description;
-(id)initWithModel:(id)arg0 ;
-(id)initWithModel:(id)arg0 completionHandler:(id)arg1 ;
-(id)newDefaultRequestInstance;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif