// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMODEL_H
#define HMDHOMEMODEL_H

@class NSNumber, NSData, NSDictionary, NSDate, NSString;


#import "HMDBackingStoreModelObject.h"
#import "HMDNaturalLightingContext.h"
#import "HMDHomeKitVersion.h"

@interface HMDHomeModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *analysisOptions;
@property (copy, nonatomic) NSNumber *chipFabricID;
@property (copy, nonatomic) NSNumber *chipFabricIndex;
@property (copy, nonatomic) NSData *chipIntermediateCertificate;
@property (copy, nonatomic) NSDictionary *chipKeyValueStore;
@property (copy, nonatomic) NSNumber *chipLastNodeID;
@property (copy, nonatomic) NSData *chipOperationalCertificate;
@property (copy, nonatomic) NSData *chipRootCertificate;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *defaultRoomUUID;
@property (copy, nonatomic) NSNumber *didOnboardAnalysis;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (retain, nonatomic) NSData *encodedNaturalLightingContext;
@property (retain, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (retain, nonatomic) NSData *homeLocationData;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (retain, nonatomic) NSNumber *networkProtectionMode;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (retain, nonatomic) NSString *ownerUUID;
@property (retain, nonatomic) NSString *ownerUserID;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) NSString *primaryResidentUUID;
@property (copy, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion;
@property (copy, nonatomic) NSNumber *soundCheckEnabled;


+(id)properties;
-(id)audioAnalysisClassifierOptions;
-(void)setAudioAnalysisClassifierOptions:(id)arg0 ;


@end


#endif