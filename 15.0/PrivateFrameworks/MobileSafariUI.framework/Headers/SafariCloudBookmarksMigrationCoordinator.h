// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAFARICLOUDBOOKMARKSMIGRATIONCOORDINATOR_H
#define SAFARICLOUDBOOKMARKSMIGRATIONCOORDINATOR_H

@class WBSCloudBookmarksMigrationCoordinator, NSString;
@protocol WBSCloudBookmarksMigrationCoordinatorLocalDataProvider;



@interface SafariCloudBookmarksMigrationCoordinator : WBSCloudBookmarksMigrationCoordinator <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)migrationCoordinator;
-(BOOL)_evaluateMigrationEnabled;
-(id)initWithSyncAgent:(id)arg0 ;
-(void)_detectedLocalMigrationStateTransition:(id)arg0 ;
-(void)dealloc;
-(void)getLocalMigrationStateForMigrationCoordinator:(id)arg0 completionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif