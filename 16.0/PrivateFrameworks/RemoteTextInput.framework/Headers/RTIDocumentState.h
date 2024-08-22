// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTIDOCUMENTSTATE_H
#define RTIDOCUMENTSTATE_H

@class NSMutableData, TIDocumentState, NSAttributedString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RTITextStyling.h"
#import "RTIColor.h"
#import "RTIDocumentRequest.h"

@interface RTIDocumentState : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _clearCanSuggestOnNextDocumentState;
}


@property (retain, nonatomic) NSMutableData *_documentRects; // ivar: __documentRects
@property (retain, nonatomic) RTITextStyling *autocorrectBubbleStyling; // ivar: _autocorrectBubbleStyling
@property (retain, nonatomic) RTIColor *autocorrectTextBackgroundColor; // ivar: _autocorrectTextBackgroundColor
@property (retain, nonatomic) RTIColor *autocorrectTextColor; // ivar: _autocorrectTextColor
@property (nonatomic) BOOL canSuggestSupplementalItemsForCurrentSelection; // ivar: _canSuggestSupplementalItemsForCurrentSelection
@property (nonatomic) CGRect caretRectInWindow; // ivar: _caretRectInWindow
@property (nonatomic) CGRect clientFrameInEntitySpace; // ivar: _clientFrameInEntitySpace
@property (nonatomic) CGRect clientFrameInWindow; // ivar: _clientFrameInWindow
@property (retain, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (nonatomic) CGRect firstSelectionRectInWindow; // ivar: _firstSelectionRectInWindow
@property (retain, nonatomic) RTIColor *insertionPointColor; // ivar: _insertionPointColor
@property (readonly, nonatomic) _NSRange markedTextRange;
@property (nonatomic) BOOL originatedFromSource; // ivar: _originatedFromSource
@property (readonly, nonatomic) RTIDocumentRequest *request; // ivar: _request
@property (nonatomic) _NSRange selectedTextRange;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString; // ivar: _textCheckingAnnotatedString


+(BOOL)supportsSecureCoding;
+(id)documentStateWithRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)characterIndexForPoint:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)rectsForCharacterRange:(struct _NSRange )arg0 withGranularity:(NSInteger)arg1 ;
-(struct CGRect )firstRectForCharacterRange:(struct _NSRange )arg0 ;
-(struct CGRect )firstRectForCharacterRange:(struct _NSRange )arg0 withGranularity:(NSInteger)arg1 ;
-(struct CGRect )firstRectForCharacterRange:(struct _NSRange )arg0 withGranularity:(NSInteger)arg1 isVerticalOut:(*BOOL)arg2 ;
-(struct RTIRange )deltaRangeForSelection:(struct _NSRange )arg0 ;
-(struct _NSRange )deltaForSelectionRange:(struct _NSRange )arg0 ;
-(void)_enumerateDocumentRectsWithOptions:(NSUInteger)arg0 block:(id)arg1 ;
-(void)addTextRect:(struct CGRect )arg0 forCharacterRange:(struct _NSRange )arg1 ;
-(void)addTextRect:(struct CGRect )arg0 forCharacterRange:(struct _NSRange )arg1 granularity:(NSInteger)arg2 ;
-(void)addTextRect:(struct CGRect )arg0 forCharacterRange:(struct _NSRange )arg1 granularity:(NSInteger)arg2 isVertical:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateRectsWithOptions:(NSUInteger)arg0 range:(struct _NSRange )arg1 granularity:(NSInteger)arg2 block:(id)arg3 ;
-(void)resetTextRects;


@end


#endif