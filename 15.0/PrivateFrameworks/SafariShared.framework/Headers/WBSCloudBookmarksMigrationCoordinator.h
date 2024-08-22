// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCLOUDBOOKMARKSMIGRATIONCOORDINATOR_H
#define WBSCLOUDBOOKMARKSMIGRATIONCOORDINATOR_H

@protocol WBSSafariBookmarksSyncAgentProtocol, OS_dispatch_queue, WBSLogger, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider;

#import <Foundation/Foundation.h>


@interface WBSCloudBookmarksMigrationCoordinator : NSObject {
    id<WBSSafariBookmarksSyncAgentProtocol> *_syncAgent;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _didDetermineReadyToMigrate;
    NSInteger _skipReason;
}


@property (retain, nonatomic) NSObject<WBSLogger> *keyActionsLogger; // ivar: _keyActionsLogger
@property (readonly, weak, nonatomic) NSObject<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> *localDataProvider; // ivar: _localDataProvider
@property (nonatomic, getter=isMigrationEnabled) BOOL migrationEnabled; // ivar: _migrationEnabled
@property (readonly, nonatomic) NSObject<WBSSafariBookmarksSyncAgentProtocol> *syncAgent;


-(id)init;
-(id)initWithSyncAgent:(id)arg0 localDataProvider:(id)arg1 ;
-(void)_beginMigrationIfPossible;
-(void)_considerOverridingOtherMigratingDevice;
-(void)_determineCourseOfActionFromRemoteMigrationState;
-(void)_determineCourseOfActionFromSyncAgentMigrationState;
-(void)_logErrorAsKeyAction:(id)arg0 ;
-(void)_logKeyAction:(id)arg0 ;
-(void)startCoordinatingMigration;


@end


#endif