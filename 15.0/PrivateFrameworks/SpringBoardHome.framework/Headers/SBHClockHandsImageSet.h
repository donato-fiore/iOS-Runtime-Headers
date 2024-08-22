// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHCLOCKHANDSIMAGESET_H
#define SBHCLOCKHANDSIMAGESET_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface SBHClockHandsImageSet : NSObject {
    SBHClockApplicationIconImageMetrics _metrics;
}


@property (retain, nonatomic) UIImage *hourMinuteDot; // ivar: _hourMinuteDot
@property (retain, nonatomic) UIImage *hours; // ivar: _hours
@property (retain, nonatomic) UIImage *minutes; // ivar: _minutes
@property (retain, nonatomic) UIImage *secondDot; // ivar: _secondDot
@property (retain, nonatomic) UIImage *seconds; // ivar: _seconds


-(void)getMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
-(void)setMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;


@end


#endif