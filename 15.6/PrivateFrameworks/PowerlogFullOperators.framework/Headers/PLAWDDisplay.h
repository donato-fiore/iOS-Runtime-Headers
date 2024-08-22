// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAWDDISPLAY_H
#define PLAWDDISPLAY_H

@class PLEntryNotificationOperatorComposition;


#import "PLAWDAuxMetrics.h"

@interface PLAWDDisplay : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *alsEnabledEventCallback; // ivar: _alsEnabledEventCallback
@property (retain) PLEntryNotificationOperatorComposition *alsUserPreferencesEventCallback; // ivar: _alsUserPreferencesEventCallback
@property (retain) PLEntryNotificationOperatorComposition *backlightEventCallback; // ivar: _backlightEventCallback
@property (retain) PLEntryNotificationOperatorComposition *backlightRailCallback; // ivar: _backlightRailCallback
@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback; // ivar: _batteryEventCallback
@property CGFloat bklPowerRailTimeStamp; // ivar: _bklPowerRailTimeStamp
@property CGFloat bklTimeStamp; // ivar: _bklTimeStamp
@property NSInteger dispSubmitCnt; // ivar: _dispSubmitCnt
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback; // ivar: _displayEventCallback
@property CGFloat displayOnTimeStamp; // ivar: _displayOnTimeStamp
@property CGFloat mieOnTimeStamp; // ivar: _mieOnTimeStamp
@property BOOL prevAlsOn; // ivar: _prevAlsOn
@property NSInteger prevBklBucketIdx; // ivar: _prevBklBucketIdx
@property CGFloat prevBklChgTimeStamp; // ivar: _prevBklChgTimeStamp
@property CGFloat prevBklPower; // ivar: _prevBklPower
@property BOOL prevDeviceCharging; // ivar: _prevDeviceCharging
@property BOOL prevDisplayOn; // ivar: _prevDisplayOn
@property BOOL prevMieOn; // ivar: _prevMieOn
@property NSInteger startTouchEntryId; // ivar: _startTouchEntryId
@property (retain) PLEntryNotificationOperatorComposition *touchEventCallback; // ivar: _touchEventCallback
@property NSInteger touchSubmitCnt; // ivar: _touchSubmitCnt


+(id)entryAggregateDefinitionAwdDisplayAndAls;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(NSInteger)getBklbucketIdx:(NSInteger)arg0 withLux:(NSInteger)arg1 ;
-(NSInteger)getLuxBucket:(NSInteger)arg0 ;
-(NSInteger)getUAmpsBucket:(NSInteger)arg0 ;
-(void)addEntryToDisplayAlsTable:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)finalizeDisplayAlsTable;
-(void)handleAlsEnabledCallback:(id)arg0 ;
-(void)handleAlsUserPreferencesCallback:(id)arg0 ;
-(void)handleBacklightCallback:(id)arg0 ;
-(void)handleBacklightRailCallback:(id)arg0 ;
-(void)handleBatteryCallback:(id)arg0 ;
-(void)handleDisplayCallback:(id)arg0 ;
-(void)handleTouchCallback:(id)arg0 ;
-(void)initDisplayBacklightAlsStats;
-(void)initTouchStats;
-(void)reInitDisplayBacklightAlsStats;
-(void)registerForDisplayAgentNotifications;
-(void)registerForTouchNotifications;
-(void)resetDisplayAlsTable;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopMetricCollection:(id)arg0 ;
-(void)updateDisplayMetrics:(BOOL)arg0 withState:(BOOL)arg1 ;
-(void)updateMieMetrics:(BOOL)arg0 ;


@end


#endif