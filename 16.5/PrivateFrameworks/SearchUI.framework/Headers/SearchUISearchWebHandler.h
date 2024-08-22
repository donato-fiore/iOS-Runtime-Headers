// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISEARCHWEBHANDLER_H
#define SEARCHUISEARCHWEBHANDLER_H

@class SFSearchWebCommand;


#import "SearchUIOpenPunchoutHandler.h"

@interface SearchUISearchWebHandler : SearchUIOpenPunchoutHandler

@property (readonly) SFSearchWebCommand *command;


+(id)webSearchURLForQueryString:(id)arg0 ;
-(id)destinationPunchout;


@end


#endif