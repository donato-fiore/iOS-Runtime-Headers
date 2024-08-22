// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMODEL_H
#define HMDHOMEMODEL_H

@class NSNumber, NSData, NSDictionary, NSDate, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"
#import "HMDNaturalLightingContext.h"
#import "HMDHomeNFCReaderKey.h"
#import "HMDHomeKitVersion.h"

@interface HMDHomeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSNumber *analysisOptions;
@property (copy, nonatomic) NSNumber *chipFabricID;
@property (copy, nonatomic) NSNumber *chipFabricIndex;
@property (copy, nonatomic) NSData *chipIntermediateCertificate;
@property (copy, nonatomic) NSDictionary *chipKeyValueStore;
@property (copy, nonatomic) NSNumber *chipLastNodeID;
@property (copy, nonatomic) NSData *chipOperationalCertificate;
@property (copy, nonatomic) NSData *chipRootCertificate;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultRoomUUID;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *didOnboardAnalysis;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (retain, nonatomic) NSData *encodedNaturalLightingContext;
@property (retain, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *hh2EncodedNfcReaderKey;
@property (retain, nonatomic) NSData *homeLocationData;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (retain, nonatomic) NSNumber *networkProtectionMode;
@property (copy, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (copy, nonatomic) NSNumber *owned;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (retain, nonatomic) NSString *ownerUUID;
@property (retain, nonatomic) NSString *ownerUserID;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) NSString *primaryResidentUUID;
@property (copy, nonatomic) NSNumber *residentSyncClientDidSync;
@property (copy, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion;
@property (copy, nonatomic) NSNumber *soundCheckEnabled;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_getHomeFromUUID:(id)arg0 ;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)audioAnalysisClassifierOptions;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(void)setAudioAnalysisClassifierOptions:(id)arg0 ;


@end


#endif