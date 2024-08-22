// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTMEDIAQUERY_H
#define SUSCRIPTMEDIAQUERY_H

@class NSArray, NSString, MPMediaQuery;


#import "SUScriptObject.h"

@interface SUScriptMediaQuery : SUScriptObject {
    NSArray *_collections;
    NSArray *_filterPredicates;
    NSArray *_items;
    BOOL _watchingLibrary;
}


@property (readonly) NSArray *collections;
@property (readonly) NSString *comparisonTypeContains;
@property (readonly) NSString *comparisonTypeEquals;
@property (copy) id *filterPredicates;
@property (copy) NSString *groupingType;
@property (readonly) NSString *groupingTypeAlbum;
@property (readonly) NSString *groupingTypeAlbumArtist;
@property (readonly) NSString *groupingTypeArtist;
@property (readonly) NSString *groupingTypeComposer;
@property (readonly) NSString *groupingTypeGenre;
@property (readonly) NSString *groupingTypePlaylist;
@property (readonly) NSString *groupingTypePodcastTitle;
@property (readonly) NSString *groupingTypeTitle;
@property (readonly) NSArray *items;
@property (readonly, nonatomic) MPMediaQuery *nativeQuery;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)canFilterByProperty:(id)arg0 ;
-(id)makeFilterPredicateWithProperty:(id)arg0 value:(id)arg1 comparisonType:(id)arg2 ;
-(id)scriptAttributeKeys;
-(void)_beginWatchingLibraryIfNecessary;
-(void)_libraryChangedNotification:(id)arg0 ;
-(void)_resetCaches;
-(void)addFilterPredicate:(id)arg0 ;
-(void)dealloc;
-(void)removeFilterPredicate:(id)arg0 ;


@end


#endif