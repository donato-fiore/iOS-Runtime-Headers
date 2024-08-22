// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBBOOKMARKLIST_H
#define WEBBOOKMARKLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "WebBookmarkListQuery.h"
#import "WebBookmarkCollection.h"

@interface WebBookmarkList : NSObject {
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    WebBookmarkListQuery *_query;
    WebBookmarkCollection *_collection;
}


@property (readonly, nonatomic) unsigned int bookmarkCount;
@property (readonly, nonatomic) int folderID;


-(id)_arrayForDifferenceCalculation;
-(id)_bookmarkAtIndex:(unsigned int)arg0 paginate:(BOOL)arg1 ;
-(id)bookmarkArray;
-(id)bookmarkArrayRequestingCount:(unsigned int)arg0 ;
-(id)bookmarkAtIndex:(unsigned int)arg0 ;
-(id)differenceFromList:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)initWithQuery:(id)arg0 skipOffset:(unsigned int)arg1 collection:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned int)arg0 ;
-(unsigned int)_reverseOrderIndex:(unsigned int)arg0 ;
-(void)_loadBookmarksForDifferenceFromList:(id)arg0 ;
-(void)_moveBookmarkAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1 ;


@end


#endif