// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEADJUSTMENTPRESETMANAGER_H
#define PEADJUSTMENTPRESETMANAGER_H

@class NSMutableDictionary, NSString, NSMutableArray, UIPasteboard, NSURL;
@protocol PEEditActionBatchDelegate, PELoadingStatusDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PEEditActionBatch.h"
#import "PEEditActionEventBuilder.h"
#import "PEPasteablePreset.h"
#import "PEResourceManager.h"

@interface PEAdjustmentPresetManager : NSObject <PEEditActionBatchDelegate>



@property (retain) NSMutableDictionary *adjustmentPresetURLMap; // ivar: _adjustmentPresetURLMap
@property (weak, nonatomic) NSObject<PELoadingStatusDelegate> *asyncLoadingStatusManager; // ivar: _asyncLoadingStatusManager
@property (nonatomic) BOOL crossPlatformSerializationEnabled; // ivar: _crossPlatformSerializationEnabled
@property (readonly, nonatomic) PEEditActionBatch *currentBatchAction; // ivar: _currentBatchAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PEEditActionEventBuilder *editActionEventBuilder; // ivar: _editActionEventBuilder
@property (readonly, nonatomic) BOOL hasPresetOnPasteboard;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBusyWithBatchAction;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // ivar: _loadingQueue
@property (retain) NSMutableArray *mutableAdjustPresetArray; // ivar: _mutableAdjustPresetArray
@property (retain) UIPasteboard *pasteboard; // ivar: _pasteboard
@property (readonly, nonatomic) PEPasteablePreset *presetFromPasteboard;
@property (readonly, nonatomic) PEResourceManager *resourceManager; // ivar: _resourceManager
@property (retain) NSURL *sharedPresetDirectoryURL; // ivar: _sharedPresetDirectoryURL
@property (readonly) Class superclass;


+(id)sharedPresetManager;
-(BOOL)assetHasPasteableAdjustments:(id)arg0 ;
-(id)_editActionEventBuilderForAction:(id)arg0 assets:(id)arg1 ;
-(id)init;
-(void)_copyPreset:(id)arg0 ;
-(void)_sendAnalyticsForCopyActionOnAsset:(id)arg0 copiedCompositionController:(id)arg1 ;
-(void)_sendAnalyticsForCurrentEditAction;
-(void)batch:(id)arg0 didCancelAction:(NSInteger)arg1 ;
-(void)batch:(id)arg0 didCompleteAction:(NSInteger)arg1 hasError:(BOOL)arg2 ;
-(void)batch:(id)arg0 willStartAction:(NSInteger)arg1 ;
-(void)cancelCurrentBatchAction;
-(void)clearPasteboard;
-(void)copyPresetFromAsset:(id)arg0 ;
-(void)copyPresetFromCompositionController:(id)arg0 ;
-(void)copyPresetFromCompositionController:(id)arg0 sourceAsset:(id)arg1 ;
-(void)pastePreset:(id)arg0 onAssets:(id)arg1 async:(BOOL)arg2 progress:(id)arg3 completion:(id)arg4 ;
-(void)replacePresets:(id)arg0 onAssets:(id)arg1 async:(BOOL)arg2 progress:(id)arg3 completion:(id)arg4 ;
-(void)revertAdjustmentsOnAssets:(id)arg0 async:(BOOL)arg1 progress:(id)arg2 completion:(id)arg3 ;


@end


#endif