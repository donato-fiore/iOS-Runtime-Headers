// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SERIALIZABLECVPIXELBUFFER_H
#define _SERIALIZABLECVPIXELBUFFER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SerializableCVPixelBuffer : NSObject <NSSecureCoding>



@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer


+(BOOL)supportsSecureCoding;
-(id)initWithCVPixelBufferRef:(struct __CVBuffer *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif