// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITMEDIAPROVIDERANIMATEDIMAGEDOWNLOADSIMULATION_H
#define PUPHOTOKITMEDIAPROVIDERANIMATEDIMAGEDOWNLOADSIMULATION_H

@class PHAnimatedImage, NSDictionary;


#import "PUPhotoKitMediaProviderDownloadSimulation.h"

@interface PUPhotoKitMediaProviderAnimatedImageDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultAnimatedImage:) PHAnimatedImage *_resultAnimatedImage; // ivar: __resultAnimatedImage
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // ivar: __resultInfo
@property (copy, nonatomic) id *externalProgressHandler; // ivar: _externalProgressHandler
@property (copy, nonatomic) id *externalResultHandler; // ivar: _externalResultHandler
@property (readonly, copy, nonatomic) id *internalProgressHandler; // ivar: _internalProgressHandler
@property (readonly, copy, nonatomic) id *internalResultHandler; // ivar: _internalResultHandler


-(id)init;
-(void)_handleResultAnimatedImage:(id)arg0 info:(id)arg1 ;
-(void)endSimulationWithError:(id)arg0 ;
-(void)updateSimulationWithProgress:(CGFloat)arg0 ;


@end


#endif