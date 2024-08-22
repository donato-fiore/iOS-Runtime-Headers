// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCVPIXELBUFFER_H
#define NUCVPIXELBUFFER_H


#import <Foundation/Foundation.h>


@interface NUCVPixelBuffer : NSObject

@property (readonly, nonatomic) *__CVBuffer CVPixelBuffer; // ivar: _CVPixelBuffer


-(id)init;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif