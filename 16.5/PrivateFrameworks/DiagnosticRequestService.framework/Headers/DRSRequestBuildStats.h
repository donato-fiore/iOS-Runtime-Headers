// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSREQUESTBUILDSTATS_H
#define DRSREQUESTBUILDSTATS_H

@class NSString, NSDictionary;


#import "DRSRequestStats.h"

@interface DRSRequestBuildStats : DRSRequestStats

@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSDictionary *perTeamIDStats;


+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg0 ;
+(id)keyName;


@end


#endif