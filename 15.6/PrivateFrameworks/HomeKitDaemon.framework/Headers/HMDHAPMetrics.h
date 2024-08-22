// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPMETRICS_H
#define HMDHAPMETRICS_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHAPMetrics : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (retain, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithHMDAccessory:(id)arg0 ;


@end


#endif