// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCOUNTINGDEBUGSERVICE_H
#define PLACCOUNTINGDEBUGSERVICE_H

@class PLService, NSArray;



@interface PLAccountingDebugService : PLService

@property (retain, nonatomic) NSArray *testNames; // ivar: _testNames


+(void)load;
+(void)printError:(id)arg0 ;
-(BOOL)verifyAggregateQualificationEnergyWithQualificationID:(int)arg0 withRootNodeID:(int)arg1 withNodeName:(id)arg2 withQualificationEnergy:(CGFloat)arg3 withDate:(id)arg4 ;
-(BOOL)verifyAggregateRootNodeEnergyWithNodeName:(id)arg0 withRootNodeID:(int)arg1 withEnergy:(CGFloat)arg2 withDate:(id)arg3 ;
-(BOOL)verifyLastDistributionEventWithDistributionID:(int)arg0 withNodeName:(id)arg1 withWeight:(CGFloat)arg2 ;
-(BOOL)verifyLastPowerEventWithRootNodeID:(int)arg0 withPower:(CGFloat)arg1 ;
-(BOOL)verifyLastQualificationEventWithQualificationID:(int)arg0 withNodeName:(id)arg1 ;
-(BOOL)verifyTotalCorrectionEnergyWithNodeName:(id)arg0 withTotalCorrectionEnergy:(CGFloat)arg1 withRootNodeID:(int)arg2 ;
-(BOOL)verifyTotalEnergyWithNodeName:(id)arg0 withTotalEnergy:(CGFloat)arg1 withRootNodeID:(int)arg2 withEpsilon:(CGFloat)arg3 ;
-(id)init;
-(void)blockingClearQueues;
-(void)blockingLogGasGaugeWithTotalPower:(CGFloat)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(void)testAddRemoveDistributionEventForward;
-(void)testChunk;
-(void)testCorrection1;
-(void)testCorrection2;
-(void)testCorrection3;
-(void)testCorrection4;
-(void)testCorrectionInMemory;
-(void)testCurrentDistributionEventForward;
-(void)testDistribution1;
-(void)testDistribution2;
-(void)testDistribution3;
-(void)testDistribution4;
-(void)testDistribution5;
-(void)testPerformance;
-(void)testPowerEventIntervalOverlap;
-(void)testQualification1;
-(void)testQualification2;
-(void)testQualification3;
-(void)testReloadAfter1;
-(void)testReloadAfter2;
-(void)testReloadBefore1;
-(void)testReloadBefore2;
-(void)testShortDistributionEventDuration;
-(void)testShortQualificationEventDuration;


@end


#endif