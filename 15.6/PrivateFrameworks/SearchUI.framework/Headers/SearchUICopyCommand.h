// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICOPYCOMMAND_H
#define SEARCHUICOPYCOMMAND_H

@class SFCopyCommand;


#import "SearchUITapCommand.h"

@interface SearchUICopyCommand : SearchUITapCommand

@property (retain) SFCopyCommand *command;


-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif