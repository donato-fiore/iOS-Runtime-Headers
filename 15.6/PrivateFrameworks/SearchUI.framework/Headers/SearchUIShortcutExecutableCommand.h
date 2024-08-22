// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISHORTCUTEXECUTABLECOMMAND_H
#define SEARCHUISHORTCUTEXECUTABLECOMMAND_H

@class ATXActionSearchResultExecution, NSString;
@protocol ATXActionSearchResultExecutionDelegate;


#import "SearchUITapCommand.h"

@interface SearchUIShortcutExecutableCommand : SearchUITapCommand <ATXActionSearchResultExecutionDelegate>



@property (retain, nonatomic) ATXActionSearchResultExecution *actionExecution; // ivar: _actionExecution
@property (copy, nonatomic) id *commandCompletion; // ivar: _commandCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)shouldDeselectPreviousSelection;
-(NSUInteger)destination;
-(void)actionSearchResultExecution:(id)arg0 didDismissRemoteAlertWithReason:(NSInteger)arg1 actionCompleted:(BOOL)arg2 withResult:(NSInteger)arg3 shouldClearAction:(BOOL)arg4 ;
-(void)dealloc;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif