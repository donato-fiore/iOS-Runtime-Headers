// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTAINEROPTIONS_H
#define CKCONTAINEROPTIONS_H

@class NSString, NSDictionary;
@protocol CKSQLiteItem, NSSecureCoding, NSCopying, CKTestDeviceReference;

#import <Foundation/Foundation.h>

#import "CKAccountOverrideInfo.h"
#import "CKUploadRequestConfiguration.h"

@interface CKContainerOptions : NSObject <CKSQLiteItem, NSSecureCoding, NSCopying>



@property BOOL accountInfoCacheIsDisabled; // ivar: _accountInfoCacheIsDisabled
@property (copy) CKAccountOverrideInfo *accountInfoOverride;
@property (copy) CKAccountOverrideInfo *accountOverrideInfo; // ivar: _accountOverrideInfo
@property BOOL addDatabaseScopeToZoneIDs; // ivar: _addDatabaseScopeToZoneIDs
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (copy) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration; // ivar: _applicationBundleIdentifierOverrideForPushTopicGeneration
@property (copy) NSString *applicationBundleIdentifierOverrideForTCC; // ivar: _applicationBundleIdentifierOverrideForTCC
@property BOOL bypassPCSEncryption; // ivar: _bypassPCSEncryption
@property BOOL captureResponseHTTPHeaders; // ivar: _captureResponseHTTPHeaders
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL encryptMergeableValueMetadata; // ivar: _encryptMergeableValueMetadata
@property (copy) NSString *encryptionServiceName; // ivar: _encryptionServiceName
@property BOOL enforceNamedOperationGroups; // ivar: _enforceNamedOperationGroups
@property (copy) NSDictionary *fakeEntitlements; // ivar: _fakeEntitlements
@property BOOL fetchChangesForMergeableValues; // ivar: _fetchChangesForMergeableValues
@property BOOL forceEnableReadOnlyManatee; // ivar: _forceEnableReadOnlyManatee
@property (readonly) NSUInteger hash;
@property BOOL holdAllOperations; // ivar: _holdAllOperations
@property BOOL isServiceManatee; // ivar: _isServiceManatee
@property BOOL maintainRecordUploadOrder; // ivar: _maintainRecordUploadOrder
@property NSUInteger mmcsEncryptionSupport; // ivar: _mmcsEncryptionSupport
@property (retain) NSString *personaIdentifier; // ivar: _personaIdentifier
@property BOOL prefersHiddenAllowedSharingOptionsUI; // ivar: _prefersHiddenAllowedSharingOptionsUI
@property NSInteger qualityOfService; // ivar: _qualityOfService
@property BOOL returnPCSMetadata; // ivar: _returnPCSMetadata
@property BOOL returnRequestOperationProto; // ivar: _returnRequestOperationProto
@property (readonly) Class superclass;
@property (retain) NSObject<CKTestDeviceReference> *testDeviceReferenceProtocol; // ivar: _testDeviceReferenceProtocol
@property (retain) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration
@property BOOL useAnonymousToServerShareParticipants; // ivar: _useAnonymousToServerShareParticipants
@property BOOL useClearAssetEncryption; // ivar: _useClearAssetEncryption
@property BOOL useZoneWidePCS; // ivar: _useZoneWidePCS


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)sqliteRepresentation;
-(void)ck_bindInStatement:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setApplicationBundleIdentifierOverride:(id)arg0 ;
-(void)setUseMMCSEncryptionV2:(BOOL)arg0 ;


@end


#endif