// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNENVIRONMENT_H
#define LNENVIRONMENT_H

@class NSCalendar, CLLocation, NSString, NSMutableDictionary, NSTimeZone;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNEnvironment : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (copy, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSMutableDictionary *locationAuthorizationStatus; // ivar: _locationAuthorizationStatus
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
+(id)defaultEnvironment;
-(BOOL)locationAuthorizationStatusForBundleIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)trimLocation:(id)arg0 atKeyPath:(id)arg1 againstTCCWithBundleIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif