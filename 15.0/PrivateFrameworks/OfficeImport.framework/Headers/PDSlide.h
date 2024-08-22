// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSLIDE_H
#define PDSLIDE_H

@class NSMutableArray;


#import "PDSlideChild.h"
#import "PDSlideLayout.h"
#import "PDNotesSlide.h"
#import "OITSUNoCopyDictionary.h"

@interface PDSlide : PDSlideChild {
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}


@property (retain) OITSUNoCopyDictionary *commentParents; // ivar: mCommentParents


-(NSUInteger)commentCount;
-(id)background;
-(id)commentAtIndex:(NSUInteger)arg0 ;
-(id)commentForAuthorId:(NSUInteger)arg0 authorIdx:(NSUInteger)arg1 ;
-(id)defaultTheme;
-(id)description;
-(id)inheritedTextStyleForPlaceholderType:(int)arg0 ;
-(id)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)notesSlide;
-(id)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentSlideBase;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(id)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForTables;
-(id)slideLayout;
-(id)transition;
-(void)addComment:(id)arg0 ;
-(void)doneWithContent;
-(void)removeUnnecessaryOverrides;
-(void)setInheritedTextStyle:(id)arg0 placeholderType:(int)arg1 defaultTextListStyle:(id)arg2 ;
-(void)setNotesSlide:(id)arg0 ;
-(void)setSlideLayout:(id)arg0 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;


@end


#endif