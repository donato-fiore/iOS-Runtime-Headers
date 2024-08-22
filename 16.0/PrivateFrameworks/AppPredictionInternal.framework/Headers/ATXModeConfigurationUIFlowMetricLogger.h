// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODECONFIGURATIONUIFLOWMETRICLOGGER_H
#define ATXMODECONFIGURATIONUIFLOWMETRICLOGGER_H

@class ATXModeConfigurationUIFlowLoggingBiomeStream;

#import <Foundation/Foundation.h>

#import "ATXFocusModeSignalsMetricLogger.h"
#import "ATXFocusModeContactsMetricLogger.h"

@interface ATXModeConfigurationUIFlowMetricLogger : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
    ATXFocusModeSignalsMetricLogger *_focusModeSignalsLogger;
    ATXFocusModeContactsMetricLogger *_focusModeContactsLogger;
}




-(NSUInteger)numEntitiesAdded:(id)arg0 ;
-(NSUInteger)numEntitiesRemoved:(id)arg0 ;
-(NSUInteger)numSuggestedEntitiesAdded:(id)arg0 ;
-(NSUInteger)numSuggestedEntitiesRemoved:(id)arg0 ;
-(id)init;
-(id)initWithFocusModeSignalsLogger:(id)arg0 ;
-(id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)arg0 focusModeSignalsLogger:(id)arg1 ;
-(id)modeConfigurationUIFlowBookmark;
-(void)logCompletion:(id)arg0 ;
-(void)logModeConfigurationUIFlowMetric;
-(void)logModeConfigurationUIFlowMetricWithXPCActivity:(id)arg0 ;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif