// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDNOTESMASTER_H
#define PDNOTESMASTER_H



#import "PDSlideBase.h"
#import "OADTheme.h"
#import "OADColorMap.h"
#import "OADTextListStyle.h"

@interface PDNotesMaster : PDSlideBase {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mNotesTextStyle;
}




-(id)colorMap;
-(id)colorScheme;
-(id)defaultTextListStyle;
-(id)description;
-(id)drawingTheme;
-(id)fontScheme;
-(id)init;
-(id)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)notesTextStyle;
-(id)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentSlideBase;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(id)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForTables;
-(id)styleMatrix;
-(id)theme;
-(void)doneWithContent;
-(void)removeUnnecessaryOverrides;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;


@end


#endif