// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOMMANDBUTTON_H
#define SEARCHUICOMMANDBUTTON_H

@class TLKTextButton, SFButtonItem, NSString;
@protocol SearchUICommandButton, SearchUIWatchListDelegate;


#import "SearchUIWatchListState.h"

@interface SearchUICommandButton : TLKTextButton <SearchUICommandButton, SearchUIWatchListDelegate>



@property (retain) SFButtonItem *buttonItem; // ivar: buttonItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) SearchUIWatchListState *watchListState; // ivar: _watchListState


-(id)initWithWatchListState:(id)arg0 ;
-(void)updateStateIfNecessary;
-(void)watchListStateDidChange:(id)arg0 ;


@end


#endif