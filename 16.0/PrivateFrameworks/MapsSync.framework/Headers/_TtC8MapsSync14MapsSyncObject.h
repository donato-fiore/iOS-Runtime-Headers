// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC14MAPSSYNCOBJECT_H
#define _TTC8MAPSSYNC14MAPSSYNCOBJECT_H

@class NSDate, NSUUID, NSManagedObjectID;

#import <Foundation/Foundation.h>

#import "_TtC8MapsSync13MapsSyncStore.h"

@interface _TtC8MapsSync14MapsSyncObject : NSObject {
    ? _store;
    ? _managedObjectId;
    ? _propertyLock;
    ? _editBlocks;
    ? _identifier;
    ? _createTime;
    ? _modificationTime;
}


@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, readonly) BOOL isStored;
@property (nonatomic, retain) NSManagedObjectID *managedId;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, readonly) _TtC8MapsSync13MapsSyncStore *store;


+(Class)managedClass;
+(id)findDuplicatesWithContext:(id)arg0 ;
+(id)mergeWithDuplicates:(id)arg0 ;
+(id)strippedMapItemWith:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)getManagedObjectOnContextWithLock:(id)arg0 context:(id)arg1 ;
-(id)init;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 ;
-(id)onDeleteWithManagedObject:(id)arg0 context:(id)arg1 ;
-(void)addEdit:(id)arg0 ;
-(void)flushChanges;
-(void)performEditsOnContextWithLock:(id)arg0 managedObject:(id)arg1 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;
-(void)withPropertyLock:(id)arg0 ;


@end


#endif