// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUISFTOGGLEWATCHLISTSTATUSCOMMAND_H
#define SEARCHUISFTOGGLEWATCHLISTSTATUSCOMMAND_H

@class SFToggleWatchListStatusCommand;


#import "SearchUITapCommand.h"
#import "SearchUIWatchListState.h"

@interface SearchUISFToggleWatchListStatusCommand : SearchUITapCommand

@property (readonly, nonatomic) SFToggleWatchListStatusCommand *command;
@property (retain) SearchUIWatchListState *watchListState; // ivar: _watchListState


-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif