// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECEXPERT_H
#define _DECEXPERT_H

@class NSXPCConnection, PETGoalConversionEventTracker, PETDistributionEventTracker, PETScalarEventTracker, NSString;
@protocol OS_dispatch_queue, _DECExpertDelegate;

#import <Foundation/Foundation.h>

#import "_DECBackupHelper.h"

@interface _DECExpert : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    _DECBackupHelper *_backupHelper;
    PETGoalConversionEventTracker *_predictionResultTracker;
    PETDistributionEventTracker *_predictionTimeTracker;
    PETScalarEventTracker *_saveModelTracker;
    PETScalarEventTracker *_restoreModelTracker;
}


@property (nonatomic) NSUInteger category; // ivar: _category
@property (weak, nonatomic) NSObject<_DECExpertDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(id)init;
-(id)initWithCategory:(NSUInteger)arg0 identifier:(id)arg1 ;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 criteria:(id)arg2 limit:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)prewarmPredictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)receiveFeedback:(id)arg0 consumer:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)restoreModelWithReply:(id)arg0 ;
-(void)saveModelWithByteLimit:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)setPrediction:(id)arg0 category:(NSUInteger)arg1 consumer:(NSUInteger)arg2 ;
-(void)trainWithReply:(id)arg0 ;


@end


#endif