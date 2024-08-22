// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXEXTENSIONVALUEREP_H
#define _EXEXTENSIONVALUEREP_H

@class EXExtensionRep, NSString, NSUUID, NSURL, NSDictionary;



@interface _EXExtensionValueRep : EXExtensionRep {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSString *_bundleIdentifier;
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
-(id)containingURL;
-(id)entitlementNamed:(id)arg0 ofClass:(Class)arg1 ;
-(id)entitlements;
-(id)extensionDictionary;
-(id)extensionPointIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(id)sdkDictionary;
-(id)url;
-(unsigned int)platform;


@end


#endif