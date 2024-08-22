// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWACTIVITYCLIENTMETRICSTATISTICS_H
#define NWACTIVITYCLIENTMETRICSTATISTICS_H

@class NSUUID, NSString, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface NWActivityClientMetricStatistics : NSObject

@property (retain, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSDictionary *clientMetric;
@property (retain, nonatomic) NSString *clientMetricName;
@property (retain, nonatomic) NSString *clientMetricString;
@property (retain, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (retain, nonatomic) NSUUID *externallyVisibleActivityUUID; // ivar: _externallyVisibleActivityUUID
@property (retain, nonatomic) NSData *metricData; // ivar: _metricData
@property (nonatomic) nw_activity_client_metric_report_s report; // ivar: _report


-(id)initWithData:(id)arg0 ;
-(id)initWithNWActivityClientMetricReport:(struct nw_activity_client_metric_report_s *)arg0 length:(NSUInteger)arg1 ;


@end


#endif