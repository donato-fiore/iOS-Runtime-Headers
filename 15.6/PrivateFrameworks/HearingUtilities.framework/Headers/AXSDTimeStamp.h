// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSDTIMESTAMP_H
#define AXSDTIMESTAMP_H


#import <Foundation/Foundation.h>


@interface AXSDTimeStamp : NSObject {
    CGFloat _duration;
    CGFloat _time;
}


@property (readonly) CGFloat duration;
@property (readonly) CGFloat time;


-(id)initWithResult:(id)arg0 ;
-(id)initWithTime:(CGFloat)arg0 andDuration:(CGFloat)arg1 ;


@end


#endif