// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEDITBATCHPASTEACTION_H
#define PXEDITBATCHPASTEACTION_H



#import "PXEditBatchAction.h"

@interface PXEditBatchPasteAction : PXEditBatchAction {
    id *_target;
}




-(id)initWithPresetManager:(id)arg0 syncProgress:(id)arg1 asyncProgress:(id)arg2 asyncLoadingStatusManager:(id)arg3 forAssets:(id)arg4 ;
-(id)localizedActionName;
-(id)localizedProgressToastOngoingTitle;
-(id)localizedProgressToastRedoTitle;
-(id)localizedProgressToastSuccessTitle;
-(id)localizedProgressToastUndoTitle;
-(void)_syncPasteDidFinishWithResults:(id)arg0 didCancel:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)performAction:(id)arg0 ;


@end


#endif