// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSLIDELAYOUT_H
#define PDSLIDELAYOUT_H



#import "PDSlideChild.h"
#import "PDSlideMaster.h"

@interface PDSlideLayout : PDSlideChild {
    int mSlideLayoutType;
}


@property (weak) PDSlideMaster *slideMaster; // ivar: mSlideMaster


-(id)background;
-(id)defaultTheme;
-(id)description;
-(id)initWithSlideMaster:(id)arg0 ;
-(id)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentSlideBase;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(id)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForTables;
-(id)transition;
-(int)slideLayoutType;
-(void)doneWithContent;
-(void)setSlideLayoutType:(int)arg0 ;


@end


#endif