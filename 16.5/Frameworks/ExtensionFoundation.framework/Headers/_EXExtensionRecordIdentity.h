// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXEXTENSIONRECORDIDENTITY_H
#define _EXEXTENSIONRECORDIDENTITY_H

@class EXExtensionIdentity, LSExtensionPointRecord, LSApplicationExtensionRecord;



@interface _EXExtensionRecordIdentity : EXExtensionIdentity

@property (readonly) LSExtensionPointRecord *extensionPoint; // ivar: _extensionPoint
@property (readonly) LSApplicationExtensionRecord *record; // ivar: _record


+(BOOL)supportsSecureCoding;
-(BOOL)setUserElection:(unsigned char)arg0 error:(*id)arg1 ;
-(Class)classForCoder;
-(id)UUID;
-(id)attributes;
-(id)bundleIdentifier;
-(id)containingBundleRecord;
-(id)containingURL;
-(id)entitlementNamed:(id)arg0 ofClass:(Class)arg1 ;
-(id)entitlements;
-(id)extensionDictionary;
-(id)extensionSettingsKey;
-(id)initWithApplicationExtensionRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlugInKitProxy:(id)arg0 ;
-(id)localizedName;
-(id)sdkDictionary;
-(id)url;
-(unsigned char)defaultUserElection;
-(unsigned char)userElection;
-(unsigned int)platform;


@end


#endif