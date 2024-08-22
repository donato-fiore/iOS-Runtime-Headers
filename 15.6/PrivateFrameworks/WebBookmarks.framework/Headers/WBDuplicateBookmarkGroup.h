// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBDUPLICATEBOOKMARKGROUP_H
#define WBDUPLICATEBOOKMARKGROUP_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "WebBookmark.h"

@interface WBDuplicateBookmarkGroup : NSObject {
    NSMutableArray *_dupicateBookmarks;
    NSMutableArray *_dupicateBookmarksToKeep;
}


@property (readonly, nonatomic) NSArray *duplicates;
@property (readonly, nonatomic) NSArray *duplicatesToKeep;
@property (readonly, nonatomic) BOOL foundDuplicates; // ivar: _foundDuplicates
@property (readonly, nonatomic) WebBookmark *originalBookmark; // ivar: _originalBookmark


-(id)initWithOriginalBookmark:(id)arg0 ;
-(void)addDuplicateBookmark:(id)arg0 replaceOriginal:(BOOL)arg1 ;
-(void)addDuplicateBookmarkToKeep:(id)arg0 ;
-(void)exchangeOriginalBookmarkWithBookmark:(id)arg0 ;
-(void)removeAllDuplicates;


@end


#endif