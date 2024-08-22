// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC22MAPSSYNCCOLLECTIONITEM_H
#define _TTC8MAPSSYNC22MAPSSYNCCOLLECTIONITEM_H

@class TtC8MapsSync16MapsSyncBaseItem, NSSet;



@interface _TtC8MapsSync22MapsSyncCollectionItem : TtC8MapsSync16MapsSyncBaseItem {
    ? _collections;
}


@property (nonatomic, readonly) NSSet *collections;
@property (nonatomic, readonly) BOOL requiresCollection;


+(id)fetchCollectionItemForIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)copyWithZone:(*void)arg0 ;
-(id)initWithCollection:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)executeOnFirstSave:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif