// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUISFPLAYVIDEOCOMMAND_H
#define SEARCHUISFPLAYVIDEOCOMMAND_H

@class SFPlayVideoCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFPlayVideoCommand : SearchUITapCommand

@property (readonly, nonatomic) SFPlayVideoCommand *command;


-(BOOL)prefersModalPresentation;
-(id)setupViewController;


@end


#endif