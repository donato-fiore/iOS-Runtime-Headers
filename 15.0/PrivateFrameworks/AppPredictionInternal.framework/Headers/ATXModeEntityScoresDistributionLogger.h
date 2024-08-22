// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEENTITYSCORESDISTRIBUTIONLOGGER_H
#define ATXMODEENTITYSCORESDISTRIBUTIONLOGGER_H

@class ATXDNDModeConfigurationClient;

#import <Foundation/Foundation.h>


@interface ATXModeEntityScoresDistributionLogger : NSObject {
    ATXDNDModeConfigurationClient *_modeConfigClient;
}




-(id)dndModeUUID:(NSUInteger)arg0 ;
-(id)init;
-(void)logModeEntityScoresDistribution;
-(void)logModeEntityScoresDistributionForMode:(id)arg0 entityType:(id)arg1 entities:(id)arg2 ;
-(void)logModeEntityScoresDistributionWithXPCActivity:(id)arg0 ;


@end


#endif