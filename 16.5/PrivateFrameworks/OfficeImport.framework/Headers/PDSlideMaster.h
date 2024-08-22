// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSLIDEMASTER_H
#define PDSLIDEMASTER_H

@class NSMutableArray;


#import "PDSlideBase.h"
#import "OADTheme.h"
#import "OADColorMap.h"
#import "OADTextListStyle.h"
#import "PDPresentation.h"

@interface PDSlideMaster : PDSlideBase {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
}


@property (nonatomic) BOOL dateTimePlaceholderIsVisible; // ivar: mDateTimePlaceholderIsVisible
@property (nonatomic) BOOL footerPlaceholderIsVisible; // ivar: mFooterPlaceholderIsVisible
@property (nonatomic) BOOL headerPlaceholderIsVisible; // ivar: mHeaderPlaceholderIsVisible
@property (readonly, weak, nonatomic) PDPresentation *presentation; // ivar: mPresentation
@property (retain, nonatomic) NSMutableArray *slideLayouts; // ivar: mSlideLayouts
@property (nonatomic) BOOL slideNumberPlaceholderIsVisible; // ivar: mSlideNumberPlaceholderIsVisible


-(NSUInteger)slideLayoutCount;
-(id)addSlideLayout;
-(id)bodyTextStyle;
-(id)colorMap;
-(id)colorScheme;
-(id)defaultTextListStyle;
-(id)defaultTheme;
-(id)description;
-(id)drawingTheme;
-(id)fontScheme;
-(id)initWithPresentation:(id)arg0 ;
-(id)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)otherTextStyle;
-(id)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentSlideBase;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(id)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForTables;
-(id)placeholderWithType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)slideLayoutAtIndex:(NSUInteger)arg0 ;
-(id)slideLayoutOfType:(int)arg0 ;
-(id)styleMatrix;
-(id)theme;
-(id)titleTextStyle;
-(void)addSlideLayout:(id)arg0 ;
-(void)doneWithContent;
-(void)removeUnnecessaryOverrides;
-(void)setBodyTextStyle:(id)arg0 ;
-(void)setOtherTextStyle:(id)arg0 ;
-(void)setTitleTextStyle:(id)arg0 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;


@end


#endif