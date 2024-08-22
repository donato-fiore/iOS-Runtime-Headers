// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTWPFORMULASELECTION_H
#define TSTWPFORMULASELECTION_H

@class TSWPSelection;



@interface TSTWPFormulaSelection : TSWPSelection

@property (nonatomic) NSUInteger activeTokenCharIndex; // ivar: mActiveTokenCharIndex


+(Class)archivedSelectionClass;
-(BOOL)allowsKeyCommandCaching;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange )arg4 leadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange )arg4 leadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 activeTokenCharIndex:(NSUInteger)arg7 ;


@end


#endif