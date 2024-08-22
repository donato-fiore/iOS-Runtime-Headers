// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKIMAGEDATA_H
#define ABPKIMAGEDATA_H


#import <Foundation/Foundation.h>


@interface ABPKImageData : NSObject

@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif