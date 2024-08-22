// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHVALIDATOR_H
#define PHVALIDATOR_H


#import <Foundation/Foundation.h>


@interface PHValidator : NSObject



+(BOOL)isSupportedAudioAtPath:(id)arg0 ;
+(BOOL)isSupportedImageAtPath:(id)arg0 ;
+(BOOL)isSupportedMovieAtPath:(id)arg0 ;
+(unsigned char)mediaTypeForContentType:(id)arg0 ;
+(unsigned char)mediaTypeForURL:(id)arg0 ;
-(BOOL)_validateImageSource:(struct CGImageSource *)arg0 error:(*id)arg1 ;
-(BOOL)_validateLivePhotoResourceURLs:(id)arg0 videoComplementMetadata:(id)arg1 error:(*id)arg2 ;
-(BOOL)_validateVideoURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)getLivePhotoVideoMetadataFromURL:(id)arg0 videoComplementMetadata:(id)arg1 pairingIdentifier:(*id)arg2 videoDuration:(struct ? *)arg3 imageDisplayTime:(struct ? *)arg4 error:(*id)arg5 ;
-(BOOL)isValidImagePathExtension:(id)arg0 ;
-(BOOL)isValidVideoPathExtension:(id)arg0 ;
-(BOOL)validateData:(id)arg0 withOptions:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)validateURL:(id)arg0 withOptions:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)validateURLs:(id)arg0 withOptions:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)validateURLs:(id)arg0 withOptions:(NSUInteger)arg1 videoComplementMetadata:(id)arg2 error:(*id)arg3 ;
-(void)getLivePhotoImageMetadataFromURL:(id)arg0 pairingIdentifier:(*id)arg1 ;


@end


#endif