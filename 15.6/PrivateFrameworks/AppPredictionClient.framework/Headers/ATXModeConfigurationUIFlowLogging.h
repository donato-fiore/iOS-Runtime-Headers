// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODECONFIGURATIONUIFLOWLOGGING_H
#define ATXMODECONFIGURATIONUIFLOWLOGGING_H


#import <Foundation/Foundation.h>

#import "ATXModeConfigurationUIFlowLoggingBiomeStream.h"

@interface ATXModeConfigurationUIFlowLogging : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
}




-(id)init;
-(id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)arg0 ;
-(void)logModeConfigurationChangesForModeUUID:(id)arg0 modeConfigurationUI:(int)arg1 modeConfigurationEntityType:(int)arg2 previousEntityIdentifiers:(id)arg3 suggestedEntityIdentifiers:(id)arg4 currentEntityIdentifiers:(id)arg5 ;


@end


#endif