// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSDTIMEDAUDIOBUFFER_H
#define AXSDTIMEDAUDIOBUFFER_H

@class AVAudioPCMBuffer, AVAudioTime;

#import <Foundation/Foundation.h>


@interface AXSDTimedAudioBuffer : NSObject

@property (retain, nonatomic) AVAudioPCMBuffer *buffer; // ivar: _buffer
@property (retain, nonatomic) AVAudioTime *time; // ivar: _time


-(id)initWithBuffer:(id)arg0 atTime:(id)arg1 ;


@end


#endif