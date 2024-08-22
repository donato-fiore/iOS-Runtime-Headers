// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDCORESPOTLIGHTCONTACTCACHE_H
#define IMDCORESPOTLIGHTCONTACTCACHE_H

@class NSCache, NSData;

#import <Foundation/Foundation.h>


@interface IMDCoreSpotlightContactCache : NSObject

@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSData *currentHistoryToken; // ivar: _currentHistoryToken


+(id)contactsForVCardAtPath:(id)arg0 ;
+(id)sharedInstance;
+(id)vCardMapURLForContact:(id)arg0 ;
+(id)vCardNameForContact:(id)arg0 ;
+(void)updateAttributes:(id)arg0 withAddressFromContact:(id)arg1 ;
+(void)vCardCoordinateForMapURL:(id)arg0 outLatitude:(*float)arg1 outLongitude:(*float)arg2 ;
-(id)_handlesMatchingContactIdentifier:(id)arg0 ;
-(id)cachedContactForKey:(id)arg0 ;
-(id)init;
-(void)cacheContact:(id)arg0 forKey:(id)arg1 ;
-(void)cacheContactsFromFetchResults:(id)arg0 forAliases:(id)arg1 ;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)dealloc;
-(void)removeCachedContactForKey:(id)arg0 ;
-(void)updateCacheForAliases:(id)arg0 ;


@end


#endif