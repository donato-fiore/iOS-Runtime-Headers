// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMPIXELBUFFERWRAPPER_H
#define AXMPIXELBUFFERWRAPPER_H


#import <Foundation/Foundation.h>


@interface AXMPixelBufferWrapper : NSObject {
    *__CVBuffer _pixelBuffer;
    unsigned int _orientation;
}


@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) CGSize orientedSize;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) CGSize unorientedSize;


+(id)new;
+(id)wrapperWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 ;
-(id)_initWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif