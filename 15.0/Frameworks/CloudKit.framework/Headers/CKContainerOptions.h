// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONTAINEROPTIONS_H
#define CKCONTAINEROPTIONS_H

@class NSString, NSDictionary, CKTestDeviceReference;
@protocol CKSQLiteItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKAccountOverrideInfo.h"
#import "CKUploadRequestConfiguration.h"

@interface CKContainerOptions : NSObject <CKSQLiteItem, NSSecureCoding, NSCopying>



@property (nonatomic) BOOL accountInfoCacheIsDisabled; // ivar: _accountInfoCacheIsDisabled
@property (copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (copy, nonatomic) CKAccountOverrideInfo *accountOverrideInfo; // ivar: _accountOverrideInfo
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration; // ivar: _applicationBundleIdentifierOverrideForPushTopicGeneration
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC; // ivar: _applicationBundleIdentifierOverrideForTCC
@property (nonatomic) BOOL bypassPCSEncryption; // ivar: _bypassPCSEncryption
@property (nonatomic) BOOL captureResponseHTTPHeaders; // ivar: _captureResponseHTTPHeaders
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *encryptionServiceName; // ivar: _encryptionServiceName
@property (nonatomic) BOOL enforceNamedOperationGroups; // ivar: _enforceNamedOperationGroups
@property (retain, nonatomic) NSDictionary *fakeEntitlements; // ivar: _fakeEntitlements
@property (nonatomic) BOOL forceEnableReadOnlyManatee; // ivar: _forceEnableReadOnlyManatee
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL holdAllOperations; // ivar: _holdAllOperations
@property (nonatomic) NSUInteger mmcsEncryptionSupport; // ivar: _mmcsEncryptionSupport
@property (retain, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (nonatomic) BOOL returnPCSMetadata; // ivar: _returnPCSMetadata
@property (nonatomic) BOOL returnRequestOperationProto; // ivar: _returnRequestOperationProto
@property (readonly) Class superclass;
@property (retain, nonatomic) CKTestDeviceReference *testDeviceReference; // ivar: _testDeviceReference
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration
@property (nonatomic) BOOL useAnonymousToServerShareParticipants; // ivar: _useAnonymousToServerShareParticipants
@property (nonatomic) BOOL useClearAssetEncryption; // ivar: _useClearAssetEncryption
@property (nonatomic) BOOL useZoneWidePCS; // ivar: _useZoneWidePCS


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