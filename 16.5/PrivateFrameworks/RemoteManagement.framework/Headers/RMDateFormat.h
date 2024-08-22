// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMDATEFORMAT_H
#define RMDATEFORMAT_H


#import <Foundation/Foundation.h>


@interface RMDateFormat : NSObject



+(id)_isoLocalTimeZoneDateFormatter;
+(id)_isoLocalTimeZoneFractionalSecondsDateFormatter;
+(id)_isoUTCDateFormatter;
+(id)_isoUTCFractionalSecondsDateFormatter;
+(id)dateWithStringLocalTimeZone:(id)arg0 ;
+(id)dateWithStringLocalTimeZoneFractionalSeconds:(id)arg0 ;
+(id)dateWithStringUTC:(id)arg0 ;
+(id)dateWithStringUTCFractionalSeconds:(id)arg0 ;
+(id)stringLocalTimeZoneFractionalSecondsWithDate:(id)arg0 ;
+(id)stringLocalTimeZoneWithDate:(id)arg0 ;
+(id)stringUTCFractionalSecondsWithDate:(id)arg0 ;
+(id)stringUTCWithDate:(id)arg0 ;


@end


#endif