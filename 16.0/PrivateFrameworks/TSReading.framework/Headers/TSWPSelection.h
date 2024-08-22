// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSELECTION_H
#define TSWPSELECTION_H

@class NSString;
@protocol NSCopying, TSDTextSelection;


#import "TSKSelection.h"

@interface TSWPSelection : TSKSelection <NSCopying, TSDTextSelection>

 {
    TSWPRangeVector _visualRanges;
}


@property (readonly, nonatomic) int caretAffinity; // ivar: _caretAffinity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger headChar; // ivar: _headChar
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (readonly, nonatomic) BOOL isRange;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isVisual;
@property (readonly, nonatomic) NSUInteger leadingCharIndex; // ivar: _leadingCharIndex
@property (readonly, nonatomic) BOOL leadingEdge; // ivar: _leadingEdge
@property (readonly, nonatomic) _NSRange range;
@property (readonly, nonatomic) _NSRange rawRange; // ivar: _range
@property (readonly, nonatomic) _NSRange smartFieldRange; // ivar: _smartFieldRange
@property (readonly, nonatomic) int styleInsertionBehavior; // ivar: _styleInsertionBehavior
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tailChar; // ivar: _tailChar
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) BOOL validVisualRanges; // ivar: _validVisualRanges


+(Class)archivedSelectionClass;
+(id)selectionWithRange:(struct _NSRange )arg0 ;
+(id)selectionWithRange:(struct _NSRange )arg0 type:(int)arg1 leadingEdge:(BOOL)arg2 storage:(id)arg3 ;
-(*void)i_visualRanges;
-(*void)visualRanges;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 ;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 allowRightEdge:(BOOL)arg1 ;
-(BOOL)intersectsRange:(struct _NSRange )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentForInsertionStyle:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)end;
-(NSUInteger)insertionChar;
-(NSUInteger)leftEdge;
-(NSUInteger)rightEdge;
-(NSUInteger)start;
-(NSUInteger)visualRangeCount;
-(id)copyWithNewRange:(struct _NSRange )arg0 ;
-(id)copyWithNewType:(int)arg0 ;
-(id)copyWithNewType:(int)arg0 range:(struct _NSRange )arg1 ;
-(id)copyWithNewType:(int)arg0 smartFieldRange:(struct _NSRange )arg1 ;
-(id)copyWithNewVisualRanges:(*void)arg0 ;
-(id)copyWithNewVisualTypeRange:(struct _NSRange )arg0 head:(NSUInteger)arg1 tail:(NSUInteger)arg2 ;
-(id)copyWithVisualRanges:(*void)arg0 startChar:(NSUInteger)arg1 endChar:(NSUInteger)arg2 rightToLeft:(BOOL)arg3 sameLine:(BOOL)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange )arg4 leadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange )arg4 leadingEdge:(BOOL)arg5 storage:(id)arg6 ;
-(id)visualRangesArray;
-(struct _NSRange )superRange;
-(void)dealloc;
-(void)i_setVisualRanges:(*void)arg0 ;


@end


#endif