// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMEDBUFFER_H
#define TIMEDBUFFER_H


#import <Foundation/Foundation.h>


@interface TimedBuffer : NSObject

@property (nonatomic) *__CVBuffer buffer; // ivar: _buffer
@property (nonatomic) ? timestamp; // ivar: _timestamp


-(id)initWithBuffer:(struct __CVBuffer *)arg0 atTimestamp:(struct ? )arg1 ;


@end


#endif