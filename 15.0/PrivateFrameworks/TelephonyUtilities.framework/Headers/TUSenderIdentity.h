// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUSENDERIDENTITY_H
#define TUSENDERIDENTITY_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUHandle.h"

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSUUID *accountUUID; // ivar: _accountUUID
@property (readonly, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) NSString *localizedShortName; // ivar: _localizedShortName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSenderIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 accountUUID:(id)arg1 localizedName:(id)arg2 localizedShortName:(id)arg3 handle:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif