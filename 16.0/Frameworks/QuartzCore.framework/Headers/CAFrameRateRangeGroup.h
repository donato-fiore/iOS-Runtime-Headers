// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAFRAMERATERANGEGROUP_H
#define CAFRAMERATERANGEGROUP_H


#import <Foundation/Foundation.h>


@interface CAFrameRateRangeGroup : NSObject {
    *void _impl;
    unsigned int _current_reason_count;
    unsigned int _reasons;
}


@property (readonly, nonatomic) CAFrameRateRange arbitratedRange;


-(*unsigned int)reasonsWithCount:(*unsigned int)arg0 ;
-(BOOL)hasCompatQuantaIntent;
-(id)initWithDisplay:(id)arg0 ;
-(id)initWithHeartbeatRate:(CGFloat)arg0 minimumFrameDuration:(unsigned char)arg1 supportsVRR:(BOOL)arg2 compatQuantaMode:(BOOL)arg3 serverCompatQuantaMode:(BOOL)arg4 ;
-(struct CAFrameIntervalRange )arbitratedIntervalRange;
-(void)addCompatQuantaIntent;
-(void)addFrameRateRange:(struct CAFrameRateRange )arg0 ;
-(void)addReason:(unsigned int)arg0 ;
-(void)dealloc;
-(void)removeFrameRateRange:(struct CAFrameRateRange )arg0 ;
-(void)updateFrameRateRange:(struct CAFrameRateRange )arg0 toRange:(struct CAFrameRateRange )arg1 ;


@end


#endif