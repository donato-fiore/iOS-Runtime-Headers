// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSELECTION_H
#define TSWPSELECTION_H

@class TSKSelection, NSString;
@protocol TSDTextSelection;


#import "TSWPRangeArray.h"

@interface TSWPSelection : TSKSelection <TSDTextSelection>

 {
    TSWPRangeArray *_visualRanges;
}


@property (readonly, nonatomic) BOOL allowsKeyCommandCaching;
@property (readonly, nonatomic) int caretAffinity; // ivar: _caretAffinity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger headCharIndex; // ivar: _headCharIndex
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
@property (nonatomic) NSUInteger tailCharIndex; // ivar: _tailCharIndex
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) BOOL validVisualRanges; // ivar: _validVisualRanges


+(BOOL)p_checkEndOfLineFlagForRange:(struct _NSRange *)arg0 leadingEdge:(*BOOL)arg1 type:(*int)arg2 endOfLine:(BOOL)arg3 storage:(id)arg4 ;
+(Class)archivedSelectionClass;
+(id)selectionFromWPSelection:(id)arg0 ;
+(id)selectionWithRange:(struct _NSRange )arg0 ;
+(id)selectionWithRange:(struct _NSRange )arg0 type:(int)arg1 leadingEdge:(BOOL)arg2 storage:(id)arg3 ;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 ;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)intersectsRange:(struct _NSRange )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentForInsertionStyle:(id)arg0 ;
-(BOOL)p_isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)end;
-(NSUInteger)insertionChar;
-(NSUInteger)start;
-(NSUInteger)visualRangeCount;
-(id)constrainToRange:(struct _NSRange )arg0 ;
-(id)copyWithNewRange:(struct _NSRange )arg0 ;
-(id)copyWithNewRange:(struct _NSRange )arg0 newCaretAffinity:(int)arg1 ;
-(id)copyWithNewStyleInsertionBehavior:(int)arg0 newCaretAffinity:(int)arg1 ;
-(id)copyWithNewType:(int)arg0 ;
-(id)copyWithNewType:(int)arg0 range:(struct _NSRange )arg1 ;
-(id)copyWithNewType:(int)arg0 smartFieldRange:(struct _NSRange )arg1 ;
-(id)copyWithNewVisualRanges:(id)arg0 ;
-(id)copyWithNewVisualTypeRange:(struct _NSRange )arg0 head:(NSUInteger)arg1 tail:(NSUInteger)arg2 ;
-(id)copyWithVisualRanges:(id)arg0 headCharIndex:(NSUInteger)arg1 tailCharIndex:(NSUInteger)arg2 rightToLeft:(BOOL)arg3 sameLine:(BOOL)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)i_visualRanges;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange )arg4 leadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange )arg4 leadingEdge:(BOOL)arg5 storage:(id)arg6 ;
-(id)visualRanges;
-(id)visualRangesArray;
-(struct _NSRange )superRange;
-(void)i_setVisualRanges:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif