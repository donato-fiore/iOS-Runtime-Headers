// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTACTIONEXECUTOR_H
#define CNCONTACTLISTACTIONEXECUTOR_H

@class NSString, NSUndoManager;
@protocol CNUIEditAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNContactListActionAuthorizationContext.h"
#import "CNUIEditAuthorizationController.h"

@interface CNContactListActionExecutor : NSObject <CNUIEditAuthorizationControllerDelegate>



@property (retain, nonatomic) CNContactListActionAuthorizationContext *authorizationContext; // ivar: _authorizationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // ivar: _editAuthorizationController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSUndoManager *undoManager; // ivar: _undoManager


-(BOOL)showEditAuthorizationPaneForAction:(id)arg0 withActionType:(NSInteger)arg1 ;
-(id)initWithUndoManager:(id)arg0 ;
-(void)editAuthorizationController:(id)arg0 authorizationDidFinishWithResult:(NSInteger)arg1 ;
-(void)executeAction:(id)arg0 ;
-(void)executeUndoableAction:(id)arg0 ;
-(void)showEditAuthorizationPane:(id)arg0 animated:(BOOL)arg1 forAction:(id)arg2 ;
-(void)undoAction:(id)arg0 ;


@end


#endif