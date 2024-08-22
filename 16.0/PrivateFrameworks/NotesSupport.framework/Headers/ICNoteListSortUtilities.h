// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTELISTSORTUTILITIES_H
#define ICNOTELISTSORTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICNoteListSortUtilities : NSObject



+(BOOL)isMenuItemCurrentSortTypeForTag:(NSInteger)arg0 ;
+(NSInteger)currentNoteListSortType;
+(NSInteger)sortTypeForFolderNoteOrder:(NSInteger)arg0 ;
+(NSInteger)sortTypeForTag:(NSInteger)arg0 ;
+(NSInteger)tagForSortType:(NSInteger)arg0 ;
+(id)dateForCurrentSortTypeAccessibilityStringForNote:(id)arg0 ;
+(id)dateForCurrentSortTypeForNote:(id)arg0 ;
+(id)descriptionForNoteListSortType:(NSInteger)arg0 ;
+(id)legacySortDescriptorsForType:(NSInteger)arg0 ;
+(id)legacySortDescriptorsForType:(NSInteger)arg0 ascending:(BOOL)arg1 ;
+(id)sortDescriptorsForCurrentType;
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg0 ;
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg0 folderNoteSortType:(id)arg1 ;
+(id)sortDescriptorsForPinnedNotes;
+(id)sortDescriptorsForType:(NSInteger)arg0 ;
+(id)sortDescriptorsForType:(NSInteger)arg0 ascending:(BOOL)arg1 ;
+(void)clearCache;
+(void)setCurrentNoteListSortType:(NSInteger)arg0 ;
+(void)setCurrentNoteListSortTypeByTag:(NSInteger)arg0 ;


@end


#endif