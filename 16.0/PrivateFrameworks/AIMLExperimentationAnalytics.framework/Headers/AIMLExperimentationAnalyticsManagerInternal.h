// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIMLEXPERIMENTATIONANALYTICSMANAGERINTERNAL_H
#define AIMLEXPERIMENTATIONANALYTICSMANAGERINTERNAL_H


#import <Foundation/Foundation.h>


@interface AIMLExperimentationAnalyticsManagerInternal : NSObject {
    ? instrumentation;
    ? experimentation;
    ? experimentsForCodePathID;
    ? lock;
}




-(?)cacheTrialExperimentsForcompletionHandler;
-(?)emitTriggerFor:(?)arg0 requestIDcompletionHandler;
-(?)emitTriggerFromCacheFor:(?)arg0 requestIDcompletionHandler;
-(id)init;


@end


#endif