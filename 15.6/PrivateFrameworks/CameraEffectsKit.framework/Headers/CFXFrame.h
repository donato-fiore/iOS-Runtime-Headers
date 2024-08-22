// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXFRAME_H
#define CFXFRAME_H

@class ARFrame, PVFrameSet;

#import <Foundation/Foundation.h>


@interface CFXFrame : NSObject

@property (retain, nonatomic) ARFrame *arFrame; // ivar: _arFrame
@property (nonatomic) ? latency; // ivar: _latency
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (retain, nonatomic) PVFrameSet *pvFrameSet; // ivar: _pvFrameSet
@property (nonatomic) ? requestTime; // ivar: _requestTime
@property (nonatomic) ? timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFrame:(id)arg0 ;
-(id)initWithARFrame:(id)arg0 ;
-(id)initWithFrameSet:(id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(struct ? )arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif