// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCMEDIAPLATFORM_H
#define ASCMEDIAPLATFORM_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCMediaPlatform : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // ivar: _deviceCornerRadiusFactor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceCornerRadiusFactor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif