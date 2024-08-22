// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUPIXELFORMAT_H
#define NUPIXELFORMAT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NUPixelFormat : NSObject

@property (readonly, nonatomic) int CIFormat; // ivar: _CIFormat
@property (readonly, nonatomic) unsigned int CVPixelFormat; // ivar: _CVPixelFormat
@property (readonly, nonatomic) NSInteger bytesPerPixel; // ivar: _bytesPerPixel
@property (readonly, nonatomic) NSUInteger metalFormat; // ivar: _metalFormat
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL supportsExtendedRange; // ivar: _supportsExtendedRange


+(id)A2RGB10;
+(id)ARGB8;
+(id)BGRA8;
+(id)R16;
+(id)R8;
+(id)RG16;
+(id)RGBA16;
+(id)RGBA8;
+(id)RGBAf;
+(id)RGBAh;
+(id)pixelFormatForCIFormat:(int)arg0 ;
+(id)pixelFormatForCVPixelFormat:(unsigned int)arg0 ;
+(id)sRGB10XR;
+(id)sRGBA8;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPixelFormat:(id)arg0 ;
-(NSInteger)alignedRowBytesForWidth:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif