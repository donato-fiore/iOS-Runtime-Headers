// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMWINDOWANALYSISLINKTEST_H
#define WIFIUSAGELQMWINDOWANALYSISLINKTEST_H



#import "WiFiUsageLQMWindowAnalysis.h"
#import "WFMeasureResult.h"

@interface WiFiUsageLQMWindowAnalysisLinkTest : WiFiUsageLQMWindowAnalysis

@property (readonly, nonatomic) WFMeasureResult *linkTestResults; // ivar: _linkTestResults


-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 andReason:(id)arg1 withWFMeasureResults:(id)arg2 onQueue:(id)arg3 ;


@end


#endif