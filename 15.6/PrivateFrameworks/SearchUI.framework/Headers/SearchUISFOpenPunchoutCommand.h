// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFOPENPUNCHOUTCOMMAND_H
#define SEARCHUISFOPENPUNCHOUTCOMMAND_H

@class SFOpenPunchoutCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFOpenPunchoutCommand : SearchUITapCommand

@property (readonly) SFOpenPunchoutCommand *command;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)shouldDeselectPreviousSelection;
-(NSUInteger)destination;
-(id)punchout;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif