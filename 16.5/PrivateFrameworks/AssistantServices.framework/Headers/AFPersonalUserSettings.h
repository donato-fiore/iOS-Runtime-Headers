// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFPERSONALUSERSETTINGS_H
#define AFPERSONALUSERSETTINGS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFPersonalUserSettings : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *preferredLanguage; // ivar: _preferredLanguage
@property (copy, nonatomic) NSString *region; // ivar: _region
@property (copy, nonatomic) NSString *temperatureUnit; // ivar: _temperatureUnit
@property (nonatomic) BOOL twentyFourHourTimeDisplay; // ivar: _twentyFourHourTimeDisplay


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif