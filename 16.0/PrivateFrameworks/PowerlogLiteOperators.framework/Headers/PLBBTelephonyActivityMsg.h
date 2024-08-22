// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBBTELEPHONYACTIVITYMSG_H
#define PLBBTELEPHONYACTIVITYMSG_H

@class NSString, NSNumber;


#import "PLBBMsgRoot.h"

@interface PLBBTelephonyActivityMsg : PLBBMsgRoot

@property (retain) NSString *activeBand; // ivar: _activeBand
@property (retain) NSString *airplaneMode; // ivar: _airplaneMode
@property (retain) NSString *callStatus; // ivar: _callStatus
@property (retain) NSString *campedRat; // ivar: _campedRat
@property (retain) NSString *currentRat; // ivar: _currentRat
@property (retain) NSString *dataStatus; // ivar: _dataStatus
@property (retain) NSString *preferredRat; // ivar: _preferredRat
@property (retain) NSNumber *signalBars; // ivar: _signalBars
@property (retain) NSNumber *signalStrength; // ivar: _signalStrength
@property (retain) NSString *simStatus; // ivar: _simStatus


+(id)entryEventPointDefinitionTelephonyActivity;
-(void)logPointIntervalTelephonyActivity;
-(void)logPointIntervalTelephonyActivityAirplaneModeChange;
-(void)refreshTelephonyActivity;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;


@end


#endif