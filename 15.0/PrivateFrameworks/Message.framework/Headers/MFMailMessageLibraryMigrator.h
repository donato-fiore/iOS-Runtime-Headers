// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILMESSAGELIBRARYMIGRATOR_H
#define MFMAILMESSAGELIBRARYMIGRATOR_H

@class NSMutableArray, NSString, NSConditionLock;
@protocol EFContentProtectionObserver, EFLoggable, OS_dispatch_queue, MFMailMessageLibraryMigratorDelegate;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibraryMigrator : NSObject <EFContentProtectionObserver, EFLoggable>

 {
    BOOL _needsSpotlightReindex;
    BOOL _needsRebuildTriggers;
    BOOL _needsRebuildMessageInfoIndex;
    NSMutableArray *_postMigrationBlocks;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<MFMailMessageLibraryMigratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSConditionLock *migrationState; // ivar: _migrationState
@property (readonly) Class superclass;


+(id)log;
+(int)currentVersion;
-(BOOL)_checkForeignKeysWithConnection:(id)arg0 ;
-(BOOL)migrateWithDatabaseConnection:(id)arg0 schema:(id)arg1 ;
-(BOOL)needsRebuildMessageInfoIndex;
-(BOOL)needsRebuildTriggers;
-(BOOL)needsSpotlightReindex;
-(NSInteger)_checkContentProtectionState;
-(NSInteger)_runMigrationStepsFromVersion:(int)arg0 connection:(id)arg1 schema:(id)arg2 ;
-(NSInteger)attachProtectedDatabaseWithConnection:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)addPostMigrationBlock:(id)arg0 ;
-(void)contentProtectionStateChanged:(int)arg0 previousState:(int)arg1 ;
-(void)detachProtectedDatabaseWithConnection:(id)arg0 ;
-(void)noteNeedsRebuildTriggers;
-(void)noteNeedsSpotlightReindex;
-(void)noteRebuildMessageInfoIndex;
-(void)resetTTRPromptAndForceReindex;
-(void)runPostMigrationBlocksWithConnection:(id)arg0 ;


@end


#endif