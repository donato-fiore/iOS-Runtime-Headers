// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODECONFIGURATIONUIFLOWMETRICLOGGER_H
#define ATXMODECONFIGURATIONUIFLOWMETRICLOGGER_H

@class ATXDNDModeConfigurationClient, ATXModeConfigurationUIFlowLoggingBiomeStream;

#import <Foundation/Foundation.h>


@interface ATXModeConfigurationUIFlowMetricLogger : NSObject {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
}




-(NSUInteger)numEntitiesAdded:(id)arg0 ;
-(NSUInteger)numEntitiesRemoved:(id)arg0 ;
-(NSUInteger)numSuggestedEntitiesAdded:(id)arg0 ;
-(NSUInteger)numSuggestedEntitiesRemoved:(id)arg0 ;
-(id)init;
-(id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)arg0 ;
-(id)modeConfigurationUIFlowBookmark;
-(void)logCompletion:(id)arg0 ;
-(void)logModeConfigurationUIFlowMetric;
-(void)logModeConfigurationUIFlowMetricWithXPCActivity:(id)arg0 ;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif