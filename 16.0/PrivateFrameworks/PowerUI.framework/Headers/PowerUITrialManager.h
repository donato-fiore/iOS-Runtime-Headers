// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUITRIALMANAGER_H
#define POWERUITRIALMANAGER_H

@class NSString, TRIClient, TRITrackingId, NSMutableArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUITrialManager : NSObject

@property (retain) NSString *experimentID; // ivar: _experimentID
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain) NSString *treatmentID; // ivar: _treatmentID
@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (retain, nonatomic) NSString *trialNamespaceName; // ivar: _trialNamespaceName
@property (retain) TRITrackingId *trialTrackingID; // ivar: _trialTrackingID
@property (retain, nonatomic) NSMutableArray *updateHandlers; // ivar: _updateHandlers


-(CGFloat)doubleFactorForName:(id)arg0 ;
-(CGFloat)loadTrialAdjustedHours;
-(CGFloat)loadTrialMinInputChargeDuration;
-(CGFloat)loadTrialThreshold;
-(NSInteger)longFactorForName:(id)arg0 ;
-(id)factorForName:(id)arg0 ;
-(id)initWithDefaultsDomain:(id)arg0 ;
-(id)loadModelFromPath:(id)arg0 deleteExistingFiles:(BOOL)arg1 ;
-(id)loadTrialDurationModelByDeletingExistingModel:(BOOL)arg0 ;
-(id)loadTrialEngageModelByDeletingExistingModel:(BOOL)arg0 ;
-(id)trialFactor:(id)arg0 ;
-(void)addUpdateHandler:(id)arg0 ;
-(void)loadTrialUpdates;


@end


#endif