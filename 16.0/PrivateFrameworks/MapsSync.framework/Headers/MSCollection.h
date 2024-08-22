// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCOLLECTION_H
#define MSCOLLECTION_H

@class TtC8MapsSync14MapsSyncObject, NSString, NSData;



@interface MSCollection : TtC8MapsSync14MapsSyncObject {
    ? _collectionDescription;
    ? _image;
    ? _imageUrl;
    ? _positionIndex;
    ? _title;
    ? _placeChanges;
}


@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSString *title;


+(Class)managedClass;
-(id)fetchPlaces;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 collectionDescription:(id)arg1 image:(id)arg2 imageUrl:(id)arg3 positionIndex:(NSInteger)arg4 title:(id)arg5 ;
-(void)addPlace:(id)arg0 ;
-(void)beforeDeleteWithManaged:(id)arg0 ;
-(void)flushChanges;
-(void)removePlace:(id)arg0 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif