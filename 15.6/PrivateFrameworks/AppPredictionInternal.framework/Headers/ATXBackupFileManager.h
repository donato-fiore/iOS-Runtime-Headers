// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBACKUPFILEMANAGER_H
#define ATXBACKUPFILEMANAGER_H

@class NSString;
@protocol ATXBackupDataProviderDelegate;

#import <Foundation/Foundation.h>


@interface ATXBackupFileManager : NSObject {
    backup_file_hdr_s _hdr;
}


@property (retain, nonatomic) NSString *backupDirectory; // ivar: _backupDirectory
@property (weak, nonatomic) NSObject<ATXBackupDataProviderDelegate> *dataProviderDelegate; // ivar: _dataProviderDelegate
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID


-(BOOL)commitWithContainerIdentifier:(id)arg0 ;
-(BOOL)compareBackupIDFromBackupWithPath:(id)arg0 toMarkerWithPath:(id)arg1 ;
-(BOOL)isD2DRestoreNeeded;
-(BOOL)isMobileBackupRestoreNeeded;
-(BOOL)isRestoreNeeded;
-(BOOL)restoreFromBackup:(id)arg0 ;
-(BOOL)restoreFromD2D;
-(BOOL)restoreFromMobileBackup;
-(BOOL)writeBackupFileForD2D;
-(BOOL)writeBackupMarkers:(char *)arg0 ;
-(BOOL)writeChunk:(id)arg0 withFilename:(id)arg1 toBackupFile:(struct __sFILE *)arg2 ;
-(BOOL)writeContainerID:(id)arg0 ;
-(BOOL)writeData:(id)arg0 toPath:(id)arg1 ;
-(BOOL)writeDeviceID:(id)arg0 ;
-(id)containerIDForCloudKitRestore;
-(id)initWithBackupDirectory:(id)arg0 dataProviderDelegate:(id)arg1 ;
-(id)pathForFile:(id)arg0 ;
-(id)readBackupData:(id)arg0 ;
-(id)writeBackupData:(id)arg0 toPath:(id)arg1 ;
-(id)writeBackupFileForDeviceID:(id)arg0 pareDown:(BOOL)arg1 ;
-(struct __sFILE *)openBackupFileForWriting:(id)arg0 ;


@end


#endif