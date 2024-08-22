// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMEDIAFORMATCHAINEDCONVERSIONREQUEST_H
#define PHMEDIAFORMATCHAINEDCONVERSIONREQUEST_H



#import "PHMediaFormatConversionCompositeRequest.h"
#import "PHMediaFormatConversionRequest.h"

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) PHMediaFormatConversionRequest *dependentRequest; // ivar: _dependentRequest
@property (retain) PHMediaFormatConversionRequest *independentRequest; // ivar: _independentRequest
@property (copy) id *successUpdateHandler; // ivar: _successUpdateHandler


+(id)chainedRequestForAdjustmentRenderRequest:(id)arg0 dependingOnRequest:(id)arg1 error:(*id)arg2 ;
+(id)chainedRequestForRequest:(id)arg0 dependingOnRequest:(id)arg1 error:(*id)arg2 successUpdateHandler:(id)arg3 ;
+(id)requestForSource:(id)arg0 destinationCapabilities:(id)arg1 error:(*id)arg2 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg0 ;
-(void)enumerateSubrequests:(id)arg0 ;
-(void)postProcessSuccessfulCompositeRequest;


@end


#endif