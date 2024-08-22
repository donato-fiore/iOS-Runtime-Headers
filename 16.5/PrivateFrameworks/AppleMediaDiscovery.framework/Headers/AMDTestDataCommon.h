// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDTESTDATACOMMON_H
#define AMDTESTDATACOMMON_H


#import <Foundation/Foundation.h>


@interface AMDTestDataCommon : NSObject



+(id)getAggregationDescriptorDict;
+(id)getEventPayload:(id)arg0 ;
+(id)getInferencePayload;
+(id)getNonAggregationDescriptor;
+(id)getRefreshOnDeviceTasteProfilePayload;
+(id)getRefreshServerTasteProfilePayload;
+(id)getSampleEvent;
+(id)getSampleEventCrashes;
+(id)getSampleEventInstalls;
+(id)getSampleEventLaunches;
+(id)getSampleEventUninstall;
+(id)getSampleWorkflow;
+(id)getSaveConfigDownloadModelPayload;
+(id)gettabInfoDict;


@end


#endif