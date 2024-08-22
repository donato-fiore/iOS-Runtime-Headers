// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROAUTOEDITOR_H
#define MIROAUTOEDITOR_H

@class NSOperationQueue, NSDate;
@protocol MiroSequence;

#import <Foundation/Foundation.h>

#import "MiroMemory.h"
#import "MovieController.h"
#import "Project.h"
#import "VEKProgressWatcher.h"

@interface MiroAutoEditor : NSObject

@property CGFloat autoEditFinishedTimePPT; // ivar: _autoEditFinishedTimePPT
@property CGFloat autoEditStartedTimePPT; // ivar: _autoEditStartedTimePPT
@property (copy, nonatomic) id *downloadCompleted; // ivar: _downloadCompleted
@property int downloadPolicy; // ivar: _downloadPolicy
@property float downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) MiroMemory *memory; // ivar: _memory
@property (retain) MovieController *movieController; // ivar: _movieController
@property (nonatomic) CGSize naturalSize; // ivar: _naturalSize
@property (retain, nonatomic) id *observer; // ivar: _observer
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property CGFloat playbackStartedTimePPT; // ivar: _playbackStartedTimePPT
@property (retain) NSDate *prepareStartedTime; // ivar: _prepareStartedTime
@property (nonatomic) float progress; // ivar: _progress
@property (retain) Project *project; // ivar: _project
@property NSInteger remainingAssetsToDownload; // ivar: _remainingAssetsToDownload
@property (retain) NSObject<MiroSequence> *sequence;
@property BOOL shouldBuildMovieController; // ivar: _shouldBuildMovieController
@property BOOL shouldSave; // ivar: _shouldSave
@property (retain) NSDate *tapStartedTime; // ivar: _tapStartedTime
@property BOOL topLevelCancel; // ivar: _topLevelCancel
@property CGFloat uiDidAppearTimePPT; // ivar: _uiDidAppearTimePPT
@property CGFloat uiDidLoadTimePPT; // ivar: _uiDidLoadTimePPT
@property (retain) VEKProgressWatcher *watcherProperty; // ivar: _watcherProperty


+(id)sharedInstanceForPregenerate;
-(BOOL)isAutoEditing;
-(BOOL)isBusy;
-(BOOL)shouldNotifyProgress;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForPregenerate;
-(id)initWithMemory:(id)arg0 shouldBuildMovieController:(BOOL)arg1 ;
-(void)_cancel;
-(void)_downloadSongForPregenrateWithMemory:(id)arg0 ;
-(void)_logMemoryStuff:(id)arg0 ;
-(void)cancelAutoEdit;
-(void)dealloc;
-(void)fetchAndPrintAssets:(id)arg0 andMemory:(id)arg1 ;
-(void)logFreeze:(id)arg0 message:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performAutoEdit;
-(void)performAutoEditWithCompletionHandler:(id)arg0 ;
-(void)performPersistWithPersistableThing:(id)arg0 ;
-(void)pregenerateMemory:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateDownloadProgress:(float)arg0 ;
-(void)updateMovieController:(id)arg0 ;
-(void)updateProgress:(float)arg0 ;
-(void)updateProject:(id)arg0 ;
-(void)updateRemainingAssetsToDownload:(NSInteger)arg0 ;


@end


#endif