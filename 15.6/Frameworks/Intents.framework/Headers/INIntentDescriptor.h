// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ININTENTDESCRIPTOR_H
#define ININTENTDESCRIPTOR_H

@class NSArray, LSApplicationRecord, NSString;
@protocol NSSecureCoding;


#import "INAppDescriptor.h"

@interface INIntentDescriptor : INAppDescriptor <NSSecureCoding>

 {
    NSArray *_extensions;
    NSArray *_uiExtensions;
}


@property (readonly, nonatomic) LSApplicationRecord *applicationRecord;
@property (readonly, nonatomic) BOOL canRunOnLocalDevice;
@property (readonly, nonatomic) LSApplicationRecord *displayableApplicationRecord;
@property (readonly, copy, nonatomic) NSString *displayableBundleIdentifier; // ivar: _displayableBundleIdentifier
@property (readonly, nonatomic) BOOL hasCustomUIExtension;
@property (readonly, copy, nonatomic) NSString *intentClassName; // ivar: _intentClassName
@property (readonly, nonatomic) LSApplicationRecord *launchableApplicationRecord;
@property (readonly, nonatomic) NSInteger preferredCallProvider; // ivar: _preferredCallProvider
@property (readonly, copy, nonatomic) NSString *uiExtensionBundleIdentifier; // ivar: _uiExtensionBundleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_extensionsWithError:(*id)arg0 ;
-(id)_matchingAttributesForExtensionPoint:(id)arg0 error:(*id)arg1 ;
-(id)_uiExtensionsWithError:(*id)arg0 ;
-(id)appDescriptor;
-(id)description;
-(id)descriptorWithAppDescriptor:(id)arg0 ;
-(id)descriptorWithPreferredCallProvider:(NSInteger)arg0 ;
-(id)displayableAppDescriptor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithIntentClassName:(id)arg0 extensionBundleId:(id)arg1 ;
-(id)initWithIntentClassName:(id)arg0 launchableAppBundleId:(id)arg1 ;
-(id)initWithIntentClassName:(id)arg0 localizedName:(id)arg1 bundleIdentifier:(id)arg2 displayableBundleIdentifier:(id)arg3 extensionBundleIdentifier:(id)arg4 uiExtensionBundleIdentifier:(id)arg5 counterpartIdentifiers:(id)arg6 teamIdentifier:(id)arg7 preferredCallProvider:(NSInteger)arg8 supportedIntents:(id)arg9 bundleURL:(id)arg10 documentTypes:(id)arg11 ;
-(id)initWithIntentTypeName:(id)arg0 ;
-(id)mergeWithDescriptor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif