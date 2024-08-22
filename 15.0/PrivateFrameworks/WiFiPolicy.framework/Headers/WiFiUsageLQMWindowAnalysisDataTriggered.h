// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMWINDOWANALYSISDATATRIGGERED_H
#define WIFIUSAGELQMWINDOWANALYSISDATATRIGGERED_H

@class NSString, NSArray;


#import "WiFiUsageLQMWindowAnalysis.h"

@interface WiFiUsageLQMWindowAnalysisDataTriggered : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *dataTriggerReason; // ivar: _dataTriggerReason
@property (readonly, nonatomic) NSArray *triggerCriteriaList; // ivar: _triggerCriteriaList


-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 andSubReason:(id)arg1 onQueue:(id)arg2 ;
-(void)performAnalysis;


@end


#endif