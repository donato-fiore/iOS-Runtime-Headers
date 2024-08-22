// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDNOTESSLIDE_H
#define PDNOTESSLIDE_H



#import "PDSlideChild.h"
#import "PDNotesMaster.h"

@interface PDNotesSlide : PDSlideChild {
    PDNotesMaster *mNotesMaster;
}




-(id)description;
-(id)init;
-(id)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)masterPlaceholderOfType:(int)arg0 ;
-(id)notesMaster;
-(id)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentSlideBase;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(id)arg2 overrideIndex:(BOOL)arg3 ;
-(void)doneWithContent;
-(void)setNotesMaster:(id)arg0 ;


@end


#endif