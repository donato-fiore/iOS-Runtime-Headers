// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSREQUESTISSUECATEGORYSTATS_H
#define DRSREQUESTISSUECATEGORYSTATS_H

@class NSString, NSDictionary;


#import "DRSRequestStats.h"

@interface DRSRequestIssueCategoryStats : DRSRequestStats

@property (readonly, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) NSDictionary *perIssueDescriptionStats;


+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg0 ;
+(id)keyName;


@end


#endif