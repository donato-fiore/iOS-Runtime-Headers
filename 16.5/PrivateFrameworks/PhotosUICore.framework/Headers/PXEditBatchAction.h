// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEDITBATCHACTION_H
#define PXEDITBATCHACTION_H

@class NSArray, NSMutableDictionary, NSProgress;
@protocol OS_dispatch_queue, PXEditPresetManager;


#import "PXAction.h"

@interface PXEditBatchAction : PXAction {
    NSObject<OS_dispatch_queue> *_actionQueue;
    NSArray *_assets;
    NSArray *_asyncAssets;
    NSArray *_syncAssets;
    NSMutableDictionary *_undoActionMap;
}


@property (nonatomic) BOOL allowSynchronousRendering; // ivar: _allowSynchronousRendering
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSProgress *asyncProgress; // ivar: _asyncProgress
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSObject<PXEditPresetManager> *manager; // ivar: _manager
@property (readonly, nonatomic) NSProgress *syncProgress; // ivar: _syncProgress


-(BOOL)shouldRenderSynchronouslyForAsset:(id)arg0 ;
-(id)asyncAssets;
-(id)localizedProgressToastOngoingTitle;
-(id)localizedProgressToastRedoTitle;
-(id)localizedProgressToastSuccessTitle;
-(id)localizedProgressToastUndoTitle;
-(id)prefetchOriginalMetadataForAssets:(id)arg0 ;
-(id)syncAssets;
-(void)_cancel;
-(void)_reportResults:(id)arg0 ;
-(void)_saveResults:(id)arg0 needsUndoMap:(BOOL)arg1 completion:(id)arg2 ;
-(void)_saveUndoMapFromResults:(id)arg0 completion:(id)arg1 ;
-(void)_syncUndoDidFinishWithResults:(id)arg0 didCancel:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)executeWithUndoManager:(id)arg0 completionHandler:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;
-(void)saveResults:(id)arg0 completion:(id)arg1 ;
-(void)willBeginActionIsAsync:(BOOL)arg0 itemCount:(NSUInteger)arg1 ;
-(void)willBeginActionWithLocalizedTitle:(id)arg0 isAsync:(BOOL)arg1 itemCount:(NSUInteger)arg2 ;


@end


#endif