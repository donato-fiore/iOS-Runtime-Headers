// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUDELETEPHOTOSACTIONCONTROLLER_H
#define PUDELETEPHOTOSACTIONCONTROLLER_H

@class NSArray, UIAlertController, NSUndoManager;
@protocol PUDeletePhotosActionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PUDeletePhotosActionController : NSObject {
    id *_completionHandler;
    id *_willDeleteHandler;
}


@property (readonly, copy, nonatomic) NSArray *_assets; // ivar: __assets
@property (retain, nonatomic, setter=_setMainAlertController:) UIAlertController *_mainAlertController; // ivar: __mainAlertController
@property (retain, nonatomic, setter=_setOneTimeConfirmationAlertController:) UIAlertController *_oneTimeConfirmationAlertController; // ivar: __oneTimeConfirmationAlertController
@property (readonly, copy, nonatomic) NSArray *_plAdditionalAssetsToDelete; // ivar: __plAdditionalAssetsToDelete
@property (readonly, copy, nonatomic) NSArray *_plAssets; // ivar: __plAssets
@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, weak, nonatomic) NSObject<PUDeletePhotosActionControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldSkipDeleteConfirmation; // ivar: _shouldSkipDeleteConfirmation
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


-(id)initWithAction:(NSInteger)arg0 assets:(id)arg1 undoManager:(id)arg2 delegate:(id)arg3 ;
-(void)_ensureMainAlertController;
-(void)_ensureOneTimeConfirmationAlertController;
-(void)_getDeleteActionSheetTitle:(*id)arg0 destructiveButtonTitle:(*id)arg1 cancelButtonTitle:(*id)arg2 isDestructiveBehavior:(*BOOL)arg3 forAssets:(id)arg4 duplicatePhotoStreamCount:(NSInteger)arg5 ;
-(void)_handleFinalUserDecisionShouldDelete:(BOOL)arg0 ;
-(void)_handleMainAlertConfirmed:(BOOL)arg0 ;
-(void)_handleOneTimeAlertConfirmed;
-(void)_runDestructiveActionWithCompletion:(id)arg0 ;
-(void)_showOnetimeConfirmation;
// -(void)performWithWillDeleteHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(id)arg0 ;


@end


#endif