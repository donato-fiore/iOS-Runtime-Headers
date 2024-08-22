// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMEDEVICESTATE_H
#define DNDMEDEVICESTATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDMeDeviceState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *meDeviceName; // ivar: _meDeviceName
@property (readonly, nonatomic) NSUInteger meDeviceStatus; // ivar: _meDeviceStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSUInteger)arg0 name:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif