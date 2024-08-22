// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBMODEL_H
#define HMBMODEL_H

@class HMFObject, NSString, HMFVersion, NSUUID, NSSet, NSMutableDictionary;
@protocol HMFLogging, HMBModelProperties;


#import "HMBModelContainer.h"

@interface HMBModel : HMFObject <HMFLogging, HMBModelProperties>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *hmbCanonicalType;
@property (readonly, nonatomic) HMFVersion *hmbContainerDataVersion;
@property (retain, nonatomic) HMFVersion *hmbDataVersion; // ivar: _hmbDataVersion
@property (readonly, nonatomic) NSString *hmbDescription;
@property (nonatomic) BOOL hmbExternallyFetched;
@property (readonly, nonatomic) BOOL hmbIgnoreModel; // ivar: _hmbIgnoreModel
@property (readonly, nonatomic) BOOL hmbIsModelGenericRepresentation;
@property (readonly, nonatomic) BOOL hmbIsModelReadOnly;
@property (retain, nonatomic) HMFVersion *hmbMinimumSupportedVersion;
@property (weak, nonatomic) HMBModelContainer *hmbModelContainer; // ivar: _hmbModelContainer
@property (retain, nonatomic) NSUUID *hmbModelID; // ivar: _hmbModelID
@property (retain, nonatomic) NSUUID *hmbParentModelID; // ivar: _hmbParentModelID
@property (retain, nonatomic) NSSet *hmbReadOnlyProperties; // ivar: _hmbReadOnlyProperties
@property (nonatomic) NSUInteger hmbRecordRow; // ivar: _hmbRecordRow
@property (retain, nonatomic) NSMutableDictionary *hmbReserved; // ivar: _hmbReserved
@property (readonly, copy, nonatomic) NSSet *hmbSetExternalProperties;
@property (readonly, copy, nonatomic) NSSet *hmbSetExternalRecordFields;
@property (readonly, nonatomic) NSSet *hmbSetProperties;
@property (retain, nonatomic) NSString *hmbType; // ivar: _hmbType
@property (retain, nonatomic) NSSet *hmbUnavailableProperties; // ivar: _hmbUnavailableProperties
@property (readonly) Class superclass;


+(BOOL)hmbExcludeFromCloudStorage;
+(BOOL)hmbShouldLogPrivateInformation;
+(BOOL)propertyDiffersFrom:(id)arg0 to:(id)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(Class)hmbGenericRepresentation;
+(id)formattedStringForValue:(id)arg0 ;
+(id)hmbExternalProperties;
+(id)hmbExternalRecordFields;
+(id)hmbExternalRecordType;
+(id)hmbModelClassesWithQueries;
+(id)hmbMutableModelClassesWithQueries;
+(id)hmbProperties;
+(id)hmbPropertyNames;
+(id)hmbQueries;
+(id)hmbReadOnlyBefore;
+(id)hmbSchemaHashRoot;
+(id)logCategory;
+(id)shortDescription;
+(void)hmbPrepareQueries;
+(void)hmbResetModelsWithQueries;
-(BOOL)_validateType:(id)arg0 error:(*id)arg1 ;
-(BOOL)hmbIsDifferentFromModel:(id)arg0 differingFields:(*id)arg1 ;
-(BOOL)hmbPropertyIsAvailable:(id)arg0 ;
-(BOOL)hmbPropertyIsExternal:(id)arg0 ;
-(BOOL)hmbPropertyIsReadOnly:(id)arg0 ;
-(BOOL)hmbPropertyWasSet:(id)arg0 ;
-(BOOL)hmbValidForStorage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hmbDefaultValueForPropertyNamed:(id)arg0 ;
-(id)hmbModelByMergingFromModel:(id)arg0 isFromCloud:(BOOL)arg1 error:(*id)arg2 ;
-(id)hmbModelByMergingSetPropertiesFromModel:(id)arg0 ;
-(id)hmbPrepareForStorageLocation:(NSUInteger)arg0 ;
-(id)hmbPropertyNamed:(id)arg0 ;
-(id)hmbPropertyNamed:(id)arg0 isSet:(*BOOL)arg1 ;
-(id)initWithModelID:(id)arg0 parentModelID:(id)arg1 ;
-(id)logIdentifier;
-(id)populateModelWithDictionary:(id)arg0 fromStorageLocation:(NSUInteger)arg1 using:(id)arg2 ;
-(id)prepareForStorageLocation:(NSUInteger)arg0 using:(id)arg1 updatedModelIDs:(id)arg2 error:(*id)arg3 ;
-(id)validateType:(id)arg0 path:(id)arg1 ;
-(void)dumpDebug;
-(void)dumpDebug:(id)arg0 ;
-(void)hmbAssociateWithContainer:(id)arg0 ;
-(void)hmbMergeSetPropertiesFromModel:(id)arg0 ;
-(void)hmbSetProperty:(id)arg0 named:(id)arg1 ;
-(void)hmbUnsetPropertyNamed:(id)arg0 ;


@end


#endif