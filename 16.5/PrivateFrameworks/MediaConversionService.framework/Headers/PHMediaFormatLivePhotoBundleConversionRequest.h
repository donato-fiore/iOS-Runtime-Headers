// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEDIAFORMATLIVEPHOTOBUNDLECONVERSIONREQUEST_H
#define PHMEDIAFORMATLIVEPHOTOBUNDLECONVERSIONREQUEST_H



#import "PHMediaFormatConversionCompositeRequest.h"
#import "PHMediaFormatLivePhotoConversionRequest.h"

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) PHMediaFormatLivePhotoConversionRequest *livePhotoConversionRequest; // ivar: _livePhotoConversionRequest


-(BOOL)prepareWithError:(*id)arg0 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg0 ;
-(void)enumerateSubrequests:(id)arg0 ;
-(void)postProcessSuccessfulCompositeRequest;


@end


#endif