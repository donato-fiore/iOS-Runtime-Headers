// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFPLAYMEDIACOMMAND_H
#define SEARCHUISFPLAYMEDIACOMMAND_H

@class SFPlayMediaCommand;


#import "SearchUIMediaCommand.h"

@interface SearchUISFPlayMediaCommand : SearchUIMediaCommand

@property (retain) SFPlayMediaCommand *command;


-(BOOL)supportsIntentPath;
-(id)intent;
-(id)mediaMetadata;


@end


#endif