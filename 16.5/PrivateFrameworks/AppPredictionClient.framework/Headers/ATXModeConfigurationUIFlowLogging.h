// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODECONFIGURATIONUIFLOWLOGGING_H
#define ATXMODECONFIGURATIONUIFLOWLOGGING_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXModeConfigurationUIFlowLoggingBiomeStream.h"

@interface ATXModeConfigurationUIFlowLogging : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)arg0 ;
-(void)logModeConfigurationChangesForModeUUID:(id)arg0 modeConfigurationUI:(int)arg1 modeConfigurationEntityType:(int)arg2 modeConfigurationType:(NSInteger)arg3 previousEntityIdentifiers:(id)arg4 suggestedEntityIdentifiers:(id)arg5 candidateEntityIdentifiers:(id)arg6 currentEntityIdentifiers:(id)arg7 ;
-(void)logModeConfigurationChangesForModeUUID:(id)arg0 modeConfigurationUI:(int)arg1 modeConfigurationEntityType:(int)arg2 modeConfigurationType:(NSInteger)arg3 previousEntityIdentifiers:(id)arg4 suggestedEntityIdentifiers:(id)arg5 currentEntityIdentifiers:(id)arg6 ;
-(void)logModeConfigurationChangesForModeUUID:(id)arg0 modeConfigurationUI:(int)arg1 modeConfigurationEntityType:(int)arg2 previousEntityIdentifiers:(id)arg3 suggestedEntityIdentifiers:(id)arg4 currentEntityIdentifiers:(id)arg5 ;
-(void)logModeConfigurationChangesOnboardingDismissedForModeUUID:(id)arg0 ;


@end


#endif