// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREPHOTOBRACKETSETTINGS_H
#define AVCAPTUREPHOTOBRACKETSETTINGS_H

@class NSArray;


#import "AVCapturePhotoSettings.h"
#import "AVCapturePhotoBracketSettingsInternal.h"

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {
    AVCapturePhotoBracketSettingsInternal *_bracketSettingsInternal;
}


@property (readonly, nonatomic) NSArray *bracketedSettings;
@property (nonatomic, getter=isLensStabilizationEnabled) BOOL lensStabilizationEnabled;


+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg0 processedFormat:(id)arg1 bracketedSettings:(id)arg2 ;
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg0 rawFileType:(id)arg1 processedFormat:(id)arg2 processedFileType:(id)arg3 bracketedSettings:(id)arg4 ;
+(void)initialize;
-(id)_initWithFormat:(id)arg0 processedFileType:(id)arg1 rawPixelFormatType:(unsigned int)arg2 rawFileType:(id)arg3 bracketedSettings:(id)arg4 uniqueID:(NSInteger)arg5 exceptionReason:(*id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg0 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg0 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg0 ;
-(void)setAutoVirtualDeviceFusionEnabled:(BOOL)arg0 ;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg0 ;
-(void)setFlashMode:(NSInteger)arg0 ;
-(void)setHDRMode:(NSInteger)arg0 ;
-(void)setLivePhotoMovieFileURL:(id)arg0 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg0 ;
-(void)setLivePhotoMovieMetadata:(id)arg0 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg0 ;


@end


#endif