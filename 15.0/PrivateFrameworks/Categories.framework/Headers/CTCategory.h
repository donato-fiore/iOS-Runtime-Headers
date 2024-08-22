// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCATEGORY_H
#define CTCATEGORY_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCategory : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *canonicalBundleIdentifier; // ivar: _canonicalBundleIdentifier
@property (readonly, copy, nonatomic) NSArray *equivalentBundleIdentifiers; // ivar: _equivalentBundleIdentifiers
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *primaryWebDomain; // ivar: _primaryWebDomain
@property (copy, nonatomic) NSArray *webDomains; // ivar: _webDomains


+(BOOL)supportsSecureCoding;
+(id)_DHIDtoCategoryDisplayNameMap;
+(id)_DHToAppStoreCategoriesMap;
+(id)_equivalentBundleIDsMapping;
+(id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)arg0 ;
+(id)_getAssociatedDomainsForHostNames:(id)arg0 ;
+(id)_getequivalentBundleIdentifiers:(id)arg0 ;
+(id)_identifierUsingContextKit:(id)arg0 error:(*id)arg1 relatedItems:(*id)arg2 ;
+(id)_identifierUsingContextKit:(id)arg0 error:(*id)arg1 relatedItems:(*id)arg2 bundleIdentifier:(*id)arg3 ;
+(id)_newXpcConnection;
+(id)_overrideEquivalentIdentifiers:(id)arg0 forBundleID:(id)arg1 ;
+(id)_schemeRemovedEquivalentBundleIDsMapping:(id)arg0 ;
+(id)_xpcConnection;
+(id)bundleIDForPlatform:(id)arg0 fromBundleID:(id)arg1 platform:(id)arg2 ;
+(id)equivalentIdentifiersForBundleID:(id)arg0 ;
+(id)itemWith:(id)arg0 platform:(id)arg1 array:(id)arg2 ;
+(id)localizedNameForIdentifier:(id)arg0 ;
+(id)parentAppBundleIdentifierForAppRecord:(id)arg0 ;
+(id)primaryLocalizedNameForIdentifier:(id)arg0 ;
+(id)schemeStringForPlatform:(id)arg0 ;
+(id)shortLocalizedNameForIdentifier:(id)arg0 ;
+(id)systemAppCategoryIdentifierForBundleIdentifier:(id)arg0 ;
+(id)systemCategoryIDWithPatternMatching:(id)arg0 ;
+(void)_getCategoryTypeForDomainName:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)_lookupAppStoreUsing:(id)arg0 platform:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)categoryForBundleID:(id)arg0 platform:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)categoryForBundleID:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)categoryForBundleIdentifiers:(id)arg0 platform:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)categoryForDomainName:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)categoryForDomainNames:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)categoryForDomainURL:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)categoryForDomainURLs:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCategory:(id)arg0 ;
-(BOOL)isSystemBundleIdentifier;
-(NSUInteger)hash;
-(id)description;
-(id)equivalentBundleIdentifers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 equivalentBundleIdentifiers:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 equivalentBundleIdentifiers:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 primaryWebDomain:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 equivalentBundleIdentifiers:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 primaryWebDomain:(id)arg4 canonicalBundleIdentifier:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 webDomains:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 webDomains:(id)arg1 bundleIdentifier:(id)arg2 primaryWebDomain:(id)arg3 ;
-(void)_ctCategoryCommonInitWithIdentifier:(id)arg0 equivalentBundleIdentifiers:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 primaryWebDomain:(id)arg4 canonicalBundleIdentifier:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif