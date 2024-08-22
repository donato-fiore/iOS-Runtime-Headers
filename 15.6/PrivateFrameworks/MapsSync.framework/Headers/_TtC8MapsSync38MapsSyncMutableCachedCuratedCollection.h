// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC38MAPSSYNCMUTABLECACHEDCURATEDCOLLECTION_H
#define _TTC8MAPSSYNC38MAPSSYNCMUTABLECACHEDCURATEDCOLLECTION_H

@class TtC8MapsSync23MapsSyncMutableBaseItem, NSString, NSData, NSDate;



@interface _TtC8MapsSync38MapsSyncMutableCachedCuratedCollection : TtC8MapsSync23MapsSyncMutableBaseItem {
    ? _proxy;
}


@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic) NSUInteger curatedCollectionIdentifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) BOOL isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic) int placesCount;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif