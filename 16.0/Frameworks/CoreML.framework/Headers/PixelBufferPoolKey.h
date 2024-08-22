// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIXELBUFFERPOOLKEY_H
#define PIXELBUFFERPOOLKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PixelBufferPoolKey : NSObject <NSCopying>



@property (readonly) CGSize frameSize; // ivar: _frameSize
@property (readonly) unsigned int pixelFormatType; // ivar: _pixelFormatType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 pixelFormatType:(unsigned int)arg1 ;


@end


#endif