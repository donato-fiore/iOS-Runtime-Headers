// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHMOMENT_H
#define PHMOMENT_H

@class NSDate, NSString;


#import "PHAssetCollection.h"

@interface PHMoment : PHAssetCollection

@property (readonly, nonatomic) float aggregationScore; // ivar: _aggregationScore
@property (readonly, nonatomic) CGFloat approximateLatitude; // ivar: _approximateLatitude
@property (readonly, nonatomic) CGFloat approximateLongitude; // ivar: _approximateLongitude
@property (readonly, nonatomic) CGFloat gpsHorizontalAccuracy; // ivar: _gpsHorizontalAccuracy
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (nonatomic) unsigned short processedLocation; // ivar: _processedLocation
@property (readonly, nonatomic) NSString *processedLocationTypeString;
@property (readonly, nonatomic) NSDate *representativeDate; // ivar: _representativeDate
@property (readonly, nonatomic) unsigned short sharingComposition; // ivar: _sharingComposition
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) int timeZoneOffset; // ivar: _timeZoneOffset
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;


+(BOOL)managedObjectSupportsSharingComposition;
+(BOOL)managedObjectSupportsTrashedState;
+(id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg0 photoLibrary:(id)arg1 ;
+(id)entityKeyMap;
+(id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentUUIDByAssetUUIDForAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchPredicateForSharingFilter:(unsigned short)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)canShowAvalancheStacks;
-(BOOL)collectionHasFixedOrder;
-(BOOL)hasLocationInfo;
-(Class)changeRequestClass;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedLocationNames;
-(id)localizedSubtitle;
-(id)localizedTitle;
-(void)_cacheLocationWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;


@end


#endif