// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef READERWRITEREXPORTCONTROLLER_H
#define READERWRITEREXPORTCONTROLLER_H

@class NSError, PVVideoCompositing;


#import "ExportController.h"

@interface ReaderWriterExportController : ExportController {
    float m_progress;
    int m_numberOfPasses;
    NSInteger m_status;
    NSError *m_error;
    BOOL m_cancel;
    BOOL m_firstPassDone;
    PVVideoCompositing *m_customCompositor;
}




+(id)stringForStatus:(NSInteger)arg0 ;
-(NSInteger)mapAssetReaderStatusToExportStatus:(NSInteger)arg0 ;
-(NSInteger)mapAssetWriterStatusToExportStatus:(NSInteger)arg0 ;
-(float)progress;
-(id)_compositionForExport;
-(id)audioCompressionSettings;
-(id)fileTypeFromExtension;
-(id)videoCompressionSettings;
-(id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg0 ;
-(void)_setupMovieController;
-(void)cancelExport;
-(void)continueExportAfterDelay;
-(void)continueExportForNextPreset;
-(void)noteSessionProgressed:(float)arg0 ;
-(void)releaseMovieController;
-(void)transferSampleBuffers:(id)arg0 assetReader:(id)arg1 assetWriterInput:(id)arg2 assetWriter:(id)arg3 timeRangeToExport:(struct ? )arg4 queue:(id)arg5 pass:(NSInteger)arg6 completionBlock:(id)arg7 ;
-(void)updateStatusAndErrorFromReader:(id)arg0 andWriter:(id)arg1 ;
-(void)updateThemeImages;


@end


#endif