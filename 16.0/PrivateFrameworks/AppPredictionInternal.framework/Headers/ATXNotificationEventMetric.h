// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONEVENTMETRIC_H
#define ATXNOTIFICATIONEVENTMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXNotificationEventMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSInteger deliveryMethod; // ivar: _deliveryMethod
@property (retain, nonatomic) NSString *destinationReason; // ivar: _destinationReason
@property (retain, nonatomic) NSString *finalDestination; // ivar: _finalDestination
@property (retain, nonatomic) NSString *handleModeIdentifier; // ivar: _handleModeIdentifier
@property (nonatomic) BOOL isMessage; // ivar: _isMessage
@property (retain, nonatomic) NSString *originalDestination; // ivar: _originalDestination
@property (retain, nonatomic) NSString *receiveModeIdentifier; // ivar: _receiveModeIdentifier
@property (nonatomic) NSInteger resolutionType; // ivar: _resolutionType
@property (nonatomic) CGFloat timeToResolution; // ivar: _timeToResolution
@property (nonatomic) NSInteger urgency; // ivar: _urgency


-(id)coreAnalyticsDictionary;
-(id)initWithQueryResult:(id)arg0 modeClient:(id)arg1 ;
-(id)metricName;


@end


#endif