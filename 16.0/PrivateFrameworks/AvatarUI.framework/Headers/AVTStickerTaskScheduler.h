// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERTASKSCHEDULER_H
#define AVTSTICKERTASKSCHEDULER_H

@class NSArray, NSString, NSMutableDictionary;
@protocol AVTStickerTaskScheduler, AVTUILogger, AVTAvatarRecordDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTStickerTaskScheduler : NSObject <AVTStickerTaskScheduler>



@property (retain) NSArray *allAvatarRecordIdentifiers; // ivar: _allAvatarRecordIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTAvatarRecordDataSource> *recordDataSource; // ivar: _recordDataSource
@property (retain) NSString *selectedAvatarRecordIdentifier; // ivar: _selectedAvatarRecordIdentifier
@property (retain) NSArray *sortedVisibleIndexPaths; // ivar: _sortedVisibleIndexPaths
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // ivar: _stateLock
@property (readonly, nonatomic) NSMutableDictionary *stickerPickerBacklogTasks; // ivar: _stickerPickerBacklogTasks
@property (readonly, nonatomic) NSMutableDictionary *stickerPickerTasks; // ivar: _stickerPickerTasks
@property (readonly, nonatomic) NSMutableDictionary *stickerSheetPlaceholderTasks; // ivar: _stickerSheetPlaceholderTasks
@property (readonly, nonatomic) NSMutableDictionary *stickerSheetsTasks; // ivar: _stickerSheetsTasks
@property (readonly) Class superclass;


+(id)schedulerWithRecordDataSource:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 recordDataSource:(id)arg1 ;
-(id)nextPickerThumbnailFromTasksBacklogStorage:(id)arg0 allAvatarRecordIdentifiers:(id)arg1 ;
-(id)nextPickerThumbnailFromTasksStorage:(id)arg0 allAvatarRecordIdentifiers:(id)arg1 ;
-(id)nextSelectedSheetStickerFromTasksStorage:(id)arg0 selectedAvatarRecordIdentifier:(id)arg1 ;
-(id)nextSheetPlaceHolderFromTasksStorage:(id)arg0 allAvatarRecordIdentifiers:(id)arg1 ;
-(id)nextSheetStickerFromTasksStorage:(id)arg0 allAvatarRecordIdentifiers:(id)arg1 ;
-(id)nextTaskToRunFromStickerPickerTasks:(id)arg0 stickerPickerBacklogStorage:(id)arg1 stickerSheetPlaceholderTasks:(id)arg2 stickerSheetsTasks:(id)arg3 ;
-(id)nextVisibleSelectedSheetStickerFromTasksStorage:(id)arg0 selectedAvatarRecordIdentifier:(id)arg1 visibleIndexPaths:(id)arg2 ;
-(id)selectedPickerThumbnailFromTasksStorage:(id)arg0 selectedAvatarRecordIdentifier:(id)arg1 ;
-(id)selectedSheetPlaceholderFromTasksStorage:(id)arg0 selectedAvatarRecordIdentifier:(id)arg1 ;
-(void)cancelAllTasks;
// -(void)cancelPickerTask:(id)arg0 avatarRecordIdentifier:(unk)arg1  ;
-(void)cancelStickerSheetTasksForAvatarRecordIdentifier:(id)arg0 ;
-(void)cancelTask:(id)arg0 ;
-(void)didCompleteTask:(id)arg0 ;
// -(void)lowerStickerPickerTaskPriority:(id)arg0 avatarRecordIdentifier:(unk)arg1  ;
-(void)lowerTaskPriority:(id)arg0 ;
-(void)performStateWork:(id)arg0 ;
-(void)reloadData;
-(void)scheduleStickerTask:(id)arg0 ;
-(void)scheduleTask:(id)arg0 ;
-(void)setVisibleIndexPaths:(id)arg0 ;
-(void)startTask:(id)arg0 ;


@end


#endif