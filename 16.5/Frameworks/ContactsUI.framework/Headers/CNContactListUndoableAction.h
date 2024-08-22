// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTUNDOABLEACTION_H
#define CNCONTACTLISTUNDOABLEACTION_H

@class NSString;
@protocol CNContactListUndoableAction, CNContactListActionDelegate;


#import "CNContactListAction.h"

@interface CNContactListUndoableAction : CNContactListAction <CNContactListUndoableAction>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactListActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldReloadListOnCompletion;
-(void)performUndoAction;


@end


#endif