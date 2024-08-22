// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBOOKMARKLISTQUERY_H
#define WEBBOOKMARKLISTQUERY_H

@class NSString, NSArray;
@protocol WebBookmarkInMemoryChangeFilter;

#import <Foundation/Foundation.h>


@interface WebBookmarkListQuery : NSObject {
    NSString *_query;
    NSString *_queryWithOrderBy;
    NSString *_orderBy;
    NSArray *_titleWordPrefixes;
    NSArray *_titleWordPrefixesForInMemoryFiltering;
    NSString *_urlFilter;
    BOOL _includeHidden;
    BOOL _countShouldUseNumChildrenIfPossible;
    BOOL _includeDescendantsAsChildren;
}


@property (readonly, nonatomic, getter=isCustomQuery) BOOL customQuery; // ivar: _customQuery
@property (readonly, nonatomic) int folderID; // ivar: _folderID
@property (retain, nonatomic) NSObject<WebBookmarkInMemoryChangeFilter> *inMemoryFilter; // ivar: _inMemoryFilter


-(NSInteger)_listQueryType;
-(id)_filterBookmarks:(id)arg0 ;
-(id)_normalizeUserTypedString:(id)arg0 ;
-(id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)arg0 collection:(id)arg1 ;
-(id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(BOOL)arg0 bookmarksInFolder:(int)arg1 collection:(id)arg2 ;
-(id)bookmarksInCollection:(id)arg0 fromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 ;
-(id)debugDescription;
-(id)init;
-(id)initWithBookmarksWhere:(id)arg0 folderID:(int)arg1 orderBy:(id)arg2 usingFilter:(id)arg3 ;
-(id)initWithBookmarksWhere:(id)arg0 orderBy:(id)arg1 usingFilter:(id)arg2 ;
-(id)initWithFolderID:(int)arg0 inCollection:(id)arg1 includeHidden:(BOOL)arg2 includeDescendantsAsChildren:(BOOL)arg3 usingFilter:(id)arg4 ;
-(int)_childCountInDatabaseForFolderFetchInCollection:(id)arg0 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)arg1 ;
-(int)_childCountInDatabaseForFolderFetchInCollection:(id)arg0 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)arg1 countShouldUseNumChildrenIfPossible:(BOOL)arg2 ;
-(int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg0 collection:(id)arg1 skipCountingBookmarksThatAreDeletedInMemory:(BOOL)arg2 ;
-(int)countInCollection:(id)arg0 ;
-(void)_preparePrefixesFromNormalizedString:(id)arg0 ;


@end


#endif