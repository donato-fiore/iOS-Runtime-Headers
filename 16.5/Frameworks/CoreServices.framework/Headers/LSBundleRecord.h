// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSBUNDLERECORD_H
#define LSBUNDLERECORD_H

@class NSString, NSArray, NSURL, NSSet, NSDictionary, NSDate;


#import "LSRecord.h"
#import "_LSLocalizedStringRecord.h"
#import "FSNode.h"
#import "_LSLazyPropertyList.h"
#import "LSBundleRecord.h"
#import "LSBundleProxy.h"
#import "LSPropertyList.h"

@interface LSBundleRecord : LSRecord {
    *? _auditToken;
    id *_cachedDataContainerURL;
}


@property (readonly) NSString *SDKVersion;
@property (readonly) NSArray *UIBackgroundModes;
@property (readonly, getter=isUPPValidated) BOOL UPPValidated;
@property (readonly) NSURL *URL;
@property (readonly) NSArray *WKBackgroundModes;
@property (readonly, nonatomic) *? _auditToken;
@property (readonly) LSBundleBaseFlags _baseFlags;
@property (readonly, nonatomic) LSVersionNumber _bundleVersion;
@property (readonly) NSUInteger _containerClass;
@property (readonly) BOOL _containerized;
@property (readonly) NSURL *_dataContainerURLFromDatabase;
@property (readonly) NSString *_fallbackLocalizedName;
@property (readonly) _LSLocalizedStringRecord *_localizedIdentityUsageDescription;
@property (readonly) _LSLocalizedStringRecord *_localizedMicrophoneUsageDescription;
@property (readonly) _LSLocalizedStringRecord *_localizedName;
@property (readonly) _LSLocalizedStringRecord *_localizedShortName;
@property (readonly, nonatomic) FSNode *_node; // ivar: _node
@property (readonly) unsigned char _profileValidationState;
@property (readonly) _LSLazyPropertyList *_rawGroupContainerURLs;
@property (readonly, nonatomic) LSBundleRecord *_realRecord;
@property (readonly) BOOL _usesSystemPersona;
@property (readonly) NSString *accentColorName;
@property (readonly) NSString *applicationIdentifier;
@property (readonly, getter=wasBuiltWithThreadSanitizer) BOOL builtWithThreadSanitizer;
@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSString *bundleVersion;
@property (readonly) NSSet *claimRecords;
@property (readonly) unsigned int codeSignatureVersion;
@property (readonly, nonatomic) LSBundleProxy *compatibilityObject;
@property (readonly) NSUInteger compatibilityState;
@property (readonly) NSURL *dataContainerURL;
@property (readonly) char developerType;
@property (readonly) LSPropertyList *entitlements;
@property (readonly) NSURL *executableURL;
@property (readonly) NSSet *exportedTypeRecords;
@property (readonly, getter=isFreeProfileValidated) BOOL freeProfileValidated;
@property (readonly) NSDictionary *groupContainerURLs;
@property (readonly) NSSet *importedTypeRecords;
@property (readonly) LSPropertyList *infoDictionary;
@property (readonly) NSDictionary *intentDefinitionURLs;
@property (readonly) NSArray *intentsRestrictedWhileLocked;
@property (readonly) NSArray *intentsRestrictedWhileProtectedDataUnavailable;
@property (readonly) BOOL isAppleInternal;
@property (readonly) BOOL isLinkEnabled;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSArray *machOUUIDs;
@property (readonly) NSArray *managedPersonas;
@property (readonly) unsigned int platform;
@property (readonly, getter=isProfileValidated) BOOL profileValidated;
@property (readonly) NSDate *registrationDate;
@property (readonly) NSSet *serviceRecords;
@property (readonly) NSString *signerIdentity;
@property (readonly) NSString *signerOrganization;
@property (readonly) NSArray *supportedIntentMediaCategories;
@property (readonly) NSArray *supportedIntents;
@property (readonly) BOOL supportsNowPlaying;
@property (readonly) NSString *teamIdentifier;


+(BOOL)supportsSecureCoding;
+(id)_bundleRecordForAuditToken:(struct ? )arg0 checkNSBundleMainBundle:(unsigned char)arg1 error:(*id)arg2 ;
+(id)_propertyClasses;
+(id)bundleRecordForAuditToken:(struct ? )arg0 error:(*id)arg1 ;
+(id)bundleRecordForCurrentProcess;
+(id)bundleRecordWithApplicationIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)bundleRecordWithBundleIdentifier:(id)arg0 allowPlaceholder:(BOOL)arg1 error:(*id)arg2 ;
+(id)coreTypesBundleRecord;
-(BOOL)getDataContainerURL:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isAppleInternalWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLinkEnabledWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)hash;
-(char)developerTypeWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)SDKVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)_dataContainerURLFromDatabaseWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)_getGroupContainersCreatingIfNecessary:(BOOL)arg0 checkNonContainerizedBundles:(BOOL)arg1 ;
-(id)_initWithContext:(struct LSContext *)arg0 persistentIdentifierData:(struct LSPersistentIdentifierData *)arg1 length:(NSUInteger)arg2 ;
-(id)_initWithNode:(id)arg0 bundleIdentifier:(id)arg1 context:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 bundleBaseData:(struct LSBundleBaseData *)arg5 error:(*id)arg6 ;
-(id)_localizedIdentityUsageDescriptionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)_localizedMicrophoneUsageDescriptionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)_localizedNameWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)_localizedShort:(BOOL)arg0 nameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 bundleData:(struct LSBundleBaseData *)arg4 ;
-(id)_localizedShortNameWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)_rawGroupContainerURLsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)claimRecordsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)entitlementsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)executableURLWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)exported:(BOOL)arg0 typesWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(struct LSBundleData *)arg4 ;
-(id)exportedTypeRecordsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)getGroupContainersCreatingIfNecessary:(BOOL)arg0 ;
-(id)importedTypeRecordsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)infoDictionaryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)intentDefinitionURLsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)localizedNameWithPreferredLocalizations:(id)arg0 ;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg0 ;
-(id)localizedUsageDescriptionForFeature:(NSUInteger)arg0 ;
-(id)localizedUsageDescriptionForFeature:(NSUInteger)arg0 preferredLocalizations:(id)arg1 ;
-(id)machOUUIDsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)registrationDateWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)signerIdentityWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)signerOrganizationWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(id)teamIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(struct LSBundleBaseFlags )_baseFlagsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(struct LSVersionNumber )_bundleVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(unsigned char)_profileValidationStateWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(unsigned int)codeSignatureVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(unsigned int)platformWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleBaseData *)arg3 ;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif