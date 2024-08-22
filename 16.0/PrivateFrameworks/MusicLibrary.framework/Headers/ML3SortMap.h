// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3SORTMAP_H
#define ML3SORTMAP_H

@class NSMutableDictionary, NSMutableArray, NSData;

#import <Foundation/Foundation.h>

#import "ML3DatabaseConnection.h"
#import "ML3MusicLibrary.h"

@interface ML3SortMap : NSObject {
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
    NSMutableDictionary *_nameOrders;
    NSMutableArray *_entries;
    NSData *_minSortKey;
    NSData *_maxSortKey;
    NSInteger _smallestNameDelta;
    BOOL _preloadNames;
}




-(BOOL)_insertSortedNameEntriesIntoSortMap:(id)arg0 ;
-(BOOL)attemptInsertStringsIntoSortMap:(id)arg0 ;
-(BOOL)commitFailedInsertedStrings:(id)arg0 ;
-(BOOL)commitUpdates;
-(BOOL)insertStringsIntoSortMap:(id)arg0 didReSortMap:(*BOOL)arg1 ;
-(BOOL)loadExistingSortedEntries;
-(NSInteger)_maxNameOrderForSortMapEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1 ;
-(NSInteger)_minNameOrderForSortMapEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1 ;
-(NSInteger)_sortKeyDistance:(id)arg0 sortKey2:(id)arg1 offset:(NSUInteger)arg2 ;
-(id)_maxSortKeyForEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1 ;
-(id)_minSortKeyForEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1 ;
-(id)_sortKeyString:(id)arg0 ;
-(id)_sortedNameEntriesToInsertForNames:(id)arg0 ;
-(id)initWithConnection:(id)arg0 library:(id)arg1 preloadNames:(BOOL)arg2 ;
-(id)nameOrders;


@end


#endif