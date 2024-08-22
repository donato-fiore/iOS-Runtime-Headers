// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13WIFIANALYTICS21WANWACTIVITYTRANSFORM_H
#define _TTC13WIFIANALYTICS21WANWACTIVITYTRANSFORM_H


#import <Foundation/Foundation.h>


@interface _TtC13WiFiAnalytics21WANWActivityTransform : NSObject {
    ? timeOffset;
    ? measurement;
    ? issues;
    ? singleFragment;
    ? shorthandConstantStats;
    ? early;
    ? later;
}




-(id)expandKeyNameLengthsFrom:(id)arg0 ;
-(id)getTransformedMeasurement;
-(id)getTransformedMeasurementForLogging;
-(id)getTransformedMeasurementForTelemetry;
-(id)init;
-(id)initWithLater:(id)arg0 early:(id)arg1 ;
-(id)initWithSingle:(id)arg0 ;
-(id)trimKeyNameLengthsFrom:(id)arg0 ;


@end


#endif