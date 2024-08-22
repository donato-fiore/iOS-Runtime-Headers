// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSEXTENSIONPOINTRECORD_H
#define LSEXTENSIONPOINTRECORD_H

@class NSString;


#import "LSRecord.h"
#import "LSPropertyList.h"
#import "LSExtensionPoint.h"
#import "LSApplicationRecord.h"

@interface LSExtensionPointRecord : LSRecord

@property (readonly) LSPropertyList *SDKDictionary;
@property (readonly) unsigned int TCCPolicy;
@property (readonly, nonatomic) LSExtensionPoint *compatibilityObject;
@property (readonly) unsigned int extensionPointType;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) LSApplicationRecord *parentAppRecord;
@property (readonly) unsigned int platform;
@property (readonly) NSString *version;


+(BOOL)isCurrentProcessAnApplicationExtension;
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
+(id)enumerator;
+(id)enumeratorWithParentApplicationRecord:(id)arg0 ;
+(id)extensionPointRecordForCurrentProcess;
+(void)setExtensionPointRecordForCurrentProcess:(id)arg0 ;
-(id)SDKDictionaryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(id)_compatibilityObjectWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)identifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(id)initWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithIdentifier:(id)arg0 parentAppRecord:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 platform:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 platform:(unsigned int)arg1 parentAppRecord:(id)arg2 error:(*id)arg3 ;
-(id)nameWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(id)parentAppRecordWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(id)versionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(unsigned int)TCCPolicyWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(unsigned int)extensionPointTypeWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(unsigned int)platformWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSExtensionPointData *)arg3 ;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;


@end


#endif