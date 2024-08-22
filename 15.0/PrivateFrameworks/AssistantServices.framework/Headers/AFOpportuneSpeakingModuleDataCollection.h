// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFOPPORTUNESPEAKINGMODULEDATACOLLECTION_H
#define AFOPPORTUNESPEAKINGMODULEDATACOLLECTION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFOpportuneSpeakingModuleDataCollection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_speakableMap;
}




+(id)sharedCollector;
-(id)init;
-(void)_deleteSpeakablesOlderThan:(id)arg0 ;
-(void)logFeedbackOfType:(NSInteger)arg0 forSpeakableId:(id)arg1 withModelId:(id)arg2 ;
-(void)logInteractionEvents:(id)arg0 forSpeakableId:(id)arg1 ;
-(void)logRecommendedAction:(id)arg0 forSpeakableId:(id)arg1 withModelId:(id)arg2 ;
-(void)logSpeakable:(id)arg0 forContact:(id)arg1 withModelId:(id)arg2 withFeatures:(id)arg3 withScore:(float)arg4 ;


@end


#endif