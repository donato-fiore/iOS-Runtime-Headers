// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKMODEL_H
#define MKFCKMODEL_H

@class NSUUID, NSString, NSDate;
@protocol HMDCoreDataCloudTransformable;


#import "HMDManagedObject.h"

@interface MKFCKModel : HMDManagedObject <HMDCoreDataCloudTransformable>



@property (readonly, copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSUUID *primitiveConflictResolutionUUID;
@property (copy, nonatomic) NSString *primitiveWriterVersion;
@property (readonly, nonatomic) BOOL shouldSkipValidationDuringImport;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(id)createWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)logCategory;
+(id)modelWithModelID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
+(id)predicateWithModelID:(id)arg0 ;
+(id)predicateWithModelIDs:(id)arg0 ;
-(BOOL)copyPropertiesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)copyPropertiesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)validateConflictResolutionUUID:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateModelID:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateWriterTimestamp:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateWriterVersion:(*id)arg0 error:(*id)arg1 ;
-(id)createLocalModelWithContext:(id)arg0 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;
-(id)hmd_debugIdentifier;
-(id)relationshipForLocalName:(id)arg0 localModel:(id)arg1 ;
-(void)awakeFromInsert;


@end


#endif