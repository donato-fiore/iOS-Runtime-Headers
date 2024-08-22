// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFDRSEAL_H
#define CRFDRSEAL_H

@class NSString, NSDictionary, NSURL, NSSet, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSData;
@protocol CRFDR, setupModuleChallengeCallBack;

#import <Foundation/Foundation.h>

#import "CRFDRBaseDeviceHandler.h"

@interface CRFDRSeal : NSObject <CRFDR>

 {
    NSString *currentSerialNumber;
    NSString *currentMLBSerialNumber;
    NSDictionary *claimDict;
    NSDictionary *updateClassDict;
    NSString *KBBSerialNumber;
    NSString *KGBSerialNumber;
    NSString *FDRCAURL;
    NSString *trustObjectURL;
    NSString *FDRDSURL;
    NSString *FDRSealingURL;
    BOOL doSeal;
    BOOL enableStagedSeal;
    BOOL enableProxy;
    NSURL *dataDirectoryURL;
    NSDictionary *metadataDict;
    NSSet *partSPC;
    NSString *failedSPC;
    NSDictionary *updateProperties;
    NSArray *removedProperties;
    NSDictionary *manifestDataClassesAndInstances;
    NSSet *overridePropertySet;
    NSMutableArray *currentClasses;
    NSMutableArray *currentInstances;
    NSDictionary *currentProperties;
    NSMutableArray *makeClasses;
    NSMutableArray *makeInstances;
    NSDictionary *makeProperties;
    NSMutableDictionary *postSealingManifest;
    NSMutableDictionary *preSealingManifest;
    NSString *FDRPersistentDataPath;
    NSString *sealedDataInstance;
    NSMutableArray *mergedDataClasses;
    NSMutableArray *mergedDataInstances;
    NSMutableDictionary *networkUsage;
    NSMutableDictionary *repairStats;
    int sealCount;
    NSString *SOCKSHost;
    NSNumber *SOCKSPort;
    NSNumber *displayMaxDuration;
    NSArray *patchDataClasses;
    NSArray *patchDataInstances;
    NSArray *patchValues;
    NSArray *expectedPatchDataClasses;
    NSArray *expectedPatchDataInstances;
    NSArray *expectedPatchValues;
    NSArray *minimalSealingInstances;
    NSArray *minimalSealedClasses;
    NSArray *minimalSealedInstances;
}


@property (retain, nonatomic) NSData *apTicketData; // ivar: apTicketData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<setupModuleChallengeCallBack> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CRFDRBaseDeviceHandler *handler; // ivar: handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)currentProcessHasEntitlement:(id)arg0 ;
-(?)CRFDRLocalPopulate:(?)arg0 fdrRemote:(?)arg1 sealedDatafdrError;
-(BOOL)_commitData:(id)arg0 fdrlocal:(struct __AMFDR *)arg1 fdrError:(*id)arg2 ;
-(BOOL)_urlsOverrideIsAllowed;
-(BOOL)generateFinalData;
-(NSInteger)CRFDRDataRepairRecover:(struct __AMFDR *)arg0 fdrRemote:(struct __AMFDR *)arg1 fdrError:(*id)arg2 ;
-(NSInteger)CRFDRVerifyLocal:(struct __AMFDR *)arg0 fdrRemote:(struct __AMFDR *)arg1 sealedData:(struct __AMFDRSealedData **)arg2 mergedDataClasses:(id)arg3 mergedDataInstances:(id)arg4 currentManifestProperties:(id)arg5 fdrError:(*id)arg6 syncEAN:(BOOL)arg7 ;
-(NSInteger)CRFDRVerifyProperties:(struct __AMFDR *)arg0 currentManifestProperties:(id)arg1 fdrError:(*id)arg2 ;
-(NSInteger)_commitSealedData:(struct __AMFDR *)arg0 fdrRemote:(struct __AMFDR *)arg1 sealedData:(struct __AMFDRSealedData *)arg2 returnError:(*id)arg3 ;
-(NSInteger)_fetchRemoteTrustObject:(struct __AMFDR *)arg0 apTrustObjectDigest:(id)arg1 remoteTrustObject:(*id)arg2 fdrError:(*id)arg3 ;
-(NSInteger)patchWithOptions:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 dataClasses:(id)arg2 dataInstances:(id)arg3 values:(id)arg4 error:(*id)arg5 local:(BOOL)arg6 ;
-(NSInteger)performHTTPChallengeClaim:(struct __AMFDR *)arg0 fdrLocal:(struct __AMFDR *)arg1 fdrError:(*id)arg2 claimClassDict:(id)arg3 registerOnly:(BOOL)arg4 ;
-(NSInteger)performMakeAndRecover:(struct __AMFDR *)arg0 fdrLocal:(struct __AMFDR *)arg1 fdrError:(*id)arg2 ;
-(NSInteger)performPartialRepairSealing:(struct __AMFDR *)arg0 fdrLocal:(struct __AMFDR *)arg1 fdrError:(*id)arg2 ;
-(NSInteger)prefetchPermissionsForSealingWith:(struct __AMFDR *)arg0 fdrLocal:(struct __AMFDR *)arg1 returnError:(*id)arg2 ;
-(NSInteger)prefetchPermissionsWith:(struct __AMFDR *)arg0 claimClassDict:(id)arg1 returnError:(*id)arg2 ;
-(NSInteger)registerChangeForComponent:(id)arg0 fdrError:(*id)arg1 ;
-(NSInteger)seal:(*id)arg0 oldSealingManifest:(*id)arg1 newSealingManifest:(*id)arg2 stats:(*id)arg3 ;
-(NSInteger)sealWithDataClass:(id)arg0 fdrError:(*id)arg1 registerOnly:(BOOL)arg2 ;
-(NSInteger)setLocalAndRemoteTrustObject:(struct __AMFDR *)arg0 fdrLocal:(struct __AMFDR *)arg1 remoteTrustObjectDigest:(id)arg2 fdrError:(*id)arg3 ;
-(id)_baseFDROptionsWithDataStore:(id)arg0 ;
-(id)_copyFDROptionsForPatch:(struct __AMFDR *)arg0 ;
-(id)_getCRFDRMetaDataDictionary;
-(id)_personalizeTrustObjectWithDigest:(id)arg0 withError:(*id)arg1 ;
-(id)_setLocalAndRemotePermission:(struct __AMFDR *)arg0 fdrRemote:(struct __AMFDR *)arg1 ;
-(id)extractNetworkUsage;
-(id)init;
-(id)initForRegisterChangeWithParameters:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(void)_logSealingRequest:(struct __AMFDRSealedData *)arg0 ;


@end


#endif