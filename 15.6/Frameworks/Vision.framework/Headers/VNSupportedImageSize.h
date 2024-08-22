// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSUPPORTEDIMAGESIZE_H
#define VNSUPPORTEDIMAGESIZE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNSizeRange.h"

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _cachedCalculatedHash;
}


@property (readonly, nonatomic) NSUInteger aspectRatioHandling; // ivar: _aspectRatioHandling
@property (readonly, nonatomic) unsigned int idealImageFormat; // ivar: _idealImageFormat
@property (readonly, nonatomic) unsigned int idealOrientation; // ivar: _idealOrientation
@property (readonly, nonatomic, getter=isOrientationAgnostic) BOOL orientationAgnostic; // ivar: _orientationAgnostic
@property (readonly, nonatomic) VNSizeRange *pixelsHighRange; // ivar: _pixelsHighRange
@property (readonly, nonatomic) VNSizeRange *pixelsWideRange; // ivar: _pixelsWideRange


+(BOOL)supportsSecureCoding;
-(BOOL)isAllowedPixelsWide:(NSUInteger)arg0 pixelsHigh:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdealFormat:(unsigned int)arg0 pixelsWideRange:(id)arg1 pixelsHighRange:(id)arg2 aspectRatioHandling:(NSUInteger)arg3 idealOrientation:(unsigned int)arg4 orientationAgnostic:(BOOL)arg5 ;
-(id)initWithIdealFormat:(unsigned int)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 orientation:(unsigned int)arg3 aspectRatioHandling:(NSUInteger)arg4 orientationAgnostic:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif