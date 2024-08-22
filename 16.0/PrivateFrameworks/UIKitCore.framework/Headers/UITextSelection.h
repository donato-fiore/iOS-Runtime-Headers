// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTSELECTION_H
#define UITEXTSELECTION_H

@class UIResponder<UITextInputPrivate>, DOMRange;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface UITextSelection : NSObject

@property (retain, nonatomic) UITextRange *base; // ivar: _base
@property (readonly, weak, nonatomic) UIResponder<UITextInputPrivate> *document; // ivar: _document
@property (readonly, nonatomic, getter=_domRange) DOMRange *domRange;
@property (nonatomic) NSInteger granularity; // ivar: _granularity
@property (retain, nonatomic) UITextRange *initialExtent; // ivar: _initialExtent
@property (readonly, nonatomic) BOOL isCommitting; // ivar: _isCommitting
@property (retain, nonatomic) UITextRange *selectedRange; // ivar: _selectedRange
@property (readonly, nonatomic) BOOL willSelectionChange;


-(BOOL)_allowsSelectionInversion;
-(BOOL)hasEditableSelection;
-(BOOL)isRangedSelectionSpanningDocument;
-(BOOL)pointAtEndOfLine:(struct CGPoint )arg0 ;
-(BOOL)pointAtStartOfLine:(struct CGPoint )arg0 ;
-(BOOL)setRangedSelectionExtentPoint:(struct CGPoint )arg0 baseIsStart:(BOOL)arg1 ;
-(BOOL)setRangedSelectionExtentPoint:(struct CGPoint )arg0 baseIsStart:(BOOL)arg1 allowFlipping:(BOOL)arg2 ;
-(NSUInteger)offsetInMarkedText;
-(id)_boundedOrInvertedSelectionRangeForExtent:(id)arg0 forPoint:(struct CGPoint )arg1 fromPosition:(id)arg2 inDirection:(NSInteger)arg3 ;
-(id)initWithDocument:(id)arg0 ;
-(id)selectedText;
-(id)selectionRects;
-(id)wordContainingCaretSelection;
-(struct CGPoint )clipPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(struct CGRect )caretRect;
-(struct CGRect )caretRectAtBeginOfDocument;
-(struct CGRect )caretRectAtEndOfDocument;
-(struct CGRect )closestCaretRectForPoint:(struct CGPoint )arg0 inSelection:(BOOL)arg1 ;
-(void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(void)alterSelection:(struct CGPoint )arg0 granularity:(NSInteger)arg1 ;
-(void)alterSelectionGranularity:(NSInteger)arg0 ;
-(void)clearRangedSelectionInitialExtent;
-(void)clearSelection;
-(void)collapseSelection;
-(void)commit;
-(void)dealloc;
-(void)extendSelectionToPoint:(struct CGPoint )arg0 ;
-(void)increaseSelectionGranularity;
-(void)invalidate;
-(void)moveCaretToBoundaryOfWhitespaceOrLine;
-(void)selectAll;
-(void)selectionChanged;
-(void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint )arg0 ;
-(void)setHybridSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)setRangedSelectionWithExtentPoint:(struct CGPoint )arg0 ;
-(void)setSelectionWithFirstPoint:(struct CGPoint )arg0 secondPoint:(struct CGPoint )arg1 ;
-(void)setSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)smartExtendRangedSelection:(int)arg0 downstream:(BOOL)arg1 ;


@end


#endif