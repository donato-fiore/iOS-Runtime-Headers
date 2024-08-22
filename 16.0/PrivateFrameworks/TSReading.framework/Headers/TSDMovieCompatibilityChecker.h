// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMOVIECOMPATIBILITYCHECKER_H
#define TSDMOVIECOMPATIBILITYCHECKER_H

@class AVAsset, NSSet, NSError;

#import <Foundation/Foundation.h>


@interface TSDMovieCompatibilityChecker : NSObject {
    AVAsset *mAsset;
    ? mCustomMaxPlayableVideoDimensions;
    NSSet *mCustomPlayableVideoCodecTypes;
    int mCustomMaxPlayableVideoPixelsPerFrame;
}


@property (readonly, nonatomic) NSInteger compatibilityLevel; // ivar: mCompatibilityLevel
@property (readonly, nonatomic) NSError *error; // ivar: mError


-(BOOL)p_assetHasSupportedFileTypeOnAllDevices;
-(BOOL)p_isAudioTrackPlayableOnAllDevices:(id)arg0 ;
-(BOOL)p_isH263VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg0 ;
-(BOOL)p_isH264VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg0 ;
-(BOOL)p_isLoadedAssetPlayableOnAllDevices;
-(BOOL)p_isMPEG4VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg0 ;
-(BOOL)p_isSorenson3VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg0 ;
-(BOOL)p_isVideoTrackPlayableOnAllDevices:(id)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)p_sampleDescriptionExtensionAtomDataFromVideoFormatDescription:(struct opaqueCMFormatDescription *)arg0 forAtomType:(id)arg1 ;
-(void)cancel;
-(void)checkCompatibilityUpToLevel:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)checkCustomCompatibilityWithVideoCodecTypes:(id)arg0 maxPlayableVideoDimensions:(struct CGSize )arg1 maxPlayableVideoPixelsPerFrame:(int)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)p_didFinishCheckingCompatibilityUpToLevel:(NSInteger)arg0 actualLevel:(NSInteger)arg1 didCancel:(BOOL)arg2 error:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif