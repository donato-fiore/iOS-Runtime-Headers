// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPREVIEWLAYOUTMANAGER_H
#define ICPREVIEWLAYOUTMANAGER_H

@class NSTextStorage;


#import "ICBaseLayoutManager.h"

@interface ICPreviewLayoutManager : ICBaseLayoutManager

@property (nonatomic, getter=isInsideSystemPaper) BOOL insideSystemPaper; // ivar: _insideSystemPaper
@property (nonatomic) NSUInteger maxCharacterCount; // ivar: _maxCharacterCount
@property (retain, nonatomic) NSTextStorage *strongTextStorage; // ivar: _strongTextStorage


-(id)initWithNote:(id)arg0 maxCharacterCount:(NSUInteger)arg1 textContainer:(id)arg2 textController:(id)arg3 ;
-(id)linkAttributesForLink:(id)arg0 forCharacterAtIndex:(NSUInteger)arg1 ;
-(id)todoImageForParagraphStyle:(id)arg0 ;
-(void)drawGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)drawTodoItemForListRange:(struct _NSRange )arg0 paragraphStyle:(id)arg1 atOrigin:(struct CGPoint )arg2 ;
-(void)drawTodosForCharacterRange:(struct _NSRange )arg0 atOrigin:(struct CGPoint )arg1 ;


@end


#endif