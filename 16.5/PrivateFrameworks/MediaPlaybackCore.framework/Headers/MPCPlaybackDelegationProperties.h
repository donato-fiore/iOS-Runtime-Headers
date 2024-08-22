// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYBACKDELEGATIONPROPERTIES_H
#define MPCPLAYBACKDELEGATIONPROPERTIES_H

@class NSString, NSTimeZone;
@protocol MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCPlaybackDelegationProperties : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (readonly, copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *requestUserAgent; // ivar: _requestUserAgent
@property (readonly, nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger systemReleaseType; // ivar: _systemReleaseType
@property (readonly, copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
+(id)payloadValueFromJSONValue:(id)arg0 ;
-(id)_copyWithClass:(Class)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreAccountID:(NSUInteger)arg0 deviceGUID:(id)arg1 ;
-(id)mpc_jsonValue;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif