// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTWPFORMULASELECTION_H
#define TSTWPFORMULASELECTION_H

@class TSWPSelection;



@interface TSTWPFormulaSelection : TSWPSelection

@property (nonatomic) NSUInteger activeTokenCharIndex; // ivar: mActiveTokenCharIndex


+(Class)archivedSelectionClass;
-(BOOL)allowsKeyCommandCaching;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(NSInteger)arg2 caretAffinity:(NSInteger)arg3 smartFieldRange:(struct _NSRange )arg4 caretIsLeadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 ;
-(id)initWithType:(NSInteger)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(NSInteger)arg2 caretAffinity:(NSInteger)arg3 smartFieldRange:(struct _NSRange )arg4 caretIsLeadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 activeTokenCharIndex:(NSUInteger)arg7 ;
-(id)initWithType:(NSInteger)arg0 range:(struct _NSRange )arg1 validVisualRanges:(BOOL)arg2 styleInsertionBehavior:(NSInteger)arg3 caretAffinity:(NSInteger)arg4 smartFieldRange:(struct _NSRange )arg5 caretIsLeadingEdge:(BOOL)arg6 leadingCharIndex:(NSUInteger)arg7 headCharIndex:(NSUInteger)arg8 tailCharIndex:(NSUInteger)arg9 activeTokenCharIndex:(NSUInteger)arg10 ;
-(id)initWithType:(NSInteger)arg0 ranges:(id)arg1 validVisualRanges:(BOOL)arg2 styleInsertionBehavior:(NSInteger)arg3 caretAffinity:(NSInteger)arg4 smartFieldRange:(struct _NSRange )arg5 caretIsLeadingEdge:(BOOL)arg6 leadingCharIndex:(NSUInteger)arg7 headCharIndex:(NSUInteger)arg8 tailCharIndex:(NSUInteger)arg9 ;


@end


#endif