// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBESTAPPSUGGESTION_H
#define SBBESTAPPSUGGESTION_H

@class NSString, NSDate, NSURL, NSUUID;
@protocol SBIconContinuityInfo;

#import <Foundation/Foundation.h>


@interface SBBestAppSuggestion : NSObject <SBIconContinuityInfo>



@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastUpdateTime;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSString *originatingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingDeviceName;
@property (readonly, copy, nonatomic) NSString *originatingDeviceType;
@property (readonly, copy, nonatomic) NSString *suggestedLocationName;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;


-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isCallContinuitySuggestion;
-(BOOL)isCarPlayPrediction;
-(BOOL)isEligibleForLockScreen;
-(BOOL)isFirstWakePrediction;
-(BOOL)isHandoff;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isLocationPredictionFromSource:(NSUInteger)arg0 ;
-(BOOL)isLocationPredictionOfType:(NSUInteger)arg0 ;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(BOOL)isPrediction;
-(BOOL)isSiriSuggestion;
-(id)description;
-(id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg0 ;


@end


#endif