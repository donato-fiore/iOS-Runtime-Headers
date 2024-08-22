// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC29MAPSSYNCCOLLECTIONTRANSITITEM_H
#define _TTC8MAPSSYNC29MAPSSYNCCOLLECTIONTRANSITITEM_H

@class TtC8MapsSync22MapsSyncCollectionItem, NSString, NSData;



@interface _TtC8MapsSync29MapsSyncCollectionTransitItem : TtC8MapsSync22MapsSyncCollectionItem {
    ? _transitLineStorage;
    ? _muid;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUInteger muid;
@property (nonatomic, readonly) BOOL requiresCollection;
@property (nonatomic, readonly) NSData *transitLineStorageData;


+(id)fetchCollectionTransitItemForIdentifier:(id)arg0 ;
-(BOOL)isDuplicateOfOther:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithCollection:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif