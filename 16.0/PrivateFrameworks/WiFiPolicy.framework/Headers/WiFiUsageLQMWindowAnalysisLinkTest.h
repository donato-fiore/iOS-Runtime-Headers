// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMWINDOWANALYSISLINKTEST_H
#define WIFIUSAGELQMWINDOWANALYSISLINKTEST_H

@class NSString;


#import "WiFiUsageLQMWindowAnalysis.h"
#import "WFMeasureResult.h"

@interface WiFiUsageLQMWindowAnalysisLinkTest : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *linkTestReason; // ivar: _linkTestReason
@property (retain, nonatomic) WFMeasureResult *linkTestResults; // ivar: _linkTestResults


-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 andReason:(id)arg1 withWFMeasureResults:(id)arg2 andActiveCall:(BOOL)arg3 andTimestamp:(id)arg4 onQueue:(id)arg5 ;


@end


#endif