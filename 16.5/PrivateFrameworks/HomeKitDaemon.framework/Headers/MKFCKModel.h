// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKMODEL_H
#define MKFCKMODEL_H

@class NSNumber, NSUUID, NSDate, NSString;


#import "HMDManagedObject.h"

@interface MKFCKModel : HMDManagedObject {
    NSNumber *_canonical;
}


@property (readonly, nonatomic, getter=isFake) BOOL fake;
@property (copy, nonatomic) NSUUID *flags;
@property (readonly, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSUUID *primitiveFlags;
@property (readonly, nonatomic) BOOL shouldSkipValidationDuringImport;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(NSUInteger)cloudStoreTypes;
+(id)appendDefaultPreloadedPropertiesTo:(id)arg0 ;
+(id)canonicalModelForModels:(id)arg0 context:(id)arg1 ;
+(id)createWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)defaultPreloadedProperties;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)logCategory;
+(id)modelWithModelID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
+(id)modelWithObjectID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
+(id)predicateWithModelID:(id)arg0 ;
+(id)predicateWithModelIDs:(id)arg0 ;
+(id)rootKeyPath;
-(BOOL)copyPropertiesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)copyPropertiesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)isDeletedLocallyWithContext:(id)arg0 ;
-(BOOL)validateFlags:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateModelID:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateWriterTimestamp:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateWriterVersion:(*id)arg0 error:(*id)arg1 ;
-(NSInteger)ensureCanonicalModel;
-(id)createLocalModelWithContext:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)fetchEquivalentModels:(*id)arg0 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;
-(id)hmd_debugIdentifier;
-(id)predicateMatchingEquivalentModels;
-(id)redactedDescription;
-(id)relationshipForLocalName:(id)arg0 localModel:(id)arg1 ;
-(void)awakeFromInsert;
-(void)convertToFakeModel;
-(void)didTurnIntoFault;
-(void)willSave;


@end


#endif