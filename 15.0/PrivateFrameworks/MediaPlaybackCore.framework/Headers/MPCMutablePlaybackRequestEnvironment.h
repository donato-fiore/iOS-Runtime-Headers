// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMUTABLEPLAYBACKREQUESTENVIRONMENT_H
#define MPCMUTABLEPLAYBACKREQUESTENVIRONMENT_H

@class NSString, ICUserIdentity;


#import "MPCPlaybackRequestEnvironment.h"
#import "MPCPlaybackDelegationProperties.h"
#import "MPCPrivateListeningStateSource.h"

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties;
@property (copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (retain, nonatomic) ICUserIdentity *userIdentity;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif