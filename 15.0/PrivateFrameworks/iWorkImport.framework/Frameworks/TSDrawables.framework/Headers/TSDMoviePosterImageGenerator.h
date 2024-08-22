// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMOVIEPOSTERIMAGEGENERATOR_H
#define TSDMOVIEPOSTERIMAGEGENERATOR_H

@class AVAsset, AVAssetImageGenerator;

#import <Foundation/Foundation.h>


@interface TSDMoviePosterImageGenerator : NSObject {
    AVAsset *_asset;
    AVAssetImageGenerator *_assetImageGenerator;
    uint8_t _isCancelled;
}


@property (nonatomic) CGSize maximumSize; // ivar: _maximumSize


-(id)initWithAsset:(id)arg0 ;
-(struct CGImage *)copyCGImageAtTime:(struct ? )arg0 error:(*id)arg1 ;
-(struct CGImage *)p_applyPreferredTransform:(struct CGAffineTransform )arg0 toImage:(struct CGImage *)arg1 ;
-(struct CGImage *)p_copyCGImageForTime:(struct ? )arg0 error:(*id)arg1 ;
-(struct CGImage *)p_copyCGImageUsingAssetImageGeneratorForTime:(struct ? )arg0 error:(*id)arg1 ;
-(struct CGImage *)p_copyCGImageUsingAssetReaderForTime:(struct ? )arg0 ;
-(struct CGSize )p_scaledSizeForRenderSize:(struct CGSize )arg0 ;
-(void)cancelAllCGImageGeneration;
-(void)dealloc;
-(void)generateCGImageAsynchronouslyForTime:(struct ? )arg0 completionHandler:(id)arg1 ;


@end


#endif