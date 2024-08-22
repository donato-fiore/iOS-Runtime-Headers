// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIGRADIENT_H
#define UIGRADIENT_H


#import <Foundation/Foundation.h>


@interface UIGradient : NSObject {
    *? _values;
    CGFloat _height;
    *CGShading _shader;
}




-(id)initVerticalWithValues:(struct ? *)arg0 ;
-(void)dealloc;
-(void)fillRect:(struct CGRect )arg0 ;
-(void)fillRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif