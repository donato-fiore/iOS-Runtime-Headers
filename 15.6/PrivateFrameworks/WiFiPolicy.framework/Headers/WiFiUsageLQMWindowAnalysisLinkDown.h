// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGELQMWINDOWANALYSISLINKDOWN_H
#define WIFIUSAGELQMWINDOWANALYSISLINKDOWN_H

@class NSString;


#import "WiFiUsageLQMWindowAnalysis.h"

@interface WiFiUsageLQMWindowAnalysisLinkDown : WiFiUsageLQMWindowAnalysis

@property (nonatomic) BOOL isInvoluntary; // ivar: _isInvoluntary
@property (retain, nonatomic) NSString *linkDownReason; // ivar: _linkDownReason
@property (nonatomic) NSInteger linkDownSubreason; // ivar: _linkDownSubreason
@property (nonatomic) NSUInteger linkUpDuration; // ivar: _linkUpDuration


-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 WithIsInvoluntary:(BOOL)arg1 AndLinkChangeReason:(NSInteger)arg2 AndLinkChangeSubreason:(NSInteger)arg3 AndDuration:(NSUInteger)arg4 andActiveCall:(BOOL)arg5 onQueue:(id)arg6 ;


@end


#endif