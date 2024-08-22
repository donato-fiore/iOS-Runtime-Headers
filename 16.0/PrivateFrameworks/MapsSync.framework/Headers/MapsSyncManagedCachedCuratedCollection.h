// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSYNCMANAGEDCACHEDCURATEDCOLLECTION_H
#define MAPSSYNCMANAGEDCACHEDCURATEDCOLLECTION_H

@class NSManagedObject, NSString, NSDate, NSUUID, NSData;



@interface MapsSyncManagedCachedCuratedCollection : NSManagedObject

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) NSInteger curatedCollectionIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) BOOL isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) int placesCount;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif