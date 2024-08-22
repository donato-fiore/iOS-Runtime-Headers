// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVSTREAMFRAME_H
#define MOVSTREAMFRAME_H


#import <Foundation/Foundation.h>


@interface MOVStreamFrame : NSObject

@property (readonly) ? cmTimeStamp; // ivar: _cmTimeStamp
@property (readonly) id *context; // ivar: _context
@property (readonly) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) CGFloat timeStamp; // ivar: _timeStamp


-(id)description;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 timeStamp:(CGFloat)arg1 context:(id)arg2 ;
-(void)dealloc;


@end


#endif