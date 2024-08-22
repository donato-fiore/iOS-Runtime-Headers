// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIWATCHLISTSTATE_H
#define SEARCHUIWATCHLISTSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SearchUIWatchListState : NSObject

@property (nonatomic) BOOL isWatchListed; // ivar: _isWatchListed
@property (retain, nonatomic) NSString *watchListIdentifier; // ivar: _watchListIdentifier


-(id)initWithContainerResponse:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 watchListed:(BOOL)arg1 ;
-(id)initWithResponse:(id)arg0 ;
-(void)toggleStateWithCompletion:(id)arg0 ;


@end


#endif