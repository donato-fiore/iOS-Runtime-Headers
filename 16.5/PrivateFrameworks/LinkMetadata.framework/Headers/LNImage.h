// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNIMAGE_H
#define LNIMAGE_H

@class INImage;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNImage.h"

@interface LNImage : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) INImage *inImage; // ivar: _inImage
@property (readonly, nonatomic) LNImage *proxiedImageCopy;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 renderingMode:(NSUInteger)arg1 ;
-(id)initWithINImage:(id)arg0 ;
-(id)initWithImageNamed:(id)arg0 ;
-(id)initWithImageNamed:(id)arg0 renderingMode:(NSUInteger)arg1 ;
-(id)initWithSystemImageNamed:(id)arg0 ;
-(id)initWithURL:(id)arg0 renderingMode:(NSUInteger)arg1 ;
-(id)initWithURL:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 renderingMode:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif