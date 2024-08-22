// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMUTABLEPLAYBACKDELEGATIONPROPERTIES_H
#define MPCMUTABLEPLAYBACKDELEGATIONPROPERTIES_H

@class NSString, NSTimeZone;


#import "MPCPlaybackDelegationProperties.h"
#import "MPCPrivateListeningStateSource.h"

@interface MPCMutablePlaybackDelegationProperties : MPCPlaybackDelegationProperties

@property (copy, nonatomic) NSString *deviceGUID;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (copy, nonatomic) NSString *requestUserAgent;
@property (nonatomic) NSUInteger storeAccountID;
@property (nonatomic) NSInteger systemReleaseType;
@property (copy, nonatomic) NSTimeZone *timeZone;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif