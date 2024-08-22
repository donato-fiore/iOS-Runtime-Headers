// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRRTCPAIRINGMETRIC_H
#define BRRTCPAIRINGMETRIC_H

@class NSString, NSMutableDictionary, NSNumber;
@protocol BRRTCMetric;

#import <Foundation/Foundation.h>


@interface BRRTCPairingMetric : NSObject <BRRTCMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *metricDict; // ivar: _metricDict
@property (nonatomic) NSUInteger pairingBeginsType; // ivar: _pairingBeginsType
@property (nonatomic) unsigned short rtcType; // ivar: _rtcType
@property (nonatomic) NSNumber *subreasonCode; // ivar: _subreasonCode
@property (readonly) Class superclass;


-(id)dictionaryRepresentation;
-(id)initWithPairingBeginsType:(NSUInteger)arg0 ;
-(void)addPairingTimeEventToMetricDict:(id)arg0 withValue:(id)arg1 ;
-(void)addPairingTimePerformanceEventToMetricDict:(id)arg0 withTime:(id)arg1 ;


@end


#endif