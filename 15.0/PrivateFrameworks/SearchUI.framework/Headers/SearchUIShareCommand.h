// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUISHARECOMMAND_H
#define SEARCHUISHARECOMMAND_H

@class SFShareCommand;


#import "SearchUITapCommand.h"

@interface SearchUIShareCommand : SearchUITapCommand

@property (retain) SFShareCommand *command;


+(void)presentShareViewController:(id)arg0 withEnvironment:(id)arg1 ;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif