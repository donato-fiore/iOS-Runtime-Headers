// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDCHANGETREE_H
#define HMDCLOUDCHANGETREE_H

@class HMFObject, NSArray, NSMapTable, NSMutableArray, NSSet;



@interface HMDCloudChangeTree : HMFObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (retain, nonatomic) NSMapTable *branchMap; // ivar: _branchMap
@property (readonly, nonatomic) NSMutableArray *cloudChanges;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (readonly, nonatomic) NSMutableArray *invalidCloudChanges;
@property (retain, nonatomic) NSMapTable *objectMap; // ivar: _objectMap
@property (retain, nonatomic) NSMutableArray *objects; // ivar: _objects
@property (readonly, nonatomic) NSArray *objectsWithPotentialChanges;
@property (readonly, nonatomic) NSArray *orphans;
@property (retain, nonatomic) NSMapTable *recordMap; // ivar: _recordMap
@property (retain, nonatomic) NSSet *validRootUUIDs; // ivar: _validRootUUIDs


+(BOOL)modelTypeCanBeOrphaned:(id)arg0 ;
+(id)logCategory;
+(id)shortDescription;
-(id)_findNodeWithRecordMapping:(id)arg0 ;
-(id)_objectForRecordName:(id)arg0 ;
-(id)_objectForUUID:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRootUUIDs:(id)arg0 ;
-(id)objectForRecordName:(id)arg0 ;
-(id)objectForUUID:(id)arg0 ;
-(id)recordMapWithFilter:(id)arg0 ;
-(id)shortDescription;
-(void)_addNode:(id)arg0 ;
-(void)_updateNode:(id)arg0 oldRecordName:(id)arg1 ;
-(void)findAndDeletedChildren;
-(void)findAndMarkOrphanedBranches;
-(void)logChangeTreeWithIndent:(id)arg0 ;
-(void)removeNode:(id)arg0 ;
-(void)updateChange:(id)arg0 ;
-(void)updateModel:(id)arg0 ;
-(void)updateNode:(id)arg0 withCloudRecord:(id)arg1 ;
-(void)updateRecordMapping:(id)arg0 ;


@end


#endif