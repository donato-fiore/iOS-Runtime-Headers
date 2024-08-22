// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBEXPERTAPPSUGGESTION_H
#define _SBEXPERTAPPSUGGESTION_H

@class _DECAppItem, _DECResult, NSUUID;


#import "SBBestAppSuggestion.h"

@interface _SBExpertAppSuggestion : SBBestAppSuggestion

@property (readonly, nonatomic) _DECAppItem *appSuggestion; // ivar: _appSuggestion
@property (readonly, nonatomic) _DECResult *result; // ivar: _result
@property (readonly, nonatomic) NSUUID *resultUUID;


-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isCarPlayPrediction;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFirstWakePrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isPrediction;
-(NSUInteger)hash;
-(id)bundleIdentifier;
-(id)initWithAppSuggestion:(id)arg0 result:(id)arg1 ;
-(id)originatingDeviceName;


@end


#endif