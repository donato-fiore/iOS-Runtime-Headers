// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REREMOTETRAININGCONTEXT_H
#define REREMOTETRAININGCONTEXT_H

@class NSMutableArray;


#import "RETrainingContext.h"
#import "RERemoteTrainingServer.h"

@interface RERemoteTrainingContext : RETrainingContext {
    NSMutableArray *_trainingElements;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_trainingInteractions;
    RERemoteTrainingServer *_trainingServer;
}




-(BOOL)isCurrent;
-(id)initWithProcessName:(id)arg0 ;
-(void)_didPerformRemoteTraining;
-(void)_didSetAttributeForRemoteTraining;
-(void)_queue_enqueueRemoteTrainingForElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;
-(void)_queue_performRemoteTraining;
-(void)_queue_setRemoteAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)_willPerformRemoteTraining;
-(void)_willSetAttributeForRemoteTraining;
-(void)becomeCurrent;
-(void)setAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)trainWithElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;
-(void)trainWithPredictionElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;


@end


#endif