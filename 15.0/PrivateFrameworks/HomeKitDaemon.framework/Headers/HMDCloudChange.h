// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDCHANGE_H
#define HMDCLOUDCHANGE_H

@class HMFObject, NSString, NSSet, NSUUID, CKRecord, CKRecordID, NSArray, NSMutableSet;
@protocol HMDBackingStoreChangeObject, HMDBackingStoreRecordMapping;


#import "HMDBackingStoreModelObject.h"
#import "HMDCloudRecord.h"

@interface HMDCloudChange : HMFObject <HMDBackingStoreChangeObject, HMDBackingStoreRecordMapping>



@property (readonly, nonatomic, getter=isAdded) BOOL addChange;
@property (nonatomic) NSUInteger applyType; // ivar: _applyType
@property (readonly, nonatomic) HMDBackingStoreModelObject *change;
@property (nonatomic) NSUInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) HMDCloudRecord *cloudRecord; // ivar: _cloudRecord
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleteChange;
@property (readonly, nonatomic) HMDCloudRecord *deletedCloudRecord; // ivar: _deletedCloudRecord
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDropAfterApply) BOOL dropAfterApply;
@property (readonly, nonatomic, getter=isDropAndDoNotApply) BOOL dropAndDoNotApply;
@property (readonly, nonatomic, getter=isDropStagedAfterApply) BOOL dropStagedAfterApply;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalidChange;
@property (retain, nonatomic) HMDBackingStoreModelObject *objectChange; // ivar: _objectChange
@property (readonly, nonatomic) NSUUID *objectID;
@property (readonly, nonatomic) NSUUID *parentObjectID;
@property (readonly, nonatomic) NSUUID *parentUuid;
@property (readonly, nonatomic, getter=isPushAfterApply) BOOL pushAfterApply;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) NSArray *rowIDs;
@property (readonly, nonatomic) NSMutableSet *rowIDsSet; // ivar: _rowIDsSet
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic, getter=isUpdated) BOOL updateChange;
@property (readonly, nonatomic) NSUUID *uuid;


+(id)shortDescription;
-(id)_initWithObjectChange:(id)arg0 cloudObjectRecord:(id)arg1 ;
-(id)init;
-(id)initWithCloudObjectRecord:(id)arg0 ;
-(id)initWithObjectChange:(id)arg0 ;
-(id)shortDescription;
-(void)forceChangeToDelete;
-(void)forceChangeToInvalid;
-(void)replayChange:(id)arg0 stagedChange:(id)arg1 ;
-(void)updateChangeWithRecord:(id)arg0 ;
-(void)updateCloudRecord:(id)arg0 ;
-(void)updateDeletedCloudRecord:(id)arg0 ;
-(void)updateWithObjectChange:(id)arg0 ;


@end


#endif