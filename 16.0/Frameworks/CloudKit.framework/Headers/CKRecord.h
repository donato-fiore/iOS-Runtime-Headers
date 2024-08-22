// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORD_H
#define CKRECORD_H

@class NSURL, NSArray, NSString, NSData, NSSet, NSDate, NSDictionary, NSNumber;
@protocol CKContainerAssignment, CKPropertiesDescription, NSSecureCoding, NSCopying, CKRecordKeyValueSetting;

#import <Foundation/Foundation.h>

#import "CKEncryptedData.h"
#import "CKContainerID.h"
#import "CKRecordID.h"
#import "CKEncryptedRecordValueStore.h"
#import "CKReference.h"
#import "CKRecordValueStore.h"

@interface CKRecord : NSObject <CKContainerAssignment, CKPropertiesDescription, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSArray *allPCSKeyIDs; // ivar: _allPCSKeyIDs
@property (readonly, nonatomic) NSUInteger assetCount;
@property (readonly, nonatomic) NSUInteger assetDiskSize;
@property (copy, nonatomic) NSString *baseToken; // ivar: _baseToken
@property (retain, nonatomic) NSData *chainParentPublicKeyID; // ivar: _chainParentPublicKeyID
@property (retain, nonatomic) CKEncryptedData *chainPrivateKey; // ivar: _chainPrivateKey
@property (retain, nonatomic) NSData *chainProtectionInfo; // ivar: _chainProtectionInfo
@property (copy, nonatomic) NSSet *changedKeysSet;
@property (copy, nonatomic) NSArray *conflictLoserEtags; // ivar: _conflictLoserEtags
@property (copy, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, nonatomic) BOOL containsAssetValues;
@property (readonly, nonatomic) BOOL containsIndexedKeys;
@property (readonly, nonatomic) BOOL containsPackageValues;
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) CKRecordID *creatorUserRecordID; // ivar: _creatorUserRecordID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayedHostname; // ivar: _displayedHostname
@property (readonly, nonatomic) NSData *encryptedFullTokenData;
@property (readonly, copy, nonatomic) NSData *encryptedPublicSharingKey;
@property (copy, nonatomic) CKEncryptedRecordValueStore *encryptedValueStore; // ivar: _encryptedValueStore
@property (readonly, copy, nonatomic) NSObject<CKRecordKeyValueSetting> *encryptedValuesByKey;
@property (copy, nonatomic) NSString *etag; // ivar: _etag
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired; // ivar: _expired
@property (readonly, nonatomic) NSString *fullToken;
@property (readonly, nonatomic) BOOL hasChainPCS;
@property (readonly, nonatomic) BOOL hasEncryptedData;
@property (readonly, nonatomic) BOOL hasModifiedEncryptedData;
@property (readonly, nonatomic) BOOL hasModifiedPropertiesRequiringEncryption;
@property (readonly, nonatomic) BOOL hasPropertiesRequiringDecryption;
@property (readonly, nonatomic) BOOL hasPropertiesRequiringEncryption;
@property (nonatomic) BOOL hasUpdatedExpirationTimeInterval; // ivar: _hasUpdatedExpirationTimeInterval
@property (nonatomic) BOOL hasUpdatedParent; // ivar: _hasUpdatedParent
@property (nonatomic) BOOL hasUpdatedShare; // ivar: _hasUpdatedShare
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMergeableValueDeltaRecord; // ivar: _isMergeableValueDeltaRecord
@property (nonatomic, getter=isKnownToServer) BOOL knownToServer; // ivar: _knownToServer
@property (copy, nonatomic) CKRecordID *lastModifiedUserRecordID; // ivar: _lastModifiedUserRecordID
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *modifiedByDevice; // ivar: _modifiedByDevice
@property (retain, nonatomic) CKEncryptedData *mutableEncryptedPSK; // ivar: _mutableEncryptedPSK
@property (copy, nonatomic) CKEncryptedData *mutableEncryptedPublicSharingKey;
@property (copy, nonatomic) NSData *mutableEncryptedPublicSharingKeyData;
@property (copy, nonatomic) NSURL *mutableURL; // ivar: _mutableURL
@property (readonly, copy, nonatomic) NSDictionary *originalValues;
@property (copy, nonatomic) CKReference *parent; // ivar: _parent
@property (retain, nonatomic) NSData *pcsKeyID; // ivar: _pcsKeyID
@property NSInteger permission; // ivar: _permission
@property (copy, nonatomic) NSDictionary *pluginFields; // ivar: _pluginFields
@property (retain, nonatomic) CKReference *previousParent; // ivar: _previousParent
@property (retain, nonatomic) NSString *previousProtectionEtag; // ivar: _previousProtectionEtag
@property (retain, nonatomic) NSString *previousProtectionEtagFromUnitTest; // ivar: _previousProtectionEtagFromUnitTest
@property (retain, nonatomic) CKReference *previousShare; // ivar: _previousShare
@property (readonly, nonatomic) NSString *privateToken;
@property (copy, nonatomic) NSData *protectionData; // ivar: _protectionData
@property (retain, nonatomic) NSString *protectionEtag; // ivar: _protectionEtag
@property (readonly, copy, nonatomic) NSString *recordChangeTag;
@property (copy, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType
@property (copy, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (nonatomic) BOOL serializeProtectionData; // ivar: _serializeProtectionData
@property (copy, nonatomic) CKReference *share; // ivar: _share
@property (retain, nonatomic) NSString *shareEtag; // ivar: _shareEtag
@property (readonly, nonatomic) NSData *shortSharingTokenData;
@property (readonly, nonatomic) NSData *shortSharingTokenHashData;
@property (readonly, copy, nonatomic) NSString *shortToken;
@property (nonatomic) *_PCSIdentityData signingPCSIdentity; // ivar: _signingPCSIdentity
@property (readonly, nonatomic) NSUInteger size;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tombstonedPublicKeyIDs; // ivar: _tombstonedPublicKeyIDs
@property (nonatomic) BOOL trackChanges; // ivar: _trackChanges
@property (readonly, copy, nonatomic) NSURL *uncachedURL;
@property (copy, nonatomic) NSNumber *updatedExpirationTimeInterval; // ivar: _updatedExpirationTimeInterval
@property (nonatomic) BOOL useLightweightPCS; // ivar: _useLightweightPCS
@property (copy, nonatomic) CKRecordValueStore *valueStore; // ivar: _valueStore
@property (readonly, copy, nonatomic) NSDictionary *values;
@property (readonly, copy, nonatomic) NSObject<CKRecordKeyValueSetting> *valuesByKey;
@property (nonatomic) BOOL wantsChainPCS; // ivar: _wantsChainPCS
@property (nonatomic) BOOL wantsPublicSharingKey; // ivar: _wantsPublicSharingKey
@property (nonatomic) BOOL wasCached; // ivar: _wasCached
@property (retain, nonatomic) NSString *zoneProtectionEtag; // ivar: _zoneProtectionEtag
@property (retain, nonatomic) NSData *zoneishKeyID; // ivar: _zoneishKeyID


+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)supportsSecureCoding;
+(id)decryptFullToken:(id)arg0 shortSharingTokenData:(id)arg1 ;
+(id)encryptFullToken:(id)arg0 shortSharingTokenData:(id)arg1 ;
+(id)fullTokenFromBaseToken:(id)arg0 privateToken:(id)arg1 ;
+(id)keyForAppendingToListField:(id)arg0 ;
+(id)keyForFetchingItems:(NSUInteger)arg0 atEndOfListField:(id)arg1 ;
+(id)keyForInsertingIntoListField:(id)arg0 atIndex:(NSInteger)arg1 ;
+(id)keyForListField:(id)arg0 withIndexRange:(struct _NSRange )arg1 ;
+(id)recordWithDuplicatedPackagesOfRecord:(id)arg0 error:(*id)arg1 ;
+(id)shareURLWithShortToken:(id)arg0 shareTitle:(id)arg1 shareType:(id)arg2 containerID:(id)arg3 displayedHostname:(id)arg4 ;
-(BOOL)canSkipRecordSaveForMergeables;
-(BOOL)containsAssetBackedMergeableDeltas;
-(BOOL)containsMergeableValues;
-(BOOL)containsMergeableValuesWithDeltasToSave;
-(BOOL)containsValueOfClasses:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(BOOL)containsValueOfClasses:(id)arg0 passingTest:(id)arg1 ;
-(BOOL)containsValuePassingTest:(id)arg0 ;
-(BOOL)isMoreRecentThanRecord:(id)arg0 ;
-(BOOL)prepareMergeablesForUploadInContainer:(id)arg0 useAssetsIfNecessary:(BOOL)arg1 error:(*id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_allStrings;
-(id)_initSkippingValidationWithRecordType:(id)arg0 recordID:(id)arg1 ;
-(id)allKeys;
-(id)allTokens;
-(id)allValues;
-(id)changedKeys;
-(id)copyWithOriginalValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 userFields:(BOOL)arg1 ;
-(id)encryptedValues;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordTransport:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 recordID:(id)arg1 ;
-(id)initWithRecordType:(id)arg0 zoneID:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)redactedDescription;
-(id)shortSharingToken;
-(id)valueForKey:(id)arg0 ;
-(void)CKAssignToContainerWithID:(id)arg0 ;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
// -(void)claimPackagesWithSuccessBlock:(id)arg0 failureBlock:(unk)arg1 completionBlock:(id)arg2  ;
-(void)copyStreamingAssetServerFieldsFromServerRecord:(id)arg0 ;
-(void)countMergeableValueMetrics:(id)arg0 ;
-(void)dealloc;
-(void)encodeSystemFieldsWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateKeysAndValuesOfClasses:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateKeysAndValuesOfClasses:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateKeysAndValuesUsingBlock:(id)arg0 ;
-(void)preTiboEncodeWithCoder:(id)arg0 ;
-(void)releasePackages;
-(void)removePackages;
-(void)resetChangedKeys;
-(void)setExpirationAfterTimeInterval:(id)arg0 ;
-(void)setNilValueForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setObjectNoValidate:(id)arg0 forKey:(id)arg1 ;
-(void)setStreamingAssetRequestOptions:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateMergeablesForSuccessfulSave;
-(void)updateWithSavedRecordXPCMetadata:(id)arg0 shouldOnlySaveAssetContent:(BOOL)arg1 ;


@end


#endif