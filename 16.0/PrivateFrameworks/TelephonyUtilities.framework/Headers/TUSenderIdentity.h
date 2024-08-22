// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUSENDERIDENTITY_H
#define TUSENDERIDENTITY_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUHandle.h"

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *ISOCountryCode; // ivar: _ISOCountryCode
@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSUUID *accountUUID; // ivar: _accountUUID
@property (readonly, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) NSString *localizedServiceName; // ivar: _localizedServiceName
@property (readonly, copy, nonatomic) NSString *localizedShortName; // ivar: _localizedShortName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSenderIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSenderIdentity:(id)arg0 ;
-(id)initWithUUID:(id)arg0 accountUUID:(id)arg1 ISOCountryCode:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 localizedServiceName:(id)arg5 handle:(id)arg6 ;
-(id)initWithUUID:(id)arg0 accountUUID:(id)arg1 localizedName:(id)arg2 localizedShortName:(id)arg3 handle:(id)arg4 ;
-(id)initWithUUID:(id)arg0 accountUUID:(id)arg1 localizedName:(id)arg2 localizedShortName:(id)arg3 localizedServiceName:(id)arg4 handle:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif