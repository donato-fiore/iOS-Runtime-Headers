// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC31MAPSSYNCCACHEDCURATEDCOLLECTION_H
#define _TTC8MAPSSYNC31MAPSSYNCCACHEDCURATEDCOLLECTION_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString, NSData, NSDate;


#import "_TtC8MapsSync19MapsSyncDataSession.h"

@interface _TtC8MapsSync31MapsSyncCachedCuratedCollection : TtC8MapsSync16MapsSyncBaseItem {
    ? _collectionDescription;
    ? _image;
    ? _imageUrl;
    ? _title;
    ? _curatedCollectionIdentifier;
    ? _isTombstone;
    ? _lastFetchedDate;
    ? _lastSignificantChangeDate;
    ? _placesCount;
    ? _publisherAttribution;
    ? _titleLocale;
    ? _resultProviderIdentifier;
}


@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) NSUInteger curatedCollectionIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger identifierHash;
@property (nonatomic, readonly) NSData *image;
@property (nonatomic, readonly) NSString *imageUrl;
@property (nonatomic, readonly) BOOL isTombstone;
@property (nonatomic, readonly) NSDate *lastFetchedDate;
@property (nonatomic, readonly) NSDate *lastSignificantChangeDate;
@property (nonatomic, readonly) int placesCount;
@property (nonatomic, readonly) NSString *publisherAttribution;
@property (nonatomic, readonly) int resultProviderIdentifier;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *titleLocale;


+(void)fetch:(NSInteger)arg0 sort:(NSInteger)arg3 ascending:(BOOL)arg4 completion:(id)arg5 ;
+(void)fetchWithCuratedCollection:(id)arg0 completion:(id)arg1 ;
+(void)fetchWithCuratedCollections:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
+(void)fetchWithHistoryCuratedCollection:(id)arg0 completion:(id)arg1 ;
+(void)fetchWithHistoryCuratedCollections:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithCuratedCollectionIdentifier:(NSUInteger)arg0 ;
-(id)initWithCuratedCollectionIdentifier:(NSUInteger)arg0 resultProviderIdentifier:(int)arg1 ;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif