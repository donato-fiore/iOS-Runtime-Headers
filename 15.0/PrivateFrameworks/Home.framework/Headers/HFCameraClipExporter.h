// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERACLIPEXPORTER_H
#define HFCAMERACLIPEXPORTER_H


#import <Foundation/Foundation.h>


@interface HFCameraClipExporter : NSObject



+(BOOL)hasCachedRecordingForCameraClip:(id)arg0 ;
+(CGFloat)durationOfCachedRecordingForCameraClip:(id)arg0 ;
+(id)_exportableCameraName:(id)arg0 ;
+(id)destinationURLForMovieFileUsingKey:(id)arg0 ;
+(id)destinationURLForStrippedAudioFileFromCameraClipUUIDString:(id)arg0 ;
+(id)userFriendlyExportURLForCameraName:(id)arg0 withStartDate:(id)arg1 ;


@end


#endif