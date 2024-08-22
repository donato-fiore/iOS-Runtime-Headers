// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC18MAPSSYNCCOLLECTION_H
#define _TTC8MAPSSYNC18MAPSSYNCCOLLECTION_H

@class TtC8MapsSync16MapsSyncBaseItem, NSSet, NSString, NSData;



@interface _TtC8MapsSync18MapsSyncCollection : TtC8MapsSync16MapsSyncBaseItem {
    ? _collectionDescription;
    ? _image;
    ? _imageUrl;
    ? _title;
    ? _places;
    ? _placesUnstored;
}


@property (nonatomic, copy) NSSet *_placesUnstored;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *image;
@property (nonatomic, readonly) NSString *imageUrl;
@property (nonatomic, readonly) NSSet *places;
@property (nonatomic, readonly) NSInteger placesCount;
@property (nonatomic, readonly) NSString *title;


+(id)fetchCollectionForIdentifier:(id)arg0 ;
+(void)deleteUniquelyOwnedCollectionItemsWithCollection:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
+(void)fetchUniquelyOwnedCollectionItemsWithCollection:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(BOOL)attributesEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)copyWithZone:(*void)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)deleteWithCompletion:(id)arg0 ;
-(void)executeOnFirstSave:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif