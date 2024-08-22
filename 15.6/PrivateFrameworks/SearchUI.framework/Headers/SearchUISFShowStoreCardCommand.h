// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFSHOWSTORECARDCOMMAND_H
#define SEARCHUISFSHOWSTORECARDCOMMAND_H

@class SFShowAppStoreSheetCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFShowStoreCardCommand : SearchUITapCommand

@property (readonly) SFShowAppStoreSheetCommand *command;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)prefersModalPresentation;
-(NSUInteger)destination;
-(id)setupViewController;


@end


#endif