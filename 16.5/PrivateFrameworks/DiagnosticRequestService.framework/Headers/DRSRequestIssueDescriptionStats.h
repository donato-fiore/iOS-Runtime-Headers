// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSREQUESTISSUEDESCRIPTIONSTATS_H
#define DRSREQUESTISSUEDESCRIPTIONSTATS_H

@class NSString, NSDictionary;


#import "DRSRequestStats.h"

@interface DRSRequestIssueDescriptionStats : DRSRequestStats

@property (readonly, nonatomic) NSString *issueDescription;
@property (readonly, nonatomic) NSDictionary *perOutcomeStats;


+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg0 ;
+(id)keyName;


@end


#endif