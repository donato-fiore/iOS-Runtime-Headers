// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKHAPACCESSORY_H
#define MKFCKHAPACCESSORY_H

@class NSSet, NSNumber, NSArray, NSData, NSDictionary, NSString;


#import "MKFCKAccessory.h"
#import "MKFCKHome.h"

@interface MKFCKHAPAccessory : MKFCKAccessory

@property (retain, nonatomic) MKFCKHome *activeNetworkRouterInHome;
@property (nonatomic) BOOL airPlayEnabled;
@property (nonatomic) BOOL announceEnabled;
@property (nonatomic) NSInteger cameraAccessModeAtHome;
@property (nonatomic) NSInteger cameraAccessModeNotAtHome;
@property (retain, nonatomic) NSSet *cameraActivityZones;
@property (nonatomic) BOOL cameraActivityZonesIncludedForSignificantEventDetection;
@property (nonatomic) NSInteger cameraRecordingEventTriggers;
@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (nonatomic) BOOL doorbellChimeEnabled;
@property (nonatomic) BOOL hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (nonatomic) BOOL hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSArray *initialServiceTypes;
@property (nonatomic) BOOL interactionHoldDurationEnabled;
@property (nonatomic) NSInteger interactionHoldDurationSeconds;
@property (nonatomic) BOOL interactionIgnoreRepeatEnabled;
@property (nonatomic) NSInteger interactionIgnoreRepeatSeconds;
@property (nonatomic) BOOL interactionTouchAccommodationsEnabled;
@property (nonatomic) BOOL lightWhenUsingSiriEnabled;
@property (nonatomic) NSInteger matterNodeID;
@property (nonatomic) NSInteger matterProductID;
@property (nonatomic) NSInteger matterVendorID;
@property (nonatomic) NSInteger needsOnboarding;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSDictionary *serviceApplicationData;
@property (retain, nonatomic) NSDictionary *serviceAssociatedServiceTypes;
@property (retain, nonatomic) NSDictionary *serviceConfiguredNames;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (nonatomic) BOOL shareSiriAnalytics;
@property (nonatomic) BOOL shareSpeakerAnalytics;
@property (nonatomic) BOOL siriEnabled;
@property (nonatomic) BOOL siriEndpointEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (nonatomic) BOOL soundAlertEnabled;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) NSInteger visionDoubleTapSettingsTimeoutInterval;
@property (nonatomic) NSInteger visionSpeakingRate;
@property (nonatomic) BOOL visionVoiceOverAudioDuckingEnabled;
@property (nonatomic) BOOL visionVoiceOverEnabled;


+(id)fetchRequest;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;


@end


#endif