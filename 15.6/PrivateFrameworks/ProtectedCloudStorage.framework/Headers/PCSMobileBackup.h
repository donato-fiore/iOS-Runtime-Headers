// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCSMOBILEBACKUP_H
#define PCSMOBILEBACKUP_H

@class MBManager;
@protocol MBManagerDelegate;

#import <Foundation/Foundation.h>


@interface PCSMobileBackup : NSObject <MBManagerDelegate>



@property (retain) MBManager *backupManager; // ivar: _backupManager


+(id)defaultMobileBackup;
-(BOOL)isBackupEnabled;
-(id)init;


@end


#endif