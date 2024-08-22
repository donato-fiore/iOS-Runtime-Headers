// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATACOLLECTORAGGREGATORRECORD_H
#define HDDATACOLLECTORAGGREGATORRECORD_H

@class NSString;
@protocol HDCollectedSensorDatum;

#import <Foundation/Foundation.h>

#import "HDDataAggregator.h"
#import "HDDataCollectorConfiguration.h"

@interface HDDataCollectorAggregatorRecord : NSObject {
    BOOL _hasSetLastSensorDatum;
    HDDataAggregator *_aggregator;
    NSString *_identifier;
    HDDataCollectorConfiguration *_configuration;
    id<HDCollectedSensorDatum> *_lastSensorDatum;
}




-(id)description;


@end


#endif