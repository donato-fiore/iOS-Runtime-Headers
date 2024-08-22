// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPSELECTION_H
#define TSWPSELECTION_H

@class TSKSelection, NSString, NSArray;
@protocol TSDTextSelection;


#import "TSWPRangeArray.h"

@interface TSWPSelection : TSKSelection <TSDTextSelection>



@property (readonly, nonatomic) BOOL allowsKeyCommandCaching;
@property (readonly, nonatomic) BOOL caretIsLeadingEdge; // ivar: _caretIsLeadingEdge
@property (readonly, nonatomic) NSInteger caretLFAffinity; // ivar: _caretLFAffinity
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) _NSRange deprecated_range; // ivar: _deprecated_range
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger headCharIndex; // ivar: _headCharIndex
@property (retain, nonatomic) TSWPRangeArray *i_logicalRanges;
@property (nonatomic) BOOL i_validVisualRanges; // ivar: _validVisualRanges
@property (readonly, nonatomic) NSUInteger insertionCharIndex;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (readonly, nonatomic) BOOL isRange;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isVisual;
@property (readonly, nonatomic) NSUInteger leadingCharIndex; // ivar: _leadingCharIndex
@property (readonly, nonatomic) _NSRange range;
@property (readonly, nonatomic) TSWPRangeArray *ranges; // ivar: _ranges
@property (readonly, nonatomic) _NSRange rawRange;
@property (readonly, nonatomic) _NSRange smartFieldRange; // ivar: _smartFieldRange
@property (readonly, nonatomic) NSInteger styleInsertionBehavior; // ivar: _styleInsertionBehavior
@property (readonly, nonatomic) _NSRange superRange;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tailCharIndex; // ivar: _tailCharIndex
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL validVisualRanges;
@property (readonly, nonatomic) NSUInteger visualRangeCount;
@property (readonly, nonatomic) TSWPRangeArray *visualRanges;
@property (readonly, nonatomic) NSArray *visualRangesArray;


+(BOOL)p_checkEndOfLineFlagForRange:(struct _NSRange *)arg0 leadingEdge:(*BOOL)arg1 type:(*NSInteger)arg2 endOfLine:(BOOL)arg3 storage:(id)arg4 ;
+(Class)archivedSelectionClass;
+(id)selectionFromWPSelection:(id)arg0 ;
+(id)selectionWithRange:(struct _NSRange )arg0 ;
+(id)selectionWithRange:(struct _NSRange )arg0 type:(NSInteger)arg1 leadingEdge:(BOOL)arg2 storage:(id)arg3 ;
+(id)selectionWithRanges:(id)arg0 ;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 ;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)intersectsRange:(struct _NSRange )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentForInsertionStyle:(id)arg0 ;
-(BOOL)p_isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)end;
-(NSUInteger)start;
-(id)constrainToRange:(struct _NSRange )arg0 ;
-(id)copyWithNewRange:(struct _NSRange )arg0 ;
-(id)copyWithNewRange:(struct _NSRange )arg0 newCaretAffinity:(NSInteger)arg1 ;
-(id)copyWithNewRanges:(id)arg0 ;
-(id)copyWithNewStyleInsertionBehavior:(NSInteger)arg0 newCaretAffinity:(NSInteger)arg1 ;
-(id)copyWithNewType:(NSInteger)arg0 ;
-(id)copyWithNewType:(NSInteger)arg0 range:(struct _NSRange )arg1 ;
-(id)copyWithNewType:(NSInteger)arg0 smartFieldRange:(struct _NSRange )arg1 ;
-(id)copyWithNewVisualRanges:(id)arg0 ;
-(id)copyWithNewVisualTypeRange:(struct _NSRange )arg0 head:(NSUInteger)arg1 tail:(NSUInteger)arg2 ;
-(id)copyWithVisualRanges:(id)arg0 headCharIndex:(NSUInteger)arg1 tailCharIndex:(NSUInteger)arg2 rightToLeft:(BOOL)arg3 sameLine:(BOOL)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithType:(NSInteger)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(NSInteger)arg2 caretAffinity:(NSInteger)arg3 ;
-(id)initWithType:(NSInteger)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(NSInteger)arg2 caretAffinity:(NSInteger)arg3 smartFieldRange:(struct _NSRange )arg4 caretIsLeadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 ;
-(id)initWithType:(NSInteger)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(NSInteger)arg2 caretAffinity:(NSInteger)arg3 smartFieldRange:(struct _NSRange )arg4 caretIsLeadingEdge:(BOOL)arg5 storage:(id)arg6 ;
-(id)initWithType:(NSInteger)arg0 ranges:(id)arg1 validVisualRanges:(BOOL)arg2 styleInsertionBehavior:(NSInteger)arg3 caretAffinity:(NSInteger)arg4 smartFieldRange:(struct _NSRange )arg5 caretIsLeadingEdge:(BOOL)arg6 leadingCharIndex:(NSUInteger)arg7 headCharIndex:(NSUInteger)arg8 tailCharIndex:(NSUInteger)arg9 ;
-(id)p_copyWithClass:(Class)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif