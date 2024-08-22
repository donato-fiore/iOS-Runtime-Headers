// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOKITMEDIAPROVIDERLIVEPHOTODOWNLOADSIMULATION_H
#define PUPHOTOKITMEDIAPROVIDERLIVEPHOTODOWNLOADSIMULATION_H

@class NSDictionary, PHLivePhoto;


#import "PUPhotoKitMediaProviderDownloadSimulation.h"

@interface PUPhotoKitMediaProviderLivePhotoDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // ivar: __resultInfo
@property (retain, nonatomic, setter=_setResultLivePhoto:) PHLivePhoto *_resultLivePhoto; // ivar: __resultLivePhoto
@property (copy, nonatomic) id *externalProgressHandler; // ivar: _externalProgressHandler
@property (copy, nonatomic) id *externalResultHandler; // ivar: _externalResultHandler
@property (readonly, copy, nonatomic) id *internalProgressHandler; // ivar: _internalProgressHandler
@property (readonly, copy, nonatomic) id *internalResultHandler; // ivar: _internalResultHandler


-(id)init;
-(void)_handleResultLivePhoto:(id)arg0 info:(id)arg1 ;
-(void)endSimulationWithError:(id)arg0 ;
-(void)updateSimulationWithProgress:(CGFloat)arg0 ;


@end


#endif