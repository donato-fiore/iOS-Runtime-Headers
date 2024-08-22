// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSHARINGUTILITIES_H
#define PLASSETSHARINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLAssetSharingUtilities : NSObject



+(CGFloat)_durationForVideoAssetURL:(id)arg0 library:(id)arg1 ;
+(CGFloat)_durationForVideoFilePath:(id)arg0 ;
+(NSInteger)_estimatedOutputFileLengthForDuration:(CGFloat)arg0 exportPreset:(id)arg1 exportProperties:(id)arg2 ;
+(NSInteger)estimatedOutputFileLengthForVideoFilePath:(id)arg0 metadata:(id)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3 ;
+(NSInteger)estimatedOutputFileLengthForVideoURL:(id)arg0 library:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 ;
+(id)_objectBuilderFromVideoFilePath:(id)arg0 metadata:(id)arg1 ;
+(id)_playerItemForVideoAssetURL:(id)arg0 library:(id)arg1 ;
+(id)assetForVideoURL:(id)arg0 metadata:(id)arg1 library:(id)arg2 outAudioMix:(*id)arg3 outVideoComposition:(*id)arg4 ;
+(id)exportSessionForVideoFilePath:(id)arg0 metadata:(id)arg1 exportPreset:(id)arg2 ;
+(id)exportSessionForVideoURL:(id)arg0 library:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 ;
+(id)filePathForVideoURL:(id)arg0 library:(id)arg1 outMetadata:(*id)arg2 ;
+(id)playerItemForVideoFilePath:(id)arg0 metadata:(id)arg1 ;
+(id)playerItemForVideoURL:(id)arg0 fallbackFilePath:(id)arg1 library:(id)arg2 ;
+(struct CGImage *)_thumbnailForAssetURL:(id)arg0 library:(id)arg1 useAspect:(BOOL)arg2 ;
+(struct CGImage *)aspectRatioThumbnailForAssetURL:(id)arg0 library:(id)arg1 ;
+(struct CGImage *)thumbnailForAssetURL:(id)arg0 library:(id)arg1 ;


@end


#endif