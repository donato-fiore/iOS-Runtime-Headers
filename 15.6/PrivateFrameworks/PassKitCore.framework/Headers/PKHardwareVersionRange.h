// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKHARDWAREVERSIONRANGE_H
#define PKHARDWAREVERSIONRANGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKDeviceVersionRange.h"

@interface PKHardwareVersionRange : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PKDeviceVersionRange *appletv; // ivar: _appletv
@property (readonly, nonatomic) PKDeviceVersionRange *ipad; // ivar: _ipad
@property (readonly, nonatomic) PKDeviceVersionRange *iphone; // ivar: _iphone
@property (readonly, nonatomic) PKDeviceVersionRange *ipod; // ivar: _ipod
@property (readonly, nonatomic) PKDeviceVersionRange *watch; // ivar: _watch


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHardwareVersionRange:(id)arg0 ;
-(BOOL)matchesDeviceVersion:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif