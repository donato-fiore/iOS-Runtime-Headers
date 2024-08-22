// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSLOCATIONCACHE_H
#define CLSLOCATIONCACHE_H

@class NSPredicate;


#import "CLSDBCache.h"

@interface CLSLocationCache : CLSDBCache {
    NSPredicate *_entryPredicateWithContactsPostalAddressTemplate;
    NSPredicate *_entryPredicateWithAddressBookDictionaryTemplate;
    NSPredicate *_entryPredicateWithCoordinateTemplate;
    NSPredicate *_entryPredicateWithAddressTemplate;
    NSPredicate *_entryPredicateWithMUID;
}




+(BOOL)cachedRegion:(id)arg0 isMatchingOtherRegion:(id)arg1 ;
+(id)defaultCacheName;
-(BOOL)hasCoordinate:(struct CLLocationCoordinate2D )arg0 withHorizontalAccuracy:(CGFloat)arg1 ;
-(BOOL)hasRegion:(id)arg0 ;
-(id)_insertManagedPlacemarkForLitePlacemark:(id)arg0 inContext:(id)arg1 ;
-(id)_insertManagedPlacemarksForLitePlacemarks:(id)arg0 inContext:(id)arg1 ;
-(id)_litePlacemarkFromManagedPlacemark:(id)arg0 ;
-(id)_litePlacemarksFromManagedPlacemarks:(id)arg0 ;
-(id)_stringifyAddressDictionaryValues:(id)arg0 ;
-(id)_stringifyCircularRegionValue:(id)arg0 ;
-(id)_stringifyPostalAddress:(id)arg0 ;
-(id)dataModelName;
-(id)fetchPlacemarkForLocation:(id)arg0 withQueryAccuracy:(CGFloat)arg1 ;
-(id)initWithDiskCacheName:(id)arg0 ;
-(id)nearestEntryForCoordinate:(struct CLLocationCoordinate2D )arg0 entries:(id)arg1 ;
-(id)placemarkForMUID:(NSUInteger)arg0 ;
-(id)placemarksForAddressDictionary:(id)arg0 ;
-(id)placemarksForLocation:(id)arg0 ;
-(id)placemarksForLocation:(id)arg0 withQueryAccuracy:(CGFloat)arg1 ;
-(id)placemarksForLocationAddress:(id)arg0 ;
-(id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 withHorizontalAccuracy:(CGFloat)arg1 ;
-(id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 withHorizontalAccuracy:(CGFloat)arg1 queryAccuracy:(CGFloat)arg2 ;
-(id)placemarksForPostalAddress:(id)arg0 ;
-(id)predicateForCoordinate:(struct CLLocationCoordinate2D )arg0 withHorizontalAccuracy:(CGFloat)arg1 ;
-(id)predicateForCoordinate:(struct CLLocationCoordinate2D )arg0 withHorizontalAccuracy:(CGFloat)arg1 queryAccuracy:(CGFloat)arg2 ;
-(void)_setPlacemarks:(id)arg0 forEntryWithPredicate:(id)arg1 entrySetupBlock:(id)arg2 ;
-(void)insertBatchesOfPlacemarks:(id)arg0 forLocations:(id)arg1 ;
-(void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg0 ;
-(void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 withHorizontalAccuracy:(CGFloat)arg1 ;
-(void)invalidateCacheForMUID:(NSUInteger)arg0 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(CGFloat)arg0 ;
-(void)setPlacemark:(id)arg0 forMUID:(NSUInteger)arg1 ;
-(void)setPlacemarks:(id)arg0 forAddressDictionary:(id)arg1 ;
-(void)setPlacemarks:(id)arg0 forCLLocation:(id)arg1 ;
-(void)setPlacemarks:(id)arg0 forLocation:(id)arg1 ;
-(void)setPlacemarks:(id)arg0 forLocationAddress:(id)arg1 ;
-(void)setPlacemarks:(id)arg0 forLocationCoordinate:(struct CLLocationCoordinate2D )arg1 withHorizontalAccuracy:(CGFloat)arg2 ;
-(void)setPlacemarks:(id)arg0 forPostalAddress:(id)arg1 ;


@end


#endif