// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGHUDLAYER_H
#define FIGHUDLAYER_H

@class CALayer;



@interface FigHUDLayer : CALayer {
    *__CTFont _Font;
    CGFloat _FontSize;
    *__CFDictionary _TextAttributes;
    *__CFArray _Labels;
    *__CFArray _Values;
    *__CFArray _LabelColors;
    *__CFArray _ValueColors;
}




-(NSInteger)addLine:(struct __CFString *)arg0 withColorIndex:(int)arg1 ;
-(NSInteger)addLine:(struct __CFString *)arg0 withLabelColorIndex:(int)arg1 withValueColorIndex:(int)arg2 ;
-(id)init;
-(struct __CFArray *)getLabels;
-(struct __CFArray *)getValues;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)resetLines;
-(void)setFont:(struct __CFString *)arg0 withPointSize:(CGFloat)arg1 ;
-(void)setValue:(struct __CFString *)arg0 atIndex:(int)arg1 ;
-(void)setValueAtIndex:(int)arg0 format:(id)arg1 ;


@end


#endif