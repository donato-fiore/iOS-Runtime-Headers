// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSAPPLICATIONEXTENSIONRECORD_H
#define LSAPPLICATIONEXTENSIONRECORD_H

@class NSString, NSDictionary, NSUUID;


#import "LSBundleRecord.h"
#import "LSPlugInKitProxy.h"
#import "LSExtensionPointRecord.h"

@interface LSApplicationExtensionRecord : LSBundleRecord {
    LSBundleRecord *_weakContainingBundleRecord;
}


@property (readonly) LSBundleRecord *_containingBundleRecord;
@property (readonly, nonatomic) LSPlugInKitProxy *compatibilityObject;
@property (readonly) LSBundleRecord *containingBundleRecord;
@property (readonly) NSString *effectiveBundleIdentifier;
@property (readonly) LSExtensionPointRecord *extensionPointRecord;
@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSUUID *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
+(id)applicationExtensionRecordsForUUIDs:(id)arg0 outContainingBundleRecords:(*id)arg1 error:(*id)arg2 ;
+(id)enumeratorWithExtensionPointRecord:(id)arg0 options:(NSUInteger)arg1 ;
+(id)enumeratorWithOptions:(NSUInteger)arg0 ;
-(BOOL)_containerized;
-(BOOL)_usesSystemPersona;
-(NSUInteger)_containerClass;
-(char)developerType;
-(id)_compatibilityObjectWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)_containingBundleRecordWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSPluginData *)arg3 ;
-(id)_initWithContext:(struct LSContext *)arg0 persistentIdentifierData:(struct LSPersistentIdentifierData *)arg1 length:(NSUInteger)arg2 ;
-(id)_initWithContext:(struct LSContext *)arg0 pluginID:(unsigned int)arg1 pluginData:(struct LSPluginData *)arg2 error:(*id)arg3 ;
-(id)_initWithUUID:(id)arg0 node:(id)arg1 bundleIdentifier:(id)arg2 context:(struct LSContext *)arg3 error:(*id)arg4 ;
-(id)_intentsArrayForKey:(id)arg0 ;
-(id)_replacementObjectForResolvedPropertyValue:(id)arg0 forGetter:(SEL)arg1 encoder:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectiveBundleIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSPluginData *)arg3 ;
-(id)extensionPointRecordWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSPluginData *)arg3 ;
-(id)iconDictionaryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSPluginData *)arg3 ;
-(id)initWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithUUID:(id)arg0 error:(*id)arg1 ;
-(id)intentsRestrictedWhileLocked;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)managedPersonas;
-(id)managedPersonasWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSPluginData *)arg3 ;
-(id)supportedIntentMediaCategories;
-(id)supportedIntents;
-(id)uniqueIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSPluginData *)arg3 ;
-(void)_LSRecord_resolve_managedPersonas;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;


@end


#endif