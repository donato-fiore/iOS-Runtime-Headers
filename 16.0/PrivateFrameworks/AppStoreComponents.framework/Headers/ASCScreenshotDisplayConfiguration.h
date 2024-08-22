// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCSCREENSHOTDISPLAYCONFIGURATION_H
#define ASCSCREENSHOTDISPLAYCONFIGURATION_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCScreenshotDisplayConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *cornerCurve;
@property (readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // ivar: _deviceCornerRadiusFactor
@property (readonly, nonatomic) NSUInteger maskedCorners;


+(BOOL)supportsSecureCoding;
+(CGFloat)defaultCornerRadius;
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)cornerRadiusForSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceCornerRadiusFactor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif