// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTOREMODELOBJECT_H
#define HMDBACKINGSTOREMODELOBJECT_H

@class HMFObject, NSMutableDictionary, HMFVersion, CKRecord, NSString, NSSet, NSUUID;
@protocol HMFLogging, NSCopying, HMDBackingStoreObjectProtocol;



@interface HMDBackingStoreModelObject : HMFObject <HMFLogging, NSCopying>

 {
    NSMutableDictionary *_reserved;
}


@property (readonly, nonatomic) HMFVersion *bsoDataVersion; // ivar: _bsoDataVersion
@property BOOL bsoDataVersionOverride; // ivar: _bsoDataVersionOverride
@property (weak, nonatomic) NSObject<HMDBackingStoreObjectProtocol> *bsoDelegate; // ivar: _bsoDelegate
@property (readonly, nonatomic) BOOL bsoIgnoreModel;
@property (copy, nonatomic) HMFVersion *bsoIgnoredBefore;
@property (readonly) NSUInteger bsoLogRowID; // ivar: _bsoLogRowID
@property (retain, nonatomic) CKRecord *bsoRecord; // ivar: _bsoRecord
@property (retain, nonatomic) NSString *bsoType; // ivar: _bsoType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isGenericRepresentation) BOOL isGenericRepresentation;
@property (readonly, nonatomic, getter=isReadOnly) BOOL isReadOnly;
@property (nonatomic) NSUInteger objectChangeType; // ivar: _objectChangeType
@property (retain, nonatomic) NSUUID *parentUUID; // ivar: _parentUUID
@property (readonly, nonatomic, getter=isReplayable) BOOL replayable;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(Class)backedObjectClass;
+(Class)genericRepresentation;
+(id)bsoSchemaHash;
+(id)formatValue:(id)arg0 ;
+(id)logCategory;
+(id)objectFromCloud:(id)arg0 error:(*id)arg1 ;
+(id)objectFromData:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)objectFromData:(id)arg0 encoding:(NSUInteger)arg1 record:(id)arg2 error:(*id)arg3 ;
+(id)objectFromData:(id)arg0 encoding:(NSUInteger)arg1 rowID:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)objectFromDictionaryData:(id)arg0 error:(*id)arg1 ;
+(id)objectFromDictionaryData:(id)arg0 type:(id)arg1 error:(*id)arg2 ;
+(id)properties;
+(id)readonlyBefore;
+(id)schemaHashRoot;
-(BOOL)_validateType:(id)arg0 error:(*id)arg1 ;
-(BOOL)diff:(id)arg0 differingFields:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)merge:(id)arg0 error:(*id)arg1 ;
-(BOOL)propertyIsAvailable:(id)arg0 ;
-(BOOL)propertyIsReadOnly:(id)arg0 ;
-(BOOL)propertyWasSet:(id)arg0 ;
-(BOOL)validForStorage;
-(id)backedObjectWithParent:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugString:(BOOL)arg0 ;
-(id)debugString:(BOOL)arg0 prefix:(id)arg1 ;
-(id)defaultValueForPropertyNamed:(id)arg0 isSet:(*BOOL)arg1 ;
-(id)encodeAsNSDictionaryFor:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)encodeFor:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)encodeForCloud:(*id)arg0 ;
-(id)encodeWithEncoding:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)encodeWithEncoding:(NSUInteger)arg0 for:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)encodeWithError:(*id)arg0 ;
-(id)initWithObjectChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 parentUUID:(id)arg1 ;
-(id)initWithVersion:(id)arg0 changeType:(NSUInteger)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(id)logIdentifier;
-(id)merge:(id)arg0 ;
-(id)merge:(id)arg0 from:(NSUInteger)arg1 ;
-(id)prepareFor:(NSUInteger)arg0 ;
-(id)setProperties;
-(id)typeNameForDebug;
-(id)validateType:(id)arg0 path:(id)arg1 ;
-(void)clearVersionOverride;
-(void)dumpDebug;
-(void)dumpDebug:(id)arg0 ;
-(void)dumpWithVerbosity:(BOOL)arg0 prefix:(id)arg1 logType:(unsigned char)arg2 ;
-(void)setPropertyIfNotNil:(id)arg0 named:(id)arg1 ;


@end


#endif