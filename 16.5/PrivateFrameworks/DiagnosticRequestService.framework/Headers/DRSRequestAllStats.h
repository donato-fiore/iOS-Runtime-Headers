// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSREQUESTALLSTATS_H
#define DRSREQUESTALLSTATS_H

@class NSDictionary;


#import "DRSRequestStats.h"

@interface DRSRequestAllStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perBuildStats;


+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg0 ;
+(id)keyName;
+(id)statsForRequests:(id)arg0 ;
-(NSUInteger)generateCoreAnalyticsEvents:(BOOL)arg0 ;
-(id)init;
-(id)terminalRequestProtobufRepresentation;


@end


#endif