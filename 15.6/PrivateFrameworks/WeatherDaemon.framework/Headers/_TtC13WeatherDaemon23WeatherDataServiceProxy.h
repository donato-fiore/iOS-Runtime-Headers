// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13WEATHERDAEMON23WEATHERDATASERVICEPROXY_H
#define _TTC13WEATHERDAEMON23WEATHERDATASERVICEPROXY_H


#import <Foundation/Foundation.h>


@interface _TtC13WeatherDaemon23WeatherDataServiceProxy : NSObject {
    ? weatherService;
    ? airQualityScaleService;
    ? availabilityService;
    ? dataManager;
    ? weatherDataRequestDeduper;
    ? weatherHistoryRequestDeduper;
    ? session;
    ? authenticator;
}




-(id)init;


@end


#endif