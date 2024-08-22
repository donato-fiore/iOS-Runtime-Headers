// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUIRESPONSETYPEBATTERYBREAKDOWNAGGREGATION_H
#define PLBATTERYUIRESPONSETYPEBATTERYBREAKDOWNAGGREGATION_H

@class NSMutableDictionary;


#import "PLBatteryUIResponseTypeBatteryBreakdown.h"

@interface PLBatteryUIResponseTypeBatteryBreakdownAggregation : PLBatteryUIResponseTypeBatteryBreakdown

@property (retain) NSMutableDictionary *backgroundAudioBreakdown; // ivar: _backgroundAudioBreakdown
@property (retain) NSMutableDictionary *backgroundAudioPluggedInBreakdown; // ivar: _backgroundAudioPluggedInBreakdown
@property (retain) NSMutableDictionary *backgroundLocationAudioBreakdown; // ivar: _backgroundLocationAudioBreakdown
@property (retain) NSMutableDictionary *backgroundLocationAudioPluggedInBreakdown; // ivar: _backgroundLocationAudioPluggedInBreakdown
@property (retain) NSMutableDictionary *backgroundLocationBreakdown; // ivar: _backgroundLocationBreakdown
@property (retain) NSMutableDictionary *backgroundLocationPluggedInBreakdown; // ivar: _backgroundLocationPluggedInBreakdown


-(BOOL)filterFgBg:(id)arg0 filterArray:(id)arg1 ;
-(BOOL)isForegroundOnlyBucket:(short)arg0 ;
-(BOOL)shouldShowBreakdown:(id)arg0 ;
-(struct _PLTimeIntervalRange )generateRange:(struct _PLTimeIntervalRange )arg0 withDataRange:(struct _PLTimeIntervalRange )arg1 ;
-(void)addFgEnergyForMetrics:(id)arg0 qualificationID:(id)arg1 rootNodeQualificationEnergy:(id)arg2 energyEntry:(id)arg3 ;
-(void)addRNEForMetrics:(id)arg0 rootNodeEnergy:(id)arg1 energyEntry:(id)arg2 ;
-(void)adjustRuntimes:(id)arg0 ;
-(void)bgLocationAudioTimeApps:(id)arg0 ;
-(void)bgLocationAudioTimeRuntimes:(id)arg0 bundleID:(id)arg1 ;
-(void)filterEnergyEntries:(id)arg0 ;
-(void)filterEnergyEntriesWithRuntimes:(id)arg0 ;
-(void)initBackgroundLocationAudioTime;
-(void)populateBackgroundLocationAudioTime:(id)arg0 bundleID:(id)arg1 ;
-(void)populateEnergyBucketKeysWithEntries:(id)arg0 ;


@end


#endif