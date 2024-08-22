// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSEARCHRESULTSECTION_H
#define ICSEARCHRESULTSECTION_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface ICSearchResultSection : NSObject

@property (retain, nonatomic) NSMutableDictionary *hiddenSearchResults; // ivar: _hiddenSearchResults
@property (retain, nonatomic) NSMutableDictionary *identifierToSearchResult; // ivar: _identifierToSearchResult
@property (retain, nonatomic) NSMutableOrderedSet *searchResults; // ivar: _searchResults
@property (retain, nonatomic) NSMutableDictionary *unhiddenSearchResults; // ivar: _unhiddenSearchResults


-(BOOL)removeSearchResultForIdentifier:(id)arg0 forHiding:(BOOL)arg1 ;
-(id)description;
-(id)hiddenIdentifiers;
-(id)identifiers;
-(id)init;
-(void)addSearchResults:(id)arg0 ;
-(void)resetToSearchResults:(id)arg0 ;


@end


#endif