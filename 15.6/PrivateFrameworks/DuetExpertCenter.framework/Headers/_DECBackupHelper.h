// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECBACKUPHELPER_H
#define _DECBACKUPHELPER_H

@class NSFileManager;

#import <Foundation/Foundation.h>


@interface _DECBackupHelper : NSObject {
    NSFileManager *_fm;
}




+(id)sharedInstance;
-(BOOL)backupNewerThanCurrentState;
-(BOOL)canBackup;
-(BOOL)canRestore;
-(BOOL)createBackupDirectoriesIfMissing;
-(BOOL)finishBackup;
-(BOOL)isClassCLocked;
-(BOOL)markRestoreAsNotDone;
-(BOOL)markVersionOfBackupDirectoryAsCurrent;
-(BOOL)probePathAt:(id)arg0 ;
-(BOOL)restoreDone;
-(BOOL)restoreStart;
-(BOOL)restoredAlready;
-(id)_currentBackupVersionPath;
-(id)backupPathForExpert:(id)arg0 ;
-(id)init;
-(id)restorePathForExpert:(id)arg0 ;
-(void)fixupDataProtection;


@end


#endif