// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYBACKREQUESTENVIRONMENT_H
#define MPCPLAYBACKREQUESTENVIRONMENT_H

@class NSString, ICUserIdentity;
@protocol MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPCPlaybackDelegationProperties.h"

@interface MPCPlaybackRequestEnvironment : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // ivar: _delegationProperties
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // ivar: _requestingBundleIdentifier
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *trustID; // ivar: _trustID
@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(BOOL)supportsSecureCoding;
+(id)activeAccountRequestEnvironment;
+(id)payloadValueFromJSONValue:(id)arg0 ;
+(id)requestEnvironmentWithUserIdentity:(id)arg0 ;
-(id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg0 ;
-(id)_createMusicKitRequestContext;
-(id)_createStoreRequestContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserIdentity:(id)arg0 ;
-(id)mpc_jsonValue;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)rectifiedPlaybackRequestEnvironmentWithReasons:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif