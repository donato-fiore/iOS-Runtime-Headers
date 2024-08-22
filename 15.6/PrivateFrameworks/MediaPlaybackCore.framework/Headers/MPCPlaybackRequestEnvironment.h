// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYBACKREQUESTENVIRONMENT_H
#define MPCPLAYBACKREQUESTENVIRONMENT_H

@class NSString, ICUserIdentity;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPCPlaybackDelegationProperties.h"
#import "MPCPrivateListeningStateSource.h"

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // ivar: _delegationProperties
@property (readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // ivar: _privateListeningStateSource
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // ivar: _requestingBundleIdentifier
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion
@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(BOOL)supportsSecureCoding;
+(id)activeAccountRequestEnvironment;
+(id)requestEnvironmentWithUserIdentity:(id)arg0 ;
-(id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg0 ;
-(id)_createMusicKitRequestContext;
-(id)_createStoreRequestContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserIdentity:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)rectifiedPlaybackRequestEnvironmentForAccountManager:(id)arg0 reasons:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif