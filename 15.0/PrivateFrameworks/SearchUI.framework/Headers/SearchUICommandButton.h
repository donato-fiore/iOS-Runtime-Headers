// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOMMANDBUTTON_H
#define SEARCHUICOMMANDBUTTON_H

@class TLKTextButton, SFCommand, NSString;
@protocol SearchUICommandButton;


#import "SearchUIWatchListState.h"

@interface SearchUICommandButton : TLKTextButton <SearchUICommandButton>



@property (retain) SFCommand *command; // ivar: command
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) SearchUIWatchListState *watchListState; // ivar: _watchListState


-(id)initWithWatchListState:(id)arg0 ;
-(void)addContextToCommandIfNecessary:(id)arg0 ;
-(void)updateStateIfNecessary;


@end


#endif