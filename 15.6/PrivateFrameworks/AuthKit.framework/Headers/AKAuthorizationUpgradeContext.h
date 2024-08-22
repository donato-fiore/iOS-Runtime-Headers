// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONUPGRADECONTEXT_H
#define AKAUTHORIZATIONUPGRADECONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKAuthorizationUpgradeContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (copy, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif