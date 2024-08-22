// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEPAGINGSUGGESTIONPROVIDER_H
#define PXPEOPLEPAGINGSUGGESTIONPROVIDER_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXPeoplePagingSuggestionProvider : NSObject

@property (copy, nonatomic) NSArray *currentSuggestions; // ivar: _currentSuggestions
@property (retain, nonatomic) NSMutableArray *unvisitedSuggestions; // ivar: _unvisitedSuggestions
@property (retain, nonatomic) NSMutableArray *visitedSuggestions; // ivar: _visitedSuggestions


-(BOOL)hasNextSuggestions;
-(BOOL)hasPreviousSuggestions;
-(id)init;
-(id)nextSuggestionsWithPageLimit:(NSInteger)arg0 ;
-(id)previousSuggestions;
-(void)appendSuggestionArray:(id)arg0 ;
-(void)removeAllSuggestions;
-(void)removeSuggestions:(id)arg0 ;


@end


#endif