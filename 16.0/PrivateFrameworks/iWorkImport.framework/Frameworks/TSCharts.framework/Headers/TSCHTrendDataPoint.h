// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHTRENDDATAPOINT_H
#define TSCHTRENDDATAPOINT_H


#import <Foundation/Foundation.h>


@interface TSCHTrendDataPoint : NSObject {
    CGFloat _dataPointX;
    CGFloat _dataPointY;
    NSUInteger _valueIndex;
}




-(CGFloat)dataPointX;
-(CGFloat)dataPointY;
-(NSInteger)xValueCompare:(id)arg0 ;
-(NSUInteger)valueIndex;
-(id)initWithPointX:(CGFloat)arg0 pointY:(CGFloat)arg1 forValueIndex:(NSUInteger)arg2 ;


@end


#endif