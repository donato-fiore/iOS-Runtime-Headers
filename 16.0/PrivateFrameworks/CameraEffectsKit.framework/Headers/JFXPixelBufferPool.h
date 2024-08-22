// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXPIXELBUFFERPOOL_H
#define JFXPIXELBUFFERPOOL_H


#import <Foundation/Foundation.h>


@interface JFXPixelBufferPool : NSObject {
    *__CVPixelBufferPool _pixelBufferPool;
}


@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) unsigned int type; // ivar: _type


-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 type:(unsigned int)arg1 ;
-(struct __CVBuffer *)createPixelBuffer;
-(void)dealloc;


@end


#endif