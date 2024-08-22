// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIPLUGINKITBUNDLE_H
#define MIPLUGINKITBUNDLE_H

@class NSString, NSDictionary;


#import "MIAppExtensionBundle.h"

@interface MIPluginKitBundle : MIAppExtensionBundle {
    NSString *_extensionPointIdentifier;
}


@property (readonly, copy, nonatomic) NSString *exExtensionPointIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *extensionAttributes; // ivar: _extensionAttributes
@property (readonly, nonatomic) NSDictionary *extensionPointOverlay; // ivar: _extensionPointOverlay
@property (readonly, nonatomic) BOOL isFileProviderNonUIExtension;
@property (readonly, nonatomic) BOOL isMapsGeoServicesExtension;
@property (readonly, nonatomic) BOOL isMessagePayloadProviderExtension;
@property (readonly, nonatomic) BOOL isSiriIntentsExtension;
@property (readonly, nonatomic) BOOL isSiriIntentsUIExtension;
@property (readonly, nonatomic) BOOL isWatchKitExtension;
@property (readonly, copy, nonatomic) NSString *nsExtensionPointIdentifier;
@property (copy, nonatomic) NSDictionary *overlaidInfoPlist; // ivar: _overlaidInfoPlist
@property (copy, nonatomic) NSString *validationOverrideParentBundleID; // ivar: _validationOverrideParentBundleID


// +(id)bundlesInParentBundle:(id)arg0 overrideParentBundleIDForValidation:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(id)arg3 error:(unk)arg4  ;
// +(id)bundlesInParentBundle:(id)arg0 subDirectory:(id)arg1 matchingPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)_validateNSExtensionWithOverlaidDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateXPCServiceWithOverlaidDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateBundleMetadataWithError:(*id)arg0 ;
-(id)_overlayDictionary:(id)arg0 onDictionary:(id)arg1 ;
-(id)currentOSVersionForValidationWithError:(*id)arg0 ;
-(id)extensionPointIdentifier;
-(id)overlaidInfoPlistWithError:(*id)arg0 ;


@end


#endif