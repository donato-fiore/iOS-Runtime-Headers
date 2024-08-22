// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCAPPLICATIONMODEL_H
#define RCAPPLICATIONMODEL_H

@class NSString, NSArray;
@protocol NSFetchedResultsControllerDelegate, RCFolder;


#import "RCSavedRecordingsModel.h"
#import "RCSavedRecordingsController.h"
#import "RCFoldersFetchedResultsController.h"

@interface RCApplicationModel : RCSavedRecordingsModel <NSFetchedResultsControllerDelegate>



@property (readonly, nonatomic) NSObject<RCFolder> *capturedOnWatchRecordingsFolder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *deletedRecordings;
@property (readonly, nonatomic) RCSavedRecordingsController *deletedRecordingsController; // ivar: _deletedRecordingsController
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<RCFolder> *favoriteRecordingsFolder;
@property (readonly, nonatomic) RCFoldersFetchedResultsController *foldersController; // ivar: _foldersController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<RCFolder> *recentlyDeletedRecordingsFolder;
@property (readonly, nonatomic) NSArray *recordings;
@property (readonly, nonatomic) RCSavedRecordingsController *recordingsController; // ivar: _recordingsController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userFolders;
@property (readonly, nonatomic) NSObject<RCFolder> *voiceMemosRecordingsFolder;


+(id)sharedApplicationModel;
-(NSUInteger)playableCountForFolder:(id)arg0 ;
-(NSUInteger)userFolderCount;
-(id)_folderWithType:(NSInteger)arg0 ;
-(id)_recordingsControllerWithFolder:(id)arg0 ;
-(id)_recordingsControllerWithPredicate:(id)arg0 ;
-(id)initWithContainer:(id)arg0 concurrencyType:(NSUInteger)arg1 ;
-(id)mostRecentRecording;
-(id)newChangeTrackingBackgroundModel;
-(id)playableRecordingsForFolder:(id)arg0 ;
-(id)recordingsControllerWithFolder:(id)arg0 ;
-(void)_deleteFolderAndRecordings:(id)arg0 shouldPermanentlyErase:(BOOL)arg1 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)deleteFolderAndAllPlayableRecordings:(id)arg0 ;
-(void)deleteFolderAndPermanentlyEraseAllPlayableRecordings:(id)arg0 ;


@end


#endif