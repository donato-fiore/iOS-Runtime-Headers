// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBTEXTBLOCK_H
#define PBTEXTBLOCK_H


#import <Foundation/Foundation.h>


@interface PBTextBlock : NSObject



+(void)applyTextRuler:(*void)arg0 toTextBlock:(id)arg1 ;
+(void)readClientTextBox:(id)arg0 textBody:(id)arg1 state:(id)arg2 ;
+(void)readFromStyledText:(struct __CFAttributedString *)arg0 toStyledPargraphs:(struct __CFArray *)arg1 ;
+(void)readFromTextBlock:(id)arg0 toStyledText:(struct __CFAttributedString *)arg1 ;
+(void)readParagraph:(id)arg0 paragraph:(struct __CFAttributedString *)arg1 textType:(int)arg2 state:(id)arg3 ;


@end


#endif