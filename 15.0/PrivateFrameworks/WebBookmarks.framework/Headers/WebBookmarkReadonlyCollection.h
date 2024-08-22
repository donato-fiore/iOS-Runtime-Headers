// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBOOKMARKREADONLYCOLLECTION_H
#define WEBBOOKMARKREADONLYCOLLECTION_H

@class NSString;
@protocol WBBookmarkProvider;

#import <Foundation/Foundation.h>

#import "WebBookmarkCollection.h"

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider>

 {
    WebBookmarkCollection *_collection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)leafChildCountForBookmarksInFolderWithID:(int)arg0 ;
-(id)_collection;
-(id)bookmarkWithID:(int)arg0 ;
-(id)bookmarksMatchingString:(id)arg0 ;
-(id)databaseHealthInformation;
-(id)initReadonlySafariBookmarkCollection;
-(id)leafChildCountForFoldersInFolderWithID:(int)arg0 ;
-(id)readingListBookmarksMatchingString:(id)arg0 maxResults:(unsigned int)arg1 onlyArchivedBookmarks:(BOOL)arg2 ;
-(id)readingListWithUnreadOnly:(BOOL)arg0 filteredUsingString:(id)arg1 ;
-(void)enumerateBookmarks:(BOOL)arg0 andReadingListItems:(BOOL)arg1 matchingString:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif