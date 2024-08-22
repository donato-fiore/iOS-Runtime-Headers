// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSMCOUTPUTOBJECT_H
#define PLSMCOUTPUTOBJECT_H


#import <Foundation/Foundation.h>


@interface PLSMCOutputObject : NSObject

@property (nonatomic) CGFloat channelValue; // ivar: _channelValue
@property (nonatomic) unsigned int cycleCount; // ivar: _cycleCount
@property (nonatomic) unsigned char variant; // ivar: _variant


+(id)objectWithChannelValue:(CGFloat)arg0 cycleCount:(unsigned int)arg1 variant:(unsigned char)arg2 ;


@end


#endif