// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCOLLECTIONITEM_H
#define MSCOLLECTIONITEM_H

@class TtC8MapsSync14MapsSyncObject;



@interface MSCollectionItem : TtC8MapsSync14MapsSyncObject {
    ? _positionIndex;
    ? _collectionChanges;
}


@property (nonatomic) NSInteger positionIndex;


+(Class)managedClass;
-(id)fetchCollections;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 collection:(id)arg1 ;
-(id)initWithStore:(id)arg0 positionIndex:(NSInteger)arg1 ;
-(void)addCollection:(id)arg0 ;
-(void)flushChanges;
-(void)removeCollection:(id)arg0 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif