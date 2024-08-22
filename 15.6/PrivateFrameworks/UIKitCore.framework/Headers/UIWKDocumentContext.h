// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWKDOCUMENTCONTEXT_H
#define UIWKDOCUMENTCONTEXT_H

@class NSString, NSMutableData, NSAttributedString;

#import <Foundation/Foundation.h>


@interface UIWKDocumentContext : NSObject {
    BOOL _rectsAreInCharacterOrder;
    _NSRange _lastRectRange;
}


@property (readonly, nonatomic) NSString *_contextAfterString;
@property (readonly, nonatomic) NSString *_contextBeforeString;
@property (readonly, nonatomic) NSString *_markedTextString;
@property (readonly, nonatomic) NSString *_selectedTextString;
@property (retain, nonatomic) NSMutableData *_selectionRects; // ivar: _selectionRects
@property (copy, nonatomic) NSAttributedString *annotatedText; // ivar: _annotatedText
@property (copy, nonatomic) NSObject *contextAfter; // ivar: _contextAfter
@property (copy, nonatomic) NSObject *contextBefore; // ivar: _contextBefore
@property (copy, nonatomic) NSObject *markedText; // ivar: _markedText
@property (readonly, nonatomic) _NSRange markedTextRange;
@property (nonatomic) _NSRange selectedRangeInMarkedText; // ivar: _selectedRangeInMarkedText
@property (copy, nonatomic) NSObject *selectedText; // ivar: _selectedText
@property (readonly, nonatomic) _NSRange selectedTextRange;


-(NSUInteger)closestCharacterIndexForPoint:(struct CGPoint )arg0 ;
-(id)characterRectsForCharacterRange:(struct _NSRange )arg0 ;
-(id)init;
-(id)stringContainedWithinRect:(struct CGRect )arg0 ;
-(struct _NSRange )deltaForSelectionRange:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeContainedWithinRect:(struct CGRect )arg0 ;
-(void)addTextRect:(struct CGRect )arg0 forCharacterRange:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)enumerateLayoutRects:(id)arg0 ;
-(void)enumerateLayoutRectsWithOptions:(NSUInteger)arg0 characterRange:(struct _NSRange )arg1 block:(id)arg2 ;
-(void)resetTextRects;
-(void)sortTextRectsByCharacterRange;


@end


#endif