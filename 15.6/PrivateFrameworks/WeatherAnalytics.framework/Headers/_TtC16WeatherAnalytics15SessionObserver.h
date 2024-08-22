// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16WEATHERANALYTICS15SESSIONOBSERVER_H
#define _TTC16WEATHERANALYTICS15SESSIONOBSERVER_H

@class SwiftObject;



@interface _TtC16WeatherAnalytics15SessionObserver : SwiftObject {
    ? tracker;
    ? sessionManager;
    ? client;
    ? identificationService;
    ? cellularRadioAccessTechnologyProvider;
    ? locationAccessDataProvider;
    ? locationDataProvider;
    ? appConfigurationManager;
    ? lock;
    ? loadedViaReferral;
    ? startMethod;
}




-(void)pushMobileData;
-(void)pushOrientationData;
-(void)pushTemperatureScaleData;


@end


#endif