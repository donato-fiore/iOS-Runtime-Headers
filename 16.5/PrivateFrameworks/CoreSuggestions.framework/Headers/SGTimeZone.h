// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGTIMEZONE_H
#define SGTIMEZONE_H


#import <Foundation/Foundation.h>


@interface SGTimeZone : NSObject



+(id)countryCodeForAddress:(id)arg0 ;
+(id)sharedDetector;
+(id)timeZoneForAddress:(id)arg0 ;
+(id)timeZoneNameForAddress:(id)arg0 withCountryCode:(id)arg1 ;


@end


#endif