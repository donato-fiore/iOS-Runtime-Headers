// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFOPENMEDIACOMMAND_H
#define SEARCHUISFOPENMEDIACOMMAND_H

@class SFOpenMediaCommand;


#import "SearchUIMediaCommand.h"

@interface SearchUISFOpenMediaCommand : SearchUIMediaCommand

@property (retain) SFOpenMediaCommand *command;
@property (copy) id *completion; // ivar: _completion


-(BOOL)supportsIntentPath;
-(id)clientSelectedBundleIdentifier;
-(id)intent;
-(id)mediaMetadata;


@end


#endif