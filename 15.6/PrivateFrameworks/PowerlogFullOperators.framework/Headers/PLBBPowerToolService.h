// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBPOWERTOOLSERVICE_H
#define PLBBPOWERTOOLSERVICE_H

@class PLService, PLEntryNotificationOperatorComposition, PLTelephonyConnection, PLNSNotificationOperatorComposition, NSMutableArray, NSDate;



@interface PLBBPowerToolService : PLService

@property CGFloat armUtilityThresholdVal; // ivar: _armUtilityThresholdVal
@property (retain) PLEntryNotificationOperatorComposition *audioEventCallback; // ivar: _audioEventCallback
@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback; // ivar: _bbHwOtherCallback
@property (weak) PLTelephonyConnection *connection; // ivar: _connection
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // ivar: _dailyTaskNotification
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback; // ivar: _displayEventCallback
@property BOOL doesCurrPackageHasProblem; // ivar: _doesCurrPackageHasProblem
@property BOOL doesPrevPackageHasProblem; // ivar: _doesPrevPackageHasProblem
@property CGFloat elapsedDenumerator; // ivar: _elapsedDenumerator
@property (retain) NSMutableArray *endExclusionPeriods; // ivar: _endExclusionPeriods
@property unsigned char exclusionMask; // ivar: _exclusionMask
@property CGFloat gArmUtil; // ivar: _gArmUtil
@property int gPerepherialMax; // ivar: _gPerepherialMax
@property (retain) PLEntryNotificationOperatorComposition *hotspotEventCallback; // ivar: _hotspotEventCallback
@property BOOL isUIAlertEnabled; // ivar: _isUIAlertEnabled
@property (retain) PLEntryNotificationOperatorComposition *lteRRCCallback; // ivar: _lteRRCCallback
@property CGFloat magicDeltaThresholdVal; // ivar: _magicDeltaThresholdVal
@property (retain) PLEntryNotificationOperatorComposition *msgLiteCallback; // ivar: _msgLiteCallback
@property (retain) NSDate *notToRemoveDate; // ivar: _notToRemoveDate
@property CGFloat oosDurationVal; // ivar: _oosDurationVal
@property CGFloat rrcDisconnectedVal; // ivar: _rrcDisconnectedVal
@property BOOL sendAWD; // ivar: _sendAWD
@property (retain) NSMutableArray *startExclusionPeriods; // ivar: _startExclusionPeriods
@property (retain) NSDate *startSamplingDate; // ivar: _startSamplingDate
@property (retain) PLEntryNotificationOperatorComposition *telActivityCallback; // ivar: _telActivityCallback
@property CGFloat totalNormalARMUtility; // ivar: _totalNormalARMUtility
@property (retain) PLEntryNotificationOperatorComposition *wcdmaRRCCallback; // ivar: _wcdmaRRCCallback


+(id)entryAggregateDefinitions;
+(id)entryArmUtil;
+(id)entryCauseDefinition;
+(id)entryCauseHelperDefinition;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)containsExclusionsAfterCleanupWithDate:(id)arg0 ;
-(BOOL)doesCurrPeriodHaveProblem:(id)arg0 ;
-(BOOL)isPackageTimeValidWithEntry:(id)arg0 ;
-(BOOL)isPackageValidWithEntry:(id)arg0 ;
-(CGFloat)calculateMaxPerepherialPercentageWithEntry:(id)arg0 ;
-(CGFloat)percentageHistogramFromArray:(id)arg0 ;
-(id)analazeCauseResultsReturnCause:(struct CauseDurations *)arg0 ;
-(id)findCauseWithEntry:(id)arg0 ;
-(id)init;
-(void)analazeIntervalWithSnapshot:(struct CauseSnapshot *)arg0 withDuration:(struct CauseDurations *)arg1 withInterval:(CGFloat)arg2 withEntry:(id)arg3 ;
-(void)collectExtraDataForPackage:(id)arg0 ;
-(void)handleAudioCallback:(id)arg0 ;
-(void)handleDisplayCallback:(id)arg0 ;
-(void)handleExclusionWithState:(BOOL)arg0 withExclusion:(unsigned char)arg1 ;
-(void)handleHotspotCallback:(id)arg0 ;
-(void)handleMavBBHwOtherCallback:(id)arg0 ;
-(void)handleProblemWithEntry:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)lteRRCCallback:(id)arg0 ;
-(void)msgLiteCallback:(id)arg0 ;
-(void)resetAllCounters:(id)arg0 ;
-(void)resetStructuresWithSnapshot:(struct CauseSnapshot *)arg0 withDuration:(struct CauseDurations *)arg1 ;
-(void)setupInitExclusions;
-(void)submitAWD;
-(void)telActivityCallback:(id)arg0 ;
-(void)wcdmaRRCCallback:(id)arg0 ;
-(void)writeToHelperTable:(id)arg0 WithValue:(CGFloat)arg1 withDate:(id)arg2 ;


@end


#endif