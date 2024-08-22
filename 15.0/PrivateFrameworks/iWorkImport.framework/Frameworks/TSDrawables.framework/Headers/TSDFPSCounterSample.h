// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFPSCOUNTERSAMPLE_H
#define TSDFPSCOUNTERSAMPLE_H


#import <Foundation/Foundation.h>


@interface TSDFPSCounterSample : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat time; // ivar: _time


+(id)sampleWithTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)initWithTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif