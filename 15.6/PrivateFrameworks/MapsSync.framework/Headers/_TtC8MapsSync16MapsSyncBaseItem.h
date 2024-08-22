// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC16MAPSSYNCBASEITEM_H
#define _TTC8MAPSSYNC16MAPSSYNCBASEITEM_H

@class TtC8MapsSync21MapsSyncObjectWrapper, NSDate, NSUUID, NSManagedObjectContext, NSString;



@interface _TtC8MapsSync16MapsSyncBaseItem : TtC8MapsSync21MapsSyncObjectWrapper {
    ? _identifier;
    ? _createTime;
    ? _modificationTime;
    ? _editBlocks;
    ? _editBlocksLock;
    ? _saveObjectSignpost;
}


@property (nonatomic, copy) NSDate *_createTime;
@property (nonatomic, copy) NSUUID *_identifier;
@property (nonatomic, copy) NSDate *_modificationTime;
@property (nonatomic) NSInteger _positionIndex; // ivar: _positionIndex
@property (nonatomic, retain) NSManagedObjectContext *_readContext; // ivar: _readContext
@property (nonatomic, readonly) NSDate *createTime;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDate *modificationTime;
@property (nonatomic, readonly) NSInteger positionIndex;


+(id)_callbackQueue;
+(id)_queue;
-(BOOL)isDuplicateOfOther:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)callCleanInObjc:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(id)mutableObject:(id)arg0 ;
-(id)performEditsWithoutSavingWithCompletion:(id)arg0 ;
-(id)validate;
-(void)addEditWithBlock:(id)arg0 ;
-(void)commitEditsWithCompletion:(id)arg0 ;
-(void)deleteWithCompletion:(id)arg0 ;
-(void)executeOnFirstSave:(id)arg0 ;
-(void)persistObject:(id)arg0 saveContext:(BOOL)arg1 completion:(id)arg2 ;
-(void)setPropertiesWithObject:(id)arg0 ;
-(void)setReadContextWithContext:(id)arg0 ;


@end


#endif