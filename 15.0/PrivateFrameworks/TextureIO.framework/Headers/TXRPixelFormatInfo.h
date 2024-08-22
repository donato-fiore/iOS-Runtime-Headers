// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRPIXELFORMATINFO_H
#define TXRPIXELFORMATINFO_H


#import <Foundation/Foundation.h>


@interface TXRPixelFormatInfo : NSObject



+(BOOL)hasAlpha:(NSUInteger)arg0 ;
+(BOOL)isASTC:(NSUInteger)arg0 ;
+(BOOL)isBC1to5:(NSUInteger)arg0 ;
+(BOOL)isBC6to7:(NSUInteger)arg0 ;
+(BOOL)isCompressed:(NSUInteger)arg0 ;
+(BOOL)isETC2:(NSUInteger)arg0 ;
+(BOOL)isFloat:(NSUInteger)arg0 ;
+(BOOL)isGammaEncoded:(NSUInteger)arg0 ;
+(BOOL)isInteger:(NSUInteger)arg0 ;
+(BOOL)isPVRTC:(NSUInteger)arg0 ;
+(BOOL)isSRGB:(NSUInteger)arg0 ;
+(struct TXRImageMemoryLayout )packedMemoryLayoutForFormat:(NSUInteger)arg0 dimensions;
+(unsigned char)componentsPerPixel:(NSUInteger)arg0 ;
+(unsigned char)pixelBytes:(NSUInteger)arg0 ;


@end


#endif