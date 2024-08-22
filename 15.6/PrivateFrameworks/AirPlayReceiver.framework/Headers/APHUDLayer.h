// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APHUDLAYER_H
#define APHUDLAYER_H

@class CALayer;



@interface APHUDLayer : CALayer {
    *__CTFont _Font;
    *__CFDictionary _TextAttributes;
    *__CFArray _Labels;
    *__CFArray _Values;
    *__CFArray _Colors;
}




-(id)init;
-(void)addLine:(struct __CFString *)arg0 withColorIndex:(int)arg1 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setValue:(struct __CFString *)arg0 atIndex:(int)arg1 ;
-(void)setValueAtIndex:(int)arg0 format:(id)arg1 ;


@end


#endif