// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSREQUESTTEAMIDSTATS_H
#define DRSREQUESTTEAMIDSTATS_H

@class NSDictionary, NSString;


#import "DRSRequestStats.h"

@interface DRSRequestTeamIDStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perIssueCategoryStats;
@property (readonly, nonatomic) NSString *teamID;


+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg0 ;
+(id)keyName;


@end


#endif