// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCIDRSCHEDULERSTREAM_H
#define VCIDRSCHEDULERSTREAM_H


#import <Foundation/Foundation.h>


@interface VCIDRSchedulerStream : NSObject

@property (nonatomic) unsigned int framePosition; // ivar: _framePosition
@property (nonatomic) unsigned int framerate; // ivar: _framerate
@property (nonatomic) unsigned int framesPerIdrPeriod; // ivar: _framesPerIdrPeriod
@property (nonatomic) unsigned int keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic) unsigned int weightFactor; // ivar: _weightFactor


+(id)schedulerStreamWithKeyFrameInterval:(unsigned int)arg0 framerate:(unsigned int)arg1 weightFactor:(unsigned int)arg2 ;
-(NSInteger)compareWeightFactor:(id)arg0 ;
-(id)description;
-(id)initWithKeyFrameInterval:(unsigned int)arg0 framerate:(unsigned int)arg1 weightFactor:(unsigned int)arg2 ;


@end


#endif