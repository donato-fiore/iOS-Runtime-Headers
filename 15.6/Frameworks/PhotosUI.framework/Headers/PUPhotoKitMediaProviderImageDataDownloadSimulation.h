// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITMEDIAPROVIDERIMAGEDATADOWNLOADSIMULATION_H
#define PUPHOTOKITMEDIAPROVIDERIMAGEDATADOWNLOADSIMULATION_H

@class NSString, NSData, NSDictionary;


#import "PUPhotoKitMediaProviderDownloadSimulation.h"

@interface PUPhotoKitMediaProviderImageDataDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultDataUTI:) NSString *_resultDataUTI; // ivar: __resultDataUTI
@property (retain, nonatomic, setter=_setResultImageData:) NSData *_resultImageData; // ivar: __resultImageData
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // ivar: __resultInfo
@property (nonatomic, setter=_setResultOrientation:) NSInteger _resultOrientaton; // ivar: __resultOrientaton
@property (copy, nonatomic) id *externalProgressHandler; // ivar: _externalProgressHandler
@property (copy, nonatomic) id *externalResultHandler; // ivar: _externalResultHandler
@property (readonly, copy, nonatomic) id *internalProgressHandler; // ivar: _internalProgressHandler
@property (readonly, copy, nonatomic) id *internalResultHandler; // ivar: _internalResultHandler


-(id)init;
-(void)_handleResultImageData:(id)arg0 dataUTI:(id)arg1 orientation:(NSInteger)arg2 info:(id)arg3 ;
-(void)endSimulationWithError:(id)arg0 ;
-(void)updateSimulationWithProgress:(CGFloat)arg0 ;


@end


#endif