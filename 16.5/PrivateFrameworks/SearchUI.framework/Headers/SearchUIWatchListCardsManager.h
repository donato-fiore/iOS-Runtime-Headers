// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIWATCHLISTCARDSMANAGER_H
#define SEARCHUIWATCHLISTCARDSMANAGER_H

@class WLKCanonicalPlayablesResponse, NSHashTable, NSString;

#import <Foundation/Foundation.h>

#import "SearchUIWatchListState.h"

@interface SearchUIWatchListCardsManager : NSObject

@property (nonatomic) BOOL isInUpNext; // ivar: _isInUpNext
@property (retain, nonatomic) WLKCanonicalPlayablesResponse *response; // ivar: _response
@property (retain, nonatomic) NSHashTable *rowModels; // ivar: _rowModels
@property (retain, nonatomic) NSString *watchListIdentifier; // ivar: _watchListIdentifier
@property (retain, nonatomic) SearchUIWatchListState *watchListState; // ivar: _watchListState


-(BOOL)isTappable;
-(id)initWithWatchListIdentifier:(id)arg0 ;
-(void)addWatchListRowModelObserver:(id)arg0 ;


@end


#endif