// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDJSCONFIGPROCESSOR_H
#define AMDJSCONFIGPROCESSOR_H


#import <Foundation/Foundation.h>


@interface AMDJSConfigProcessor : NSObject



+(id)getBinariesToFetch:(id)arg0 withCurrentColdstartInfo:(id)arg1 andAMDColdstartBinariesToDelete:(id)arg2 andSummaryContainer:(id)arg3 ;
+(id)getCurrentModelInfoByModelId;
+(id)getModelsToFetch:(id)arg0 withCurrentModelInfo:(id)arg1 andAMDModlsToDelete:(id)arg2 andSummaryContainer:(id)arg3 ;
+(id)getUrlsWithVersion:(id)arg0 ;
+(id)processConfig:(id)arg0 withCallUUID:(id)arg1 error:(*id)arg2 ;
+(id)refreshDescriptors:(id)arg0 forDomain:(id)arg1 ;
+(id)removeOldColdstartBinaries:(id)arg0 ;
+(id)removeOldModels:(id)arg0 ;
+(id)saveInAppSegmentsWorkflow:(id)arg0 inDomain:(id)arg1 withCallUUID:(id)arg2 andSummaryContainer:(id)arg3 ;
+(id)saveInFlightWorkflows:(id)arg0 forModels:(id)arg1 inDomain:(id)arg2 withCallUUID:(id)arg3 error:(*id)arg4 ;
+(id)validateConfig:(id)arg0 forDomain:(id)arg1 ;


@end


#endif