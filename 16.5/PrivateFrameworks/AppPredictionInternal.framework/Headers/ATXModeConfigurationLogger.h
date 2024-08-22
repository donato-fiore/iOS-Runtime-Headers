// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODECONFIGURATIONLOGGER_H
#define ATXMODECONFIGURATIONLOGGER_H

@class ATXModeEntityTrialClientWrapper, NSArray, NSMutableDictionary, ATXDNDModeConfigurationClient;

#import <Foundation/Foundation.h>


@interface ATXModeConfigurationLogger : NSObject {
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}


@property (retain, nonatomic) NSArray *cachedConfigurations; // ivar: _cachedConfigurations
@property (retain, nonatomic) NSMutableDictionary *cachedSuggestedItems; // ivar: _cachedSuggestedItems
@property (readonly, nonatomic) ATXDNDModeConfigurationClient *client; // ivar: _client


-(id)init;
-(id)initWithDNDModeConfigurationClient:(id)arg0 ;
-(void)logMetricForConfiguration:(id)arg0 ;
-(void)logModeConfigurations;
-(void)logModeConfigurationsWithXPCActivity:(id)arg0 ;
-(void)retrieveEvents;


@end


#endif