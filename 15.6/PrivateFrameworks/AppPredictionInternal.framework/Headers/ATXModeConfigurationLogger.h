// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODECONFIGURATIONLOGGER_H
#define ATXMODECONFIGURATIONLOGGER_H

@class ATXDNDModeConfigurationClient;

#import <Foundation/Foundation.h>


@interface ATXModeConfigurationLogger : NSObject

@property (readonly, nonatomic) ATXDNDModeConfigurationClient *client; // ivar: _client


-(id)init;
-(id)initWithDNDModeConfigurationClient:(id)arg0 ;
-(void)logMetricForConfiguration:(id)arg0 ;
-(void)logModeConfigurations;
-(void)logModeConfigurationsWithXPCActivity:(id)arg0 ;


@end


#endif