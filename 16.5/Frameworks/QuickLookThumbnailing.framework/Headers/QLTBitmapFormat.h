// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTBITMAPFORMAT_H
#define QLTBITMAPFORMAT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLTBitmapFormat : NSObject <NSSecureCoding>



@property unsigned int bitmapInfo; // ivar: _bitmapInfo
@property NSUInteger bitsPerComponent; // ivar: _bitsPerComponent
@property NSUInteger bitsPerPixel; // ivar: _bitsPerPixel
@property NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (retain) *CGColorSpace colorSpace; // ivar: _colorSpace
@property NSUInteger height; // ivar: _height
@property NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
+(id)bitmapFormatWithBitmapImage:(struct CGImage *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFormat:(id)arg0 ;
-(id)description;
-(id)initWithBitmapContext:(struct CGContext *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif