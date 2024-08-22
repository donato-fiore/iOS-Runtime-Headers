// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULECLOUDZONE_H
#define HMDNETWORKROUTERFIREWALLRULECLOUDZONE_H

@class HMBCloudZone, NSSet, NSArray, NSMutableSet;



@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone

@property (retain, nonatomic) NSSet *modifiedRecordIDsFromLastPull; // ivar: _modifiedRecordIDsFromLastPull
@property (readonly, nonatomic) NSArray *signatureVerificationPublicKeys; // ivar: _signatureVerificationPublicKeys
@property (retain, nonatomic) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull; // ivar: _uncommittedModifiedRecordIDsFromLastPull
@property (readonly, nonatomic) BOOL useAnonymousRequests; // ivar: _useAnonymousRequests
@property (readonly, nonatomic) NSSet *watchedRecordIDs; // ivar: _watchedRecordIDs


+(BOOL)__verifyDataFromRecord:(id)arg0 signatureVerificationPublicKeys:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(NSUInteger)arg4 signatureKey:(id)arg5 signatureAssetKey:(id)arg6 maxSignatureSize:(NSUInteger)arg7 baseAccessoryIdentifier:(*id)arg8 data:(*id)arg9 error:(*id)arg10 ;
+(BOOL)__verifyDigestDataAgainstSignatureFromRecord:(id)arg0 digestData:(id)arg1 signatureData:(id)arg2 signatureVerificationPublicKeys:(id)arg3 error:(*id)arg4 ;
+(BOOL)verifyNetworkDeclarationsFromRecord:(id)arg0 signatureVerificationPublicKeys:(id)arg1 baseAccessoryIdentifier:(*id)arg2 data:(*id)arg3 error:(*id)arg4 ;
+(BOOL)verifyNetworkDeclarationsFromRecord:(id)arg0 signatureVerificationPublicKeys:(id)arg1 error:(*id)arg2 ;
+(BOOL)verifyPairedMetadataFromRecord:(id)arg0 signatureVerificationPublicKeys:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)__maxSizeForCKRecordNetworkDeclarations;
+(NSUInteger)__maxSizeForCKRecordNetworkDeclarationsSignature;
+(NSUInteger)__maxSizeForCKRecordPairedMetadata;
+(NSUInteger)__maxSizeForCKRecordPairedMetadataSignature;
+(NSUInteger)__maxSizeForCKRecordString;
+(NSUInteger)__maxSizeFromPreferenceWithKey:(id)arg0 defaultValue:(NSUInteger)arg1 ;
+(id)__calculateDigestDataFromRecord:(id)arg0 dataKey:(id)arg1 dataAssetKey:(id)arg2 maxDataSize:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)__createBaseAccessoryIdentifierFromRecord:(id)arg0 error:(*id)arg1 ;
+(id)__getDataFromRecord:(id)arg0 dataKey:(id)arg1 dataAssetKey:(id)arg2 maxDataSize:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)__getSignatureDataFromRecord:(id)arg0 signatureKey:(id)arg1 signatureAssetKey:(id)arg2 maxSignatureSize:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)__canRecoverFromError:(id)arg0 fetchInfo:(id)arg1 ;
-(BOOL)__commitLocalChanges:(id)arg0 error:(*id)arg1 ;
-(id)attributeDescriptions;
-(id)decodeModelFrom:(id)arg0 recordSource:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithCloudDatabase:(id)arg0 state:(id)arg1 useAnonymousRequests:(BOOL)arg2 watchedRecordIDs:(id)arg3 signatureVerificationPublicKeys:(id)arg4 ;
-(id)performCloudPullWithFetchToken:(id)arg0 options:(id)arg1 ;
-(void)__fetchZoneChangesWithFetchInfo:(id)arg0 ;
-(void)__finalizeUpdatedRecordIDs;
-(void)__noteUpdatedRecordID:(id)arg0 ;
-(void)__recordChanged:(id)arg0 fetchInfo:(id)arg1 ;
-(void)__recordDeleted:(id)arg0 recordType:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__retryFetchWithFetchInfo:(id)arg0 ;
-(void)__zoneChangeTokensUpdated:(id)arg0 fetchInfo:(id)arg1 ;
-(void)__zoneChangesCompleted:(id)arg0 fetchInfo:(id)arg1 ;
-(void)__zoneFetchCompletedWithChangeToken:(id)arg0 error:(id)arg1 moreComing:(BOOL)arg2 fetchInfo:(id)arg3 ;
-(void)startUpWithLocalZone:(id)arg0 ;


@end


#endif