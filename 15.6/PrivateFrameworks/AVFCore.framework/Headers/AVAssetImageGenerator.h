// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETIMAGEGENERATOR_H
#define AVASSETIMAGEGENERATOR_H

@class NSString;
@protocol AVVideoCompositing;

#import <Foundation/Foundation.h>

#import "AVAssetImageGeneratorInternal.h"
#import "AVAsset.h"
#import "AVVideoComposition.h"

@interface AVAssetImageGenerator : NSObject {
    AVAssetImageGeneratorInternal *_priv;
}


@property (copy, nonatomic) NSString *apertureMode;
@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) NSObject<AVVideoCompositing> *customVideoCompositor;
@property (nonatomic) CGSize maximumSize;
@property (nonatomic) ? requestedTimeToleranceAfter;
@property (nonatomic) ? requestedTimeToleranceBefore;
@property (copy, nonatomic) AVVideoComposition *videoComposition;


+(id)assetImageGeneratorWithAsset:(id)arg0 ;
-(BOOL)_ensureFigAssetImageGeneratorAllowingSynchronousPropertyLoad:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)prefersStandardDynamicRange;
-(id)_NSErrorForError:(int)arg0 ;
-(id)_makeAutoreleasedAssetReader;
-(id)_optionsDictionary;
-(id)_requestWithRequestID:(id)arg0 ;
-(id)_videoSettingWithSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(struct CGImage *)_copyCGImageAtTime:(struct ? )arg0 usingAssetReader:(id)arg1 error:(*id)arg2 ;
-(struct CGImage *)copyCGImageAtTime:(struct ? )arg0 actualTime:(struct ? *)arg1 error:(*id)arg2 ;
-(struct CGSize )_scaledSizeForRenderSize:(struct CGSize )arg0 ;
-(void)_didGenerateCGImage:(id)arg0 ;
-(void)_failedToGenerateCGImage:(id)arg0 ;
-(void)_serverDied;
-(void)cancelAllCGImageGeneration;
-(void)dealloc;
-(void)generateCGImagesAsynchronouslyForTimes:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPrefersStandardDynamicRange:(BOOL)arg0 ;


@end


#endif