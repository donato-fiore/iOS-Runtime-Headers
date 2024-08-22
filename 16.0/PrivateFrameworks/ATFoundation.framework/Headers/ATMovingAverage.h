// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATMOVINGAVERAGE_H
#define ATMOVINGAVERAGE_H


#import <Foundation/Foundation.h>


@interface ATMovingAverage : NSObject {
    *CGFloat _values;
    NSUInteger _count;
    NSUInteger _index;
}


@property (readonly, nonatomic) CGFloat average;
@property (readonly, nonatomic) NSUInteger window; // ivar: _window


-(id)initWithWindow:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)update:(CGFloat)arg0 ;


@end


#endif