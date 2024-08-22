// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEDIAFORMATLIVEPHOTOCONVERSIONREQUEST_H
#define PHMEDIAFORMATLIVEPHOTOCONVERSIONREQUEST_H



#import "PHMediaFormatConversionCompositeRequest.h"
#import "PHMediaFormatConversionRequest.h"

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) PHMediaFormatConversionRequest *imageConversionRequest; // ivar: _imageConversionRequest
@property (retain) PHMediaFormatConversionRequest *videoConversionRequest; // ivar: _videoConversionRequest


+(id)requestForImageConversionRequest:(id)arg0 videoConversionRequest:(id)arg1 error:(*id)arg2 ;
+(id)requestForSource:(id)arg0 destinationCapabilities:(id)arg1 error:(*id)arg2 ;
-(void)didPreflightSubrequest:(id)arg0 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg0 ;
-(void)enumerateSubrequests:(id)arg0 ;


@end


#endif