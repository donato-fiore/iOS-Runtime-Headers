// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCACHEDCURATEDCOLLECTION_H
#define MSCACHEDCURATEDCOLLECTION_H

@class TtC8MapsSync14MapsSyncObject, NSString, NSData, NSDate;



@interface MSCachedCuratedCollection : TtC8MapsSync14MapsSyncObject {
    ? _collectionDescription;
    ? _curatedCollectionIdentifier;
    ? _image;
    ? _imageUrl;
    ? _isTombstone;
    ? _lastFetchedDate;
    ? _lastSignificantChangeDate;
    ? _placesCount;
    ? _positionIndex;
    ? _publisherAttribution;
    ? _resultProviderIdentifier;
    ? _title;
    ? _titleLocale;
}


@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic) NSUInteger curatedCollectionIdentifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) BOOL isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic) int placesCount;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 collectionDescription:(id)arg1 curatedCollectionIdentifier:(NSUInteger)arg2 image:(id)arg3 imageUrl:(id)arg4 isTombstone:(BOOL)arg5 lastFetchedDate:(id)arg6 lastSignificantChangeDate:(id)arg7 placesCount:(int)arg8 positionIndex:(NSInteger)arg9 publisherAttribution:(id)arg10 resultProviderIdentifier:(int)arg11 title:(id)arg12 titleLocale:(id)arg13 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif