// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUISFLAUNCHAPPCOMMAND_H
#define SEARCHUISFLAUNCHAPPCOMMAND_H

@class SFLaunchAppCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFLaunchAppCommand : SearchUITapCommand

@property (readonly, nonatomic) SFLaunchAppCommand *command;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(NSUInteger)destination;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif