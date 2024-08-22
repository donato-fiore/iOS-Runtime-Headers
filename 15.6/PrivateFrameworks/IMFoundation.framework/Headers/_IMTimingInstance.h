// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IMTIMINGINSTANCE_H
#define _IMTIMINGINSTANCE_H


#import <Foundation/Foundation.h>


@interface _IMTimingInstance : NSObject {
    CGFloat _startTiming;
    CGFloat _stopTiming;
}


@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (nonatomic) CGFloat totalTime; // ivar: _totalTime


+(id)createTimingInstanceWithStartTime:(float)arg0 ;
-(id)description;
-(id)init;
-(void)startUsingTime:(CGFloat)arg0 ;
-(void)stopUsingTime:(CGFloat)arg0 ;


@end


#endif