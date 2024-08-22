// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVADEPTHIR_H
#define CVADEPTHIR_H


#import <Foundation/Foundation.h>


@interface CVADepthIR : NSObject

@property (nonatomic) *__CVBuffer dataBuffer; // ivar: _dataBuffer
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithPixelBufferRef:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif