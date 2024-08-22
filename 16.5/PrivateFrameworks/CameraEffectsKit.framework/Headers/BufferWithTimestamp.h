// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUFFERWITHTIMESTAMP_H
#define BUFFERWITHTIMESTAMP_H


#import <Foundation/Foundation.h>


@interface BufferWithTimestamp : NSObject

@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithBuffer:(struct __CVBuffer *)arg0 timstamp:(CGFloat)arg1 ;


@end


#endif