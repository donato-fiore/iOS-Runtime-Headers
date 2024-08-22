// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXREADERWRITEREXPORTCONTROLLER_H
#define JFXREADERWRITEREXPORTCONTROLLER_H

@class PVVideoCompositing;


#import "JFXExportController.h"

@interface JFXReaderWriterExportController : JFXExportController

@property (retain, nonatomic) PVVideoCompositing *customCompositor; // ivar: _customCompositor
@property (nonatomic) float progress; // ivar: _progress


-(NSInteger)mapAssetReaderStatusToExportStatus:(NSInteger)arg0 ;
-(NSInteger)mapAssetWriterStatusToExportStatus:(NSInteger)arg0 ;
-(id)JFX_videoCompressionSettingsFromAssistant:(id)arg0 ;
-(id)audioCompressionSettings;
-(id)fileTypeFromExtension;
-(id)videoCompressionSettings:(struct CGSize )arg0 ;
-(id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg0 ;
-(struct CGSize )applyCompositionAspectRatioToAVPresetSize:(struct CGSize )arg0 compositionSize:(struct CGSize )arg1 ;
-(void)JFX_continueExportForNextPreset;
-(void)cancelExportWithStatus:(NSInteger)arg0 ;
-(void)continueExportAfterDelay;
-(void)transferSampleBuffers:(id)arg0 assetReader:(id)arg1 assetWriterInput:(id)arg2 assetWriter:(id)arg3 timeRangeToExport:(struct ? )arg4 queue:(id)arg5 pass:(NSInteger)arg6 completionBlock:(id)arg7 ;
-(void)updateSessionProgress:(id)arg0 ;
-(void)updateStatusAndErrorFromReader:(id)arg0 andWriter:(id)arg1 ;


@end


#endif