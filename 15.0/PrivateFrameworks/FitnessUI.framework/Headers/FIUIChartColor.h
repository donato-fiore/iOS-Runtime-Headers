// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTCOLOR_H
#define FIUICHARTCOLOR_H


#import <Foundation/Foundation.h>


@interface FIUIChartColor : NSObject {
    *CGGradient _gradient;
    *CGColor _color;
}


@property (nonatomic) CGFloat threshold; // ivar: _threshold


-(id)initWithThreshold:(CGFloat)arg0 color:(id)arg1 ;
-(id)initWithThreshold:(CGFloat)arg0 startColor:(id)arg1 endColor:(id)arg2 ;
-(void)drawInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif