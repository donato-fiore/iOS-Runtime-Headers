// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTEXTPARAGRAPHDRAWING_H
#define UISTEXTPARAGRAPHDRAWING_H

@class NSString;
@protocol UISDrawing;

#import <Foundation/Foundation.h>


@interface UISTextParagraphDrawing : NSObject <UISDrawing>

 {
    *__CFAttributedString _textString;
    *__CTFrame _frame;
    CGSize _frameSize;
    CGFloat _drawingHeight;
    CGFloat _scale;
}


@property (readonly, nonatomic) CGRect alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize drawingSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned char lineCount; // ivar: _lineCount
@property (readonly) Class superclass;


-(id)initWithString:(id)arg0 attributes:(struct __CFDictionary *)arg1 size:(struct CGSize )arg2 numberOfLines:(unsigned char)arg3 scale:(CGFloat)arg4 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif