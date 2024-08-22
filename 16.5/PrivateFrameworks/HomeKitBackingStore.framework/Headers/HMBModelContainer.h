// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBMODELCONTAINER_H
#define HMBMODELCONTAINER_H

@class HMFObject, NSMapTable, HMFVersion, NSString;
@protocol HMFLogging, NSMutableCopying, NSCopying, HMBMirrorProtocol;


#import "HMBLocalZone.h"

@interface HMBModelContainer : HMFObject <HMFLogging, NSMutableCopying, NSCopying>

 {
    os_unfair_lock_s _propertyLock;
}


@property (retain, nonatomic) NSMapTable *classReadOnlyVersionCache; // ivar: _classReadOnlyVersionCache
@property (copy, nonatomic) NSMapTable *classToNameTransform; // ivar: _classToNameTransform
@property (retain, nonatomic) NSMapTable *classUnavailableVersionCache; // ivar: _classUnavailableVersionCache
@property (readonly, copy, nonatomic) HMFVersion *dataVersion; // ivar: _dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HMFVersion *legacyDataVersion; // ivar: _legacyDataVersion
@property (readonly, weak, nonatomic) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, weak, nonatomic) NSObject<HMBMirrorProtocol> *mirror; // ivar: _mirror
@property (copy, nonatomic) NSMapTable *nameToClassTransform; // ivar: _nameToClassTransform
@property (retain, nonatomic) NSMapTable *objectPropertyHashLookup; // ivar: _objectPropertyHashLookup
@property (readonly, nonatomic) NSMapTable *queryFieldsCache; // ivar: _queryFieldsCache
@property (readonly) Class superclass;


+(id)allowedTypes;
+(id)decodeAsNSDictionary:(id)arg0 error:(*id)arg1 ;
+(id)decodeAsOPACK:(id)arg0 error:(*id)arg1 ;
+(id)encodeAsNSDictionary:(id)arg0 error:(*id)arg1 ;
+(id)encodeAsOPACK:(id)arg0 error:(*id)arg1 ;
+(id)internalAllowedTypes;
+(id)logCategory;
-(Class)_modelClassFromDictionary:(id)arg0 typeName:(id)arg1 error:(*id)arg2 ;
-(Class)modelClassForTypeName:(id)arg0 ;
-(NSUInteger)bestModelEncodingForStorageLocation:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataFromModel:(id)arg0 encoding:(NSUInteger)arg1 storageLocation:(NSUInteger)arg2 updatedModelIDs:(id)arg3 error:(*id)arg4 ;
-(id)decodePropertyValueFromData:(id)arg0 forProperty:(id)arg1 field:(id)arg2 storageLocation:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)encodePropertyValue:(id)arg0 forProperty:(id)arg1 field:(id)arg2 storageLocation:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithDataVersion:(id)arg0 legacyDataVersion:(id)arg1 ;
-(id)modelFromData:(id)arg0 encoding:(NSUInteger)arg1 storageLocation:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)modelFromData:(id)arg0 encoding:(NSUInteger)arg1 storageLocation:(NSUInteger)arg2 type:(id)arg3 error:(*id)arg4 ;
-(id)modelFromDictionary:(id)arg0 storageLocation:(NSUInteger)arg1 typeName:(id)arg2 error:(*id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)readOnlyVersionsForModelClass:(Class)arg0 ;
-(id)schemaHashForModel:(id)arg0 ;
-(id)typeNameForModelClass:(Class)arg0 ;
-(id)unavailableVersionsForModelClass:(Class)arg0 ;
-(void)updateLocalZone:(id)arg0 ;
-(void)updateMirror:(id)arg0 ;


@end


#endif