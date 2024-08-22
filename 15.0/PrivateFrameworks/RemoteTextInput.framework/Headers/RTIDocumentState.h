// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTIDOCUMENTSTATE_H
#define RTIDOCUMENTSTATE_H

@class NSMutableDictionary, TIDocumentState, NSAttributedString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTIDocumentState : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *_selectionRects; // ivar: __selectionRects
@property (nonatomic) CGRect caretRectInWindow; // ivar: _caretRectInWindow
@property (retain, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (nonatomic) CGRect firstSelectionRectInWindow; // ivar: _firstSelectionRectInWindow
@property (readonly, nonatomic) _NSRange markedTextRange;
@property (nonatomic) _NSRange selectedTextRange;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString; // ivar: _textCheckingAnnotatedString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)characterIndexForPoint:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGRect )firstRectForCharacterRange:(struct _NSRange )arg0 ;
-(struct _NSRange )deltaForSelectionRange:(struct _NSRange )arg0 ;
-(void)addTextRect:(struct CGRect )arg0 forCharacterRange:(struct _NSRange )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetTextRects;


@end


#endif