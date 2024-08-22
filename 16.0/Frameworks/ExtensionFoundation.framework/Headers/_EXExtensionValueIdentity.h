// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSIONVALUEIDENTITY_H
#define _EXEXTENSIONVALUEIDENTITY_H

@class EXExtensionIdentity, NSString, LSBundleRecord, NSUUID, NSURL, NSDictionary;



@interface _EXExtensionValueIdentity : EXExtensionIdentity {
    unsigned char _userElection;
    unsigned char _defaultUserElection;
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
    LSBundleRecord *_containingBundleRecord;
    NSUUID *_UUID;
    NSString *_localizedName;
    NSURL *_url;
    NSURL *_containingURL;
    NSDictionary *_sdkDictionary;
    NSDictionary *_extensionDictionary;
    NSDictionary *_attributes;
    NSDictionary *_entitlements;
}




+(BOOL)supportsSecureCoding;
-(id)UUID;
-(id)attributes;
-(id)bundleIdentifier;
-(id)containingBundleRecord;
-(id)containingURL;
-(id)entitlementNamed:(id)arg0 ofClass:(Class)arg1 ;
-(id)entitlements;
-(id)extensionDictionary;
-(id)extensionPointIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(id)sdkDictionary;
-(id)url;
-(unsigned char)defaultUserElection;
-(unsigned char)userElection;
-(unsigned int)platform;


@end


#endif