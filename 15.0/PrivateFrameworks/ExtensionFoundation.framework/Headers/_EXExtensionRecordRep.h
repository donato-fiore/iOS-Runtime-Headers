// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXEXTENSIONRECORDREP_H
#define _EXEXTENSIONRECORDREP_H

@class EXExtensionRep, LSExtensionPointRecord, LSApplicationExtensionRecord;



@interface _EXExtensionRecordRep : EXExtensionRep

@property (readonly) LSExtensionPointRecord *extensionPoint; // ivar: _extensionPoint
@property (readonly) LSApplicationExtensionRecord *record; // ivar: _record


+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)UUID;
-(id)attributes;
-(id)bundleIdentifier;
-(id)containingURL;
-(id)entitlementNamed:(id)arg0 ofClass:(Class)arg1 ;
-(id)entitlements;
-(id)extensionDictionary;
-(id)initWithApplicationExtensionRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlugInKitProxy:(id)arg0 ;
-(id)localizedName;
-(id)sdkDictionary;
-(id)url;
-(unsigned int)platform;


@end


#endif