// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCITY_H
#define STCITY_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STCity : NSObject <NSSecureCoding>

 {
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_timeZone;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_alCityID;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithName:(id)arg0 unlocalizedName:(id)arg1 countryName:(id)arg2 unlocalizedCountryName:(id)arg3 timeZone:(id)arg4 latitude:(id)arg5 longitude:(id)arg6 alCityID:(id)arg7 ;
-(id)alCityValue;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif