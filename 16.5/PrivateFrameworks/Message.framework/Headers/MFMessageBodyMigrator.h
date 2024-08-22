// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGEBODYMIGRATOR_H
#define MFMESSAGEBODYMIGRATOR_H

@class NSString, EFLazyCache, NSMutableArray;
@protocol EFLoggable, EFScheduler;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"

@interface MFMessageBodyMigrator : NSObject <EFLoggable>

 {
    os_unfair_lock_s _upgradeLock;
}


@property (retain, nonatomic) NSObject<EFScheduler> *backgroundMigrationScheduler; // ivar: _backgroundMigrationScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EFLazyCache *directoryContentCache; // ivar: _directoryContentCache
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (retain, nonatomic) NSMutableArray *mailboxesToCheck; // ivar: _mailboxesToCheck
@property (readonly) Class superclass;


+(id)log;
-(BOOL)_mailboxHasUnmigratedFiles:(id)arg0 ;
-(id)_directoryContentsForPath:(id)arg0 ;
-(id)_filesForMessage:(id)arg0 ;
-(id)_legacyAttachmentDataDirectoryURLForGlobalMessageID:(NSInteger)arg0 basePath:(id)arg1 purgeable:(BOOL)arg2 ;
-(id)initWithLibrary:(id)arg0 ;
-(id)legacyAttachmentDirectoryForMessage:(id)arg0 ;
-(void)_migrateAllFilesForMailbox:(id)arg0 ;
-(void)_migrateDataFilesForMessage:(id)arg0 ;
-(void)migrateBodyForMessageIfNecessary:(id)arg0 ;
-(void)startMigratingBodies;


@end


#endif