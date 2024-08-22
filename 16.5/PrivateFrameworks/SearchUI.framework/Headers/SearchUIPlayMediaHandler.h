// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIPLAYMEDIAHANDLER_H
#define SEARCHUIPLAYMEDIAHANDLER_H

@class SFPlayMediaCommand;


#import "SearchUIMediaHandler.h"

@interface SearchUIPlayMediaHandler : SearchUIMediaHandler

@property (retain) SFPlayMediaCommand *command;


-(BOOL)supportsIntentPath;
-(NSUInteger)destination;
-(id)intent;
-(id)mediaMetadata;


@end


#endif