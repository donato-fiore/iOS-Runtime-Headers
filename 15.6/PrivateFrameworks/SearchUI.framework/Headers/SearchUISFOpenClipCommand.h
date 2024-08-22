// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFOPENCLIPCOMMAND_H
#define SEARCHUISFOPENCLIPCOMMAND_H

@class SFOpenWebClipCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFOpenClipCommand : SearchUITapCommand

@property (readonly, nonatomic) SFOpenWebClipCommand *command;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(NSUInteger)destination;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif