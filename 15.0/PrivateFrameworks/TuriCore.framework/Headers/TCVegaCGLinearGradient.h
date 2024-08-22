// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCVEGACGLINEARGRADIENT_H
#define TCVEGACGLINEARGRADIENT_H

@class NSMutableArray;
@protocol TCVegaCGGradientInterface;

#import <Foundation/Foundation.h>


@interface TCVegaCGLinearGradient : NSObject <TCVegaCGGradientInterface>

 {
    CGFloat _x0;
    CGFloat _y0;
    CGFloat _x1;
    CGFloat _y1;
    NSMutableArray *_colorStops;
}




-(id)initWithDictionary:(id)arg0 ;
-(id)initWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 x1:(CGFloat)arg2 y1:(CGFloat)arg3 ;
-(void)addColorStopWithOffset:(CGFloat)arg0 color:(id)arg1 ;
-(void)fillWithContext:(struct CGContext *)arg0 ;


@end


#endif