// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMWINDOWANALYSISNETWORKQUALITY_H
#define WIFIUSAGELQMWINDOWANALYSISNETWORKQUALITY_H

@class NSDictionary;


#import "WiFiUsageLQMWindowAnalysis.h"

@interface WiFiUsageLQMWindowAnalysisNetworkQuality : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSDictionary *networkQualityEventFields; // ivar: _networkQualityEventFields
@property (nonatomic) NSUInteger networkQualityResponsivenessScore; // ivar: _networkQualityResponsivenessScore


-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 AndDictionary:(id)arg1 onQueue:(id)arg2 ;


@end


#endif