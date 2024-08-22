// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGENGINE_H
#define PLACCOUNTINGENGINE_H

@class PLEntryNotificationOperatorComposition, PLActivity, NSString;
@protocol PLAccountingDistributionManagerDelegate, PLAccountingCorrectionManagerDelegate, PLAccountingQualificationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLAccountingCorrectionManager.h"
#import "PLAccountingDistributionManager.h"
#import "PLAccountingQualificationManager.h"

@interface PLAccountingEngine : NSObject <PLAccountingDistributionManagerDelegate, PLAccountingCorrectionManagerDelegate, PLAccountingQualificationManagerDelegate>



@property (retain) PLEntryNotificationOperatorComposition *batteryListener; // ivar: _batteryListener
@property (retain) PLActivity *chunkActivity; // ivar: _chunkActivity
@property (retain, nonatomic) PLAccountingCorrectionManager *correctionManager; // ivar: _correctionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PLAccountingDistributionManager *distributionManager; // ivar: _distributionManager
@property (readonly) NSUInteger hash;
@property BOOL pluggedIn; // ivar: _pluggedIn
@property (retain, nonatomic) PLAccountingQualificationManager *qualificationManager; // ivar: _qualificationManager
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)accountingDebugEnabled;
+(CGFloat)maxPowerEventChunkInterval;
+(CGFloat)minDistributionEnergy;
+(CGFloat)minEnergy;
+(id)allBBRootNodeIDs;
+(id)allDistributionIDs;
+(id)allQualificationIDs;
+(id)allSoCRootNodeIDs;
+(id)debugInstance;
+(id)deviceBBRootNodeIDs;
+(id)deviceRootNodeIDs;
+(id)deviceSoCRootNodeIDs;
+(id)distributionIDForDistributionName:(id)arg0 ;
+(id)gasGaugeEntryKey;
+(id)normalizeWeights:(id)arg0 ;
+(id)qualificationIDForQualificationName:(id)arg0 ;
+(id)sharedInstance;
+(void)clearWithEntryKey:(id)arg0 ;
-(id)currentDistributionEventForwardWithDistributionID:(int)arg0 ;
-(id)getLastQualifiedEnergyEvent;
-(id)init;
-(void)addDistributionEventInterval:(id)arg0 ;
-(void)addDistributionEventIntervalWithLastDistributionEventBackward:(id)arg0 withDistributionEventBackward:(id)arg1 ;
-(void)addDistributionEventIntervalWithLastDistributionEventForward:(id)arg0 withDistributionEventForward:(id)arg1 ;
-(void)addDistributionEventPoint:(id)arg0 ;
-(void)addEnergyMeasurementWithRootNodeID:(int)arg0 withEnergy:(CGFloat)arg1 withRange:(id)arg2 ;
-(void)addPowerMeasurementEventIntervalWithPower:(CGFloat)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(void)addQualificationEventInterval:(id)arg0 ;
-(void)addQualificationEventIntervalWithLastQualificationEventBackward:(id)arg0 withQualificationEventBackward:(id)arg1 ;
-(void)addQualificationEventIntervalWithLastQualificationEventForward:(id)arg0 withQualificationEventForward:(id)arg1 ;
-(void)addQualificationEventPoint:(id)arg0 ;
-(void)chunkWithLastChunkDate:(id)arg0 withNow:(id)arg1 ;
-(void)createAggregateRootNodeEnergyEntryWithEnergyEstimate:(id)arg0 ;
-(void)createDistributionEventBackwardWithDistributionID:(int)arg0 withChildNodeNameToWeight:(id)arg1 withEndDate:(id)arg2 ;
-(void)createDistributionEventForwardWithDistributionID:(int)arg0 withAddingChildNodeName:(id)arg1 withStartDate:(id)arg2 ;
-(void)createDistributionEventForwardWithDistributionID:(int)arg0 withChildNodeNameToWeight:(id)arg1 withStartDate:(id)arg2 ;
-(void)createDistributionEventForwardWithDistributionID:(int)arg0 withRemovingChildNodeName:(id)arg1 withStartDate:(id)arg2 ;
-(void)createDistributionEventIntervalWithDistributionID:(int)arg0 withChildNodeNameToWeight:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(void)createDistributionEventPointWithDistributionID:(int)arg0 withChildNodeNameToWeight:(id)arg1 withStartDate:(id)arg2 ;
-(void)createEventWithEvent:(id)arg0 withActionBlock:(id)arg1 ;
-(void)createPowerEventBackwardWithRootNodeID:(int)arg0 withPower:(CGFloat)arg1 withEndDate:(id)arg2 ;
-(void)createPowerEventForwardWithRootNodeID:(int)arg0 withPower:(CGFloat)arg1 withStartDate:(id)arg2 ;
-(void)createPowerEventIntervalWithRootNodeID:(int)arg0 withPower:(CGFloat)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(void)createQualificationEventBackwardWithQualificationID:(int)arg0 withChildNodeNames:(id)arg1 withEndDate:(id)arg2 ;
-(void)createQualificationEventForwardWithQualificationID:(int)arg0 withAddingChildNodeName:(id)arg1 withStartDate:(id)arg2 ;
-(void)createQualificationEventForwardWithQualificationID:(int)arg0 withChildNodeNames:(id)arg1 withStartDate:(id)arg2 ;
-(void)createQualificationEventForwardWithQualificationID:(int)arg0 withRemovingChildNodeName:(id)arg1 withStartDate:(id)arg2 ;
-(void)createQualificationEventIntervalWithQualificationID:(int)arg0 withChildNodeNames:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(void)createQualificationEventPointWithQualificationID:(int)arg0 withChildNodeNames:(id)arg1 withStartDate:(id)arg2 ;
-(void)didCorrectEnergyEstimate:(id)arg0 ;
-(void)didCreateChildEnergyEstimate:(id)arg0 withParentEnergyEstimate:(id)arg1 ;
-(void)didDistributeEnergyEstimate:(id)arg0 ;
-(void)didQualifyEnergyEvent:(id)arg0 withRootNodeID:(id)arg1 withQualificationID:(id)arg2 ;
-(void)reload;
-(void)reloadLastDistributionEventsWithLastDeviceBootDate:(id)arg0 ;
-(void)reloadLastPowerEventsWithLastDeviceBootDate:(id)arg0 ;
-(void)reloadLastQualificationEventsWithLastDeviceBootDate:(id)arg0 ;
-(void)reset;


@end


#endif