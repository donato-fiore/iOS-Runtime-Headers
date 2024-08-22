// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIIMAGE_H
#define VIIMAGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIImage : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int orientation; // ivar: _orientation
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer


+(id)imageWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif