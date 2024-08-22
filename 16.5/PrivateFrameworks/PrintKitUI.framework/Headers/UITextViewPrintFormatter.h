// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTVIEWPRINTFORMATTER_H
#define UITEXTVIEWPRINTFORMATTER_H

@class NSArray;


#import "UIViewPrintFormatter.h"

@interface UITextViewPrintFormatter : UIViewPrintFormatter {
    ? _textViewPrintFormatterFlags;
    NSArray *_pageData;
}




-(NSInteger)_recalcPageCount;
-(NSInteger)textAlignment;
-(id)_pageData;
-(id)_textView;
-(id)attributedText;
-(id)color;
-(id)font;
-(id)text;
-(struct CGRect )rectForPageAtIndex:(NSInteger)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;


@end


#endif