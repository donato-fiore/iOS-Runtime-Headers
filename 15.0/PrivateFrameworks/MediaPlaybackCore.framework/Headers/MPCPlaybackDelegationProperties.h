// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKDELEGATIONPROPERTIES_H
#define MPCPLAYBACKDELEGATIONPROPERTIES_H

@class NSString, NSTimeZone;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPCPrivateListeningStateSource.h"

@interface MPCPlaybackDelegationProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (readonly, copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // ivar: _privateListeningStateSource
@property (readonly, copy, nonatomic) NSString *requestUserAgent; // ivar: _requestUserAgent
@property (readonly, nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (readonly, nonatomic) NSInteger systemReleaseType; // ivar: _systemReleaseType
@property (readonly, copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
-(id)_copyWithClass:(Class)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreAccountID:(NSUInteger)arg0 deviceGUID:(id)arg1 privateListeningStateSource:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif