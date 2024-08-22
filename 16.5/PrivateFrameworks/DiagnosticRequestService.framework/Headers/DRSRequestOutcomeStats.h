// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSREQUESTOUTCOMESTATS_H
#define DRSREQUESTOUTCOMESTATS_H

@class NSDictionary, NSString;


#import "DRSRequestStats.h"

@interface DRSRequestOutcomeStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perStateStats;
@property (readonly, nonatomic) NSString *requestOutcome;


+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg0 ;
+(id)keyName;


@end


#endif