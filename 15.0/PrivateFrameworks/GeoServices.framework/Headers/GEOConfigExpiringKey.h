// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCONFIGEXPIRINGKEY_H
#define GEOCONFIGEXPIRINGKEY_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOConfigExpiringKey : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *expireOSVersion; // ivar: _expireOSVersion
@property (readonly, nonatomic) NSDate *expireTime; // ivar: _expireTime
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath


+(BOOL)supportsSecureCoding;
+(id)expiringKey:(id)arg0 withTime:(id)arg1 osVersion:(id)arg2 ;
-(BOOL)_isExpiredRelativeTo:(id)arg0 osVersion:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 time:(id)arg1 osVersion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif