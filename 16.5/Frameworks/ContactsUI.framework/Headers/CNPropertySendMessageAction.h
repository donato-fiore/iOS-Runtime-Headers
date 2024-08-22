// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYSENDMESSAGEACTION_H
#define CNPROPERTYSENDMESSAGEACTION_H

@class CNUIUserActionListDataSource, UIContextMenuInteraction, NSString;
@protocol CNContactActionsControllerDelegate, CNPropertyContextMenuAction;


#import "CNPropertyAction.h"
#import "CNActionMenuHelper.h"
#import "CNContactActionsController.h"

@interface CNPropertySendMessageAction : CNPropertyAction <CNContactActionsControllerDelegate, CNPropertyContextMenuAction>



@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // ivar: _actionMenuHelper
@property (retain, nonatomic) CNContactActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // ivar: _actionsDataSource
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldPresentDisambiguationMenu;
-(id)initWithContact:(id)arg0 propertyItems:(id)arg1 actionDataSource:(id)arg2 ;
-(id)menuProviderForContextMenuInteraction:(SEL)arg0 ;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)contactActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;
-(void)performActionForItem:(id)arg0 sender:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif