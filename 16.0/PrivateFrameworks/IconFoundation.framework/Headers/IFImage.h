// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IFIMAGE_H
#define IFIMAGE_H

@class NSData, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IFImage : NSObject <NSCopying, NSSecureCoding>



@property (readonly) *CGImage CGImage;
@property (readonly) NSData *bitmapData;
@property (readonly) *CGImage cgImage;
@property (readonly) CGFloat dimension;
@property BOOL largest; // ivar: _largest
@property CGSize minimumSize;
@property (readonly) CGSize pixelSize;
@property (readonly) BOOL placeholder;
@property BOOL placeholder;
@property (readonly) CGFloat scale;
@property (readonly) CGSize size;
@property (readonly) NSUUID *uuid;
@property NSUInteger validationFlags;
@property (readonly) NSData *validationToken;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)imageWithContentsOfURL:(id)arg0 ;
+(struct CGColorSpace *)defaultCGColorSpace;
+(struct CGImage *)createCGImageWithBitmapData:(id)arg0 ;
+(struct CGImage *)createCGImageWithBitmapData:(id)arg0 imageHeader:(struct ? *)arg1 ;
+(struct CGImage *)escapingCGImageWithCGImage:(struct CGImage *)arg0 ;
-(BOOL)writeToURL:(id)arg0 ;
-(id)_init;
-(id)digest;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 minimumSize:(struct CGSize )arg2 placeholder:(BOOL)arg3 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 placeholder:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithData:(id)arg0 uuid:(id)arg1 ;
-(id)initWithData:(id)arg0 uuid:(id)arg1 validationToken:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif