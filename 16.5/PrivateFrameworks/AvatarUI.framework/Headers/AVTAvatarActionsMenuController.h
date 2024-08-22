// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARACTIONSMENUCONTROLLER_H
#define AVTAVATARACTIONSMENUCONTROLLER_H

@class UIMenu, NSString;
@protocol AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsController, AVTAvatarActionsControllerDelegate;

#import <Foundation/Foundation.h>

#import "AVTAvatarActionsProvider.h"
#import "AVTViewSessionProvider.h"
#import "AVTAvatarRecordDataSource.h"
#import "AVTAvatarEditorViewController.h"
#import "AVTUIEnvironment.h"

@interface AVTAvatarActionsMenuController : NSObject <AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsController>



@property (retain, nonatomic) UIMenu *actionsMenu; // ivar: _actionsMenu
@property (retain, nonatomic) AVTAvatarActionsProvider *actionsModel; // ivar: _actionsModel
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // ivar: _avtViewSessionProvider
@property (retain, nonatomic) AVTAvatarRecordDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarActionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVTAvatarEditorViewController *editorViewController; // ivar: _editorViewController
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCreatingAvatar; // ivar: _isCreatingAvatar
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 avtViewProvider:(id)arg1 environment:(id)arg2 ;
-(void)avatarEditorViewController:(id)arg0 didFinishWithAvatarRecord:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg0 ;
-(void)confirmShouldDeleteRecord:(id)arg0 resultBlock:(id)arg1 ;
-(void)performCreateForActionsModel:(id)arg0 ;
-(void)performDeleteForActionsModel:(id)arg0 ;
-(void)performDuplicateForActionsModel:(id)arg0 ;
-(void)performEditForActionsModel:(id)arg0 ;
-(void)presentEditor:(id)arg0 forCreating:(BOOL)arg1 ;
-(void)updateForChangedContentCategorySize;
-(void)updateWithActionsModel:(id)arg0 ;


@end


#endif