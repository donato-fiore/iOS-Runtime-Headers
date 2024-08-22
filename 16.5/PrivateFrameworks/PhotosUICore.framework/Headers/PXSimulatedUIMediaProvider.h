// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSIMULATEDUIMEDIAPROVIDER_H
#define PXSIMULATEDUIMEDIAPROVIDER_H


#import <Foundation/Foundation.h>

#import "PXUIMediaProvider.h"

@interface PXSimulatedUIMediaProvider : NSObject

@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider


+(id)defaultMediaProviderWithMediaProvider:(id)arg0 ;
-(NSInteger)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)_simulatedMediaRequestWithOriginalOptions:(id)arg0 simulatedResultHandler:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithMediaProvider:(id)arg0 ;


@end


#endif