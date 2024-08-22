// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSAPPDATAUSAGEPOLICYSWITCHSPECIFIER_H
#define PSAPPDATAUSAGEPOLICYSWITCHSPECIFIER_H



#import "PSAppCellularUsageSpecifier.h"

@interface PSAppDataUsagePolicySwitchSpecifier : PSAppCellularUsageSpecifier



-(id)cellularUsagePolicy;
-(id)initWithBundleID:(id)arg0 displayName:(id)arg1 statisticsCache:(id)arg2 ;
-(void)setCellularUsagePolicy:(id)arg0 ;
-(void)setShouldShowUsage:(BOOL)arg0 ;


@end


#endif