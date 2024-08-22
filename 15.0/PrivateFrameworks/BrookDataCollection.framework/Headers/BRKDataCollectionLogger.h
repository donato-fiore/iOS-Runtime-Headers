// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKDATACOLLECTIONLOGGER_H
#define BRKDATACOLLECTIONLOGGER_H

@class NSString, NSMutableArray, NSDate, NSDateFormatter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRKDataCollectionScheduler.h"

@interface BRKDataCollectionLogger : NSObject {
    os_unfair_lock_s _lock;
    NSString *_storageDirectory;
    BRKDataCollectionScheduler *_uploadScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_idsFilesList;
    NSString *_dailyIdentifier;
    NSDate *_dailyIdentifierRefreshDate;
    NSUInteger _dailySessionUploadCount;
    NSDateFormatter *_dateFormatter;
}


@property (readonly, nonatomic) NSString *deviceIdentifier;


+(id)sharedInstance;
-(BOOL)_dataCollectionEnabled;
-(BOOL)_dataCollectionIsAllowedToRunInCurrentProcess;
-(BOOL)_shouldAllowDataCollectionUpload;
-(id)_idsFileListPath;
-(id)_init;
-(id)_internalDeviceIdentifier;
-(id)_pathExtension:(id)arg0 ;
-(id)_stringByRemovingPathExtension:(id)arg0 ;
-(id)markFileForUpload:(id)arg0 ;
-(void)_forceUpload;
-(void)_logUploadWithPath:(id)arg0 ;
-(void)_purgeFilesForOSUpdate;
-(void)_purgeOutdatedFiles;
-(void)_refreshDailyMetadata;
-(void)_scheduleUploadTimer;
-(void)_triggerUpload:(BOOL)arg0 ;
-(void)clearCollectedData;
-(void)dealloc;


@end


#endif