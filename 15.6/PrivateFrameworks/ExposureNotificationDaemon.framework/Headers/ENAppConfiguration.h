// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENAPPCONFIGURATION_H
#define ENAPPCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ENAppConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (nonatomic) CGFloat callbackIntervalInMin; // ivar: _callbackIntervalInMin
@property (nonatomic) BOOL exposureMatching; // ivar: _exposureMatching
@property (nonatomic) CGFloat lastCachedEpochTimeInterval; // ivar: _lastCachedEpochTimeInterval
@property (nonatomic) NSInteger maxMatchingAttempts; // ivar: _maxMatchingAttempts
@property (nonatomic) NSInteger maxTtkMatchAttempt; // ivar: _maxTtkMatchAttempt
@property (nonatomic) NSInteger maxTtkMatchAttemptPerDay; // ivar: _maxTtkMatchAttemptPerDay
@property (copy, nonatomic) NSString *publicKey; // ivar: _publicKey
@property (copy, nonatomic) NSString *publicKeyVersion; // ivar: _publicKeyVersion
@property (copy, nonatomic) NSString *regionID; // ivar: _regionID


+(BOOL)supportsSecureCoding;
+(id)appConfigurationForRegion:(id)arg0 withInfo:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(id)arg0 andAppConfigInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif