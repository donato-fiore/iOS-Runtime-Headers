// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLOCKEDNOTESMODEMIGRATOR_H
#define ICLOCKEDNOTESMODEMIGRATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICLockedNotesModeMigrator : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedMigrator;
-(BOOL)account:(id)arg0 hasNotesLockedWithMode:(short)arg1 ;
-(BOOL)account:(id)arg0 supportsMode:(short)arg1 ;
-(id)init;
-(id)lockedNotesInAccount:(id)arg0 ;
-(id)unsafelyMigrateNote:(id)arg0 toMode:(short)arg1 ;
-(void)migrateLockedNotesInAccount:(id)arg0 toMode:(short)arg1 window:(id)arg2 completionHandler:(id)arg3 ;
// -(void)presentBackwardsCompatibilityAlertIfNeededForAccount:(id)arg0 mode:(short)arg1 window:(id)arg2 confirmHandler:(id)arg3 cancelHandler:(unk)arg4  ;
-(void)presentDivergedModeAlertForNote:(id)arg0 mode:(short)arg1 window:(id)arg2 completionHandler:(id)arg3 ;
-(void)presentLockedNotesLearnMoreViewForAccount:(id)arg0 window:(id)arg1 ;
-(void)presentLockedNotesMigrationPromptIfNeededForAccount:(id)arg0 window:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentLockedNotesSwitchMigrationPromptIfSupportedForAccount:(id)arg0 window:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentLockedNotesWelcomeMigrationPromptIfSupportedForAccount:(id)arg0 window:(id)arg1 completionHandler:(id)arg2 ;
-(void)unsafelyMigrateLockedNotesInAccount:(id)arg0 toMode:(short)arg1 progress:(id)arg2 ;


@end


#endif