// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUDUPLICATEACTIONCONTROLLER_H
#define PUDUPLICATEACTIONCONTROLLER_H

@class PXDuplicateAssetsAction, NSProgress, NSUndoManager;

#import <Foundation/Foundation.h>

#import "PUActivityProgressController.h"

@interface PUDuplicateActionController : NSObject {
    PXDuplicateAssetsAction *_action;
}


@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) PUActivityProgressController *progressController; // ivar: _progressController
@property (readonly, nonatomic) BOOL shouldUseAlertController;
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


+(void)_presentDuplicationWasInterruptedWithItemCount:(NSInteger)arg0 hasPhotos:(BOOL)arg1 hasVideos:(BOOL)arg2 ;
-(BOOL)_validateOriginalAssetResourcesForDuplicateAction:(NSInteger)arg0 ;
-(id)alertControllerForDuplicateActionWithPreview:(BOOL)arg0 newStillImageTime:(struct ? )arg1 userConfirmationHandler:(id)arg2 ;
-(id)init;
-(id)initWithSelectionSnapshot:(id)arg0 undoManager:(id)arg1 ;
-(void)_checkHasPhotos:(*BOOL)arg0 hasVideos:(*BOOL)arg1 ;
-(void)_finishedDuplicationWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_presentAlertWithError:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performDuplicateAction:(NSInteger)arg0 newStillImageTime:(struct ? )arg1 completionHandler:(id)arg2 ;


@end


#endif