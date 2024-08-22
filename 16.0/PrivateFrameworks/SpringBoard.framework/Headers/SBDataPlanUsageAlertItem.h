// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDATAPLANUSAGEALERTITEM_H
#define SBDATAPLANUSAGEALERTITEM_H

@class NSNumber;


#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem

@property (retain, nonatomic) NSNumber *remainingPortion; // ivar: _remainingPortion


-(id)initWithAccountURL:(id)arg0 usage:(id)arg1 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif