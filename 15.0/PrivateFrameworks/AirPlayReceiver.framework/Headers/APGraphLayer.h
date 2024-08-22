// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APGRAPHLAYER_H
#define APGRAPHLAYER_H

@class CALayer;



@interface APGraphLayer : CALayer {
    **float _Values;
    *float _Mins;
    *float _Maxes;
    *int _StartIndex;
    *int _NumValues;
    int _NumGraphs;
    *CGPoint _Lines;
    int _MaxLength;
    *__CTFont _Font;
    *__CFDictionary _TextAttributes;
}




+(struct CGColor *)copyGraphColorWithIndex:(int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setUpGraph:(int)arg0 min:(float)arg1 max:(float)arg2 numValues:(int)arg3 ;
-(void)setUpGraphs:(int)arg0 ;
-(void)updateValue:(int)arg0 value:(float)arg1 ;


@end


#endif