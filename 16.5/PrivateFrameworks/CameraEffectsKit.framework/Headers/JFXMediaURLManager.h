// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXMEDIAURLMANAGER_H
#define JFXMEDIAURLMANAGER_H

@protocol JTFileURLSource;

#import <Foundation/Foundation.h>


@interface JFXMediaURLManager : NSObject

@property (weak, nonatomic) NSObject<JTFileURLSource> *urlSource; // ivar: _urlSource


+(BOOL)ODRAssetsAreEmbedded;
+(BOOL)_createDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
+(id)_audioRecordingURL:(*id)arg0 ;
+(id)_capturedPhotoURL:(*id)arg0 isHEIF:(BOOL)arg1 ;
+(id)_photoExportURL:(*id)arg0 isHEIF:(BOOL)arg1 ;
+(id)_tempFileURLWithDirectory:(id)arg0 file:(id)arg1 error:(*id)arg2 ;
+(id)_temporaryPhotoURL:(*id)arg0 fileName:(id)arg1 ;
+(id)_videoExportURL:(*id)arg0 ;
+(id)audioRecordingURL:(*id)arg0 ;
+(id)cachedExportFileURLWithError:(*id)arg0 ;
+(id)capturedPhotoURL:(*id)arg0 isHEIF:(BOOL)arg1 ;
+(id)photoExportURL:(*id)arg0 isHEIF:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)temporaryPhotoURL:(*id)arg0 fileName:(id)arg1 ;
+(id)videoExportURL:(*id)arg0 ;
+(id)videoRecordingFolderURL:(*id)arg0 ;
+(void)_cleanupDirectory:(id)arg0 ;
+(void)cleanupTemporaryDirectories;
+(void)jfx_cleanupOldProjects;


@end


#endif