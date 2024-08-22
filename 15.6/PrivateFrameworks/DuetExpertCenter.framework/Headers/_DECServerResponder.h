// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECSERVERRESPONDER_H
#define _DECSERVERRESPONDER_H

@class NSMutableArray, _DECPredictionMap;
@protocol _DECServerResponder, OS_dispatch_queue, _DECRankBuilder;

#import <Foundation/Foundation.h>

#import "_DECFeedbackBuilder.h"
#import "_DECBackupHelper.h"
#import "_DECUpdatePredictionsNotification.h"

@interface _DECServerResponder : NSObject <_DECServerResponder>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_servers;
    _opaque_pthread_rwlock_t _serversRWLock;
    _DECFeedbackBuilder *_feedbackBuilder;
    _DECBackupHelper *_backupHelper;
    _DECPredictionMap *_predictionsAwaitingFeedback;
    _DECUpdatePredictionsNotification *_updateNotification;
}


@property (retain, nonatomic) NSObject<_DECRankBuilder> *rankBuilder; // ivar: _rankBuilder


+(id)sharedInstance;
-(BOOL)is2GBOrLargerDevice;
-(id)_consumers;
-(id)_experts;
-(id)_validConsumers;
-(id)_validExperts;
-(id)init;
-(void)_setupFeedbackBuilder;
-(void)addServer:(id)arg0 ;
-(void)dealloc;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 criteria:(id)arg2 limit:(NSUInteger)arg3 backgroundQuery:(BOOL)arg4 providesFeedback:(BOOL)arg5 reply:(id)arg6 ;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 criteria:(id)arg2 limit:(NSUInteger)arg3 providesFeedback:(BOOL)arg4 reply:(id)arg5 ;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 limit:(NSUInteger)arg2 providesFeedback:(BOOL)arg3 reply:(id)arg4 ;
-(void)prewarmPredictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)registerClient:(NSInteger)arg0 category:(NSUInteger)arg1 identifier:(id)arg2 reply:(id)arg3 ;
-(void)removeServer:(id)arg0 ;
-(void)restoreModels;
-(void)saveModels;
-(void)setPrediction:(id)arg0 category:(NSUInteger)arg1 consumer:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)trainExperts;
-(void)userAbandoned:(id)arg0 result:(id)arg1 metadata:(id)arg2 reply:(id)arg3 ;
-(void)userEngaged:(id)arg0 result:(id)arg1 metadata:(id)arg2 reply:(id)arg3 ;


@end


#endif