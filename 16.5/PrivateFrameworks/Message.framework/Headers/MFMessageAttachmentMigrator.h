// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGEATTACHMENTMIGRATOR_H
#define MFMESSAGEATTACHMENTMIGRATOR_H

@class NSString, NSConditionLock;
@protocol EFContentProtectionObserver, EFLoggable, EFScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"

@interface MFMessageAttachmentMigrator : NSObject <EFContentProtectionObserver, EFLoggable>

 {
    os_unfair_lock_s _upgradeLock;
}


@property (retain, nonatomic) NSObject<EFScheduler> *backgroundMigrationScheduler; // ivar: _backgroundMigrationScheduler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSConditionLock *migrationState; // ivar: _migrationState
@property (readonly) Class superclass;


+(BOOL)migrateMaildropFileForMessage:(id)arg0 mailDropMetadata:(id)arg1 ;
+(id)log;
-(BOOL)_checkContentProtectionState;
-(BOOL)_isMigratingAttachmentsOnThread;
-(BOOL)_messageHasAttachmentsToMigrate:(id)arg0 ;
-(BOOL)_migrateAttachmentsForMessage:(id)arg0 connection:(id)arg1 ;
-(id)initWithLibrary:(id)arg0 ;
-(void)_setMigratingAttachmentsOnThread:(BOOL)arg0 ;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)migrateAttachmentsForMessageIfNecessary:(id)arg0 ;
-(void)startMigratingAttachments;


@end


#endif