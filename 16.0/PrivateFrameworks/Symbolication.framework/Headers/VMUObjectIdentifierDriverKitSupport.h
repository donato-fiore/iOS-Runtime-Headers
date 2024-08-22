// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUOBJECTIDENTIFIERDRIVERKITSUPPORT_H
#define VMUOBJECTIDENTIFIERDRIVERKITSUPPORT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VMUObjectIdentifier.h"

@interface VMUObjectIdentifierDriverKitSupport : NSObject {
    unsigned int _task;
    VMUObjectIdentifier *_objectIdentifier;
    unsigned int _vtableOffsetsCount;
    *NSUInteger _vtableOffsets;
    NSUInteger _vtableOffsetOfLegacyOSObject;
    NSUInteger _vtableOffsetOfRemoteDriverKitOSObject;
    NSArray *_privateFieldsOfRemoteDriverKitOSObject;
    NSUInteger _vtableOffsetOfLocalDriverKitOSObject;
    NSArray *_privateFieldsOfLocalDriverKitOSObject;
}




-(id)_fieldsFromStructureLayout:(struct ? *)arg0 withOffset:(NSUInteger)arg1 ;
-(id)_fieldsOfLegacyOSObject:(id)arg0 ;
-(id)_fieldsOfLocalDriverKitOSObject:(id)arg0 ;
-(id)_fieldsOfOSObject:(id)arg0 startOffset:(NSUInteger)arg1 ;
-(id)_fieldsOfRemoteDriverKitOSObject:(id)arg0 ;
-(id)_labelForDriverKitOSClassLoadInformation:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)_labelForDriverKitOSMetaClass:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)classInfoForDriverKitMemory:(*void)arg0 length:(NSUInteger)arg1 atOffset:(NSUInteger)arg2 translatedIsa:(NSUInteger)arg3 symbol:(struct _CSTypeRef )arg4 ;
-(id)classInfoForDriverKitOSClassScan;
-(id)classInfoForDriverKitOSMetaClass;
-(id)classInfoForDriverKitOSMetaClassPrivate;
-(id)driverKitClassInfoForMemory:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)initWithObjectIdentifier:(id)arg0 ;
-(id)labelForDriverKitMemory:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 class:(id)arg3 ;
-(void)dealloc;


@end


#endif