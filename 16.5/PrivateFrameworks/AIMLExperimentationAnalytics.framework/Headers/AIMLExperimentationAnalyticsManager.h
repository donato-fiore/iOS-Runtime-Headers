// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIMLEXPERIMENTATIONANALYTICSMANAGER_H
#define AIMLEXPERIMENTATIONANALYTICSMANAGER_H

@protocol AIMLExperimentationAnalytics;

#import <Foundation/Foundation.h>

#import "AIMLExperimentationAnalyticsManagerInternal.h"

@interface AIMLExperimentationAnalyticsManager : NSObject <AIMLExperimentationAnalytics>



@property (readonly, nonatomic) AIMLExperimentationAnalyticsManagerInternal *underlyingObject; // ivar: _underlyingObject


-(id)init;
-(void)cacheTrialExperimentsForCodePathID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cacheTrialExperimentsIdentifiersForCodePathID:(id)arg0 namespaces:(id)arg1 completionHandler:(id)arg2 ;
-(void)emitTriggerForCodePathID:(id)arg0 requestID:(id)arg1 completionHandler:(id)arg2 ;
-(void)emitTriggerFromCacheForCodePathID:(id)arg0 requestID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif