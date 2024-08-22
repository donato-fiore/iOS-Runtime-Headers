// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEDITSESSIONACTION_H
#define PXEDITSESSIONACTION_H

@class NSString;


#import "PXEditBatchAction.h"

@interface PXEditSessionAction : PXEditBatchAction {
    NSString *_undoMenuItemTitle;
    NSString *_redoMenuItemTitle;
}


@property (copy, nonatomic) NSString *localizedActionName; // ivar: _localizedActionName
@property (readonly, nonatomic) id *sourcePreset; // ivar: _sourcePreset
@property (readonly, nonatomic) id *targetPreset; // ivar: _targetPreset


-(id)initWithPresetManager:(id)arg0 asset:(id)arg1 sourcePreset:(id)arg2 targetPreset:(id)arg3 syncProgress:(id)arg4 asyncLoadingStatusManager:(id)arg5 ;
-(void)_applyPreset:(id)arg0 actionName:(id)arg1 completionHandler:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;
-(void)registerWithUndoManager:(id)arg0 ;


@end


#endif