// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI21ENUIUSERCONSENTSTATUS_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI21ENUIUSERCONSENTSTATUS_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus : NSObject {
    ? textConsented;
    ? versionConsented;
    ? dateConsented;
}


@property (nonatomic, readonly) NSDate *dateConsented;
@property (nonatomic, readonly) NSString *textConsented;
@property (nonatomic, readonly) NSString *versionConsented;


-(id)init;
-(id)initWithTextConsented:(id)arg0 versionConsented:(id)arg1 dateConsented:(id)arg2 ;


@end


#endif