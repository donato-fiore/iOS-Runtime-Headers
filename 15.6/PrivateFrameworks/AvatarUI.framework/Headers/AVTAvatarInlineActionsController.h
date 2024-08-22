// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARINLINEACTIONSCONTROLLER_H
#define AVTAVATARINLINEACTIONSCONTROLLER_H

@class NSString, NSArray;
@protocol AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsController, AVTAvatarActionsControllerDelegate;

#import <Foundation/Foundation.h>

#import "AVTAvatarActionsProvider.h"
#import "AVTViewSessionProvider.h"
#import "AVTAvatarRecordDataSource.h"
#import "AVTAvatarEditorViewController.h"
#import "AVTUIEnvironment.h"

@interface AVTAvatarInlineActionsController : NSObject <AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsController>



@property (retain, nonatomic) AVTAvatarActionsProvider *actionsModel; // ivar: _actionsModel
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // ivar: _avtViewSessionProvider
@property (nonatomic) BOOL buttonsDisabled; // ivar: _buttonsDisabled
@property (retain, nonatomic) AVTAvatarRecordDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarActionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVTAvatarEditorViewController *editorViewController; // ivar: _editorViewController
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *inlineActionButtons; // ivar: _inlineActionButtons
@property (nonatomic) BOOL isCreatingAvatar; // ivar: _isCreatingAvatar
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (readonly) Class superclass;


+(id)buttonForAction:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 avtViewProvider:(id)arg1 environment:(id)arg2 ;
-(void)avatarEditorViewController:(id)arg0 didFinishWithAvatarRecord:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg0 ;
-(void)confirmShouldDeleteRecord:(id)arg0 sender:(id)arg1 resultBlock:(id)arg2 ;
-(void)performCreateForActionsModel:(id)arg0 ;
-(void)performDeleteForActionsModel:(id)arg0 ;
-(void)performDuplicateForActionsModel:(id)arg0 ;
-(void)performEdit;
-(void)performEditForActionsModel:(id)arg0 ;
-(void)presentEditor:(id)arg0 forCreating:(BOOL)arg1 ;
-(void)updateForChangedContentCategorySize;
-(void)updateWithActionsModel:(id)arg0 ;


@end


#endif