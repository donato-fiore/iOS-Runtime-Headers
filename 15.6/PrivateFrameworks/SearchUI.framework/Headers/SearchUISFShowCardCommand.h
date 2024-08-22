// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFSHOWCARDCOMMAND_H
#define SEARCHUISFSHOWCARDCOMMAND_H

@class SFShowSFCardCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFShowCardCommand : SearchUITapCommand

@property (readonly) SFShowSFCardCommand *command;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(NSUInteger)destination;
-(id)setupViewController;


@end


#endif