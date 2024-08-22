// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGELQMWINDOWANALYSISJOIN_H
#define WIFIUSAGELQMWINDOWANALYSISJOIN_H

@class NSString;


#import "WiFiUsageLQMWindowAnalysis.h"

@interface WiFiUsageLQMWindowAnalysisJoin : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *joinReason; // ivar: _joinReason


-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 andReasonString:(id)arg1 andActiveCall:(BOOL)arg2 onQueue:(id)arg3 ;


@end


#endif