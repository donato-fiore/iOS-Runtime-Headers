// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICUSTOMTAPCOMMAND_H
#define SEARCHUICUSTOMTAPCOMMAND_H

@protocol SearchUICommandProtocol;


#import "SearchUITapCommand.h"

@interface SearchUICustomTapCommand : SearchUITapCommand

@property (retain, nonatomic) NSObject<SearchUICommandProtocol> *handlerObject; // ivar: _handlerObject


-(BOOL)presentsViewController;
-(BOOL)shouldDeselectPreviousSelection;
-(id)commandHandlerObject;
-(void)callCompletionHandlerIfNeeded:(id)arg0 ;
-(void)callPerformCommandHandlerWithCompletion:(id)arg0 ;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif