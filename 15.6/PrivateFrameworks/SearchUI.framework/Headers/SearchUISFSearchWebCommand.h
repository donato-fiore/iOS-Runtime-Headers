// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFSEARCHWEBCOMMAND_H
#define SEARCHUISFSEARCHWEBCOMMAND_H

@class SFSearchWebCommand;


#import "SearchUISFOpenPunchoutCommand.h"

@interface SearchUISFSearchWebCommand : SearchUISFOpenPunchoutCommand

@property (readonly, nonatomic) SFSearchWebCommand *command;


+(id)urlFromQuery:(id)arg0 ;
-(id)punchout;


@end


#endif