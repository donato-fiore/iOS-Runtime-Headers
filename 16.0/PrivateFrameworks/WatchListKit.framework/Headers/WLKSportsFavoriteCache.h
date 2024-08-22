// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSPORTSFAVORITECACHE_H
#define WLKSPORTSFAVORITECACHE_H

@class NSUserDefaults, NSNumber, NSString;
@protocol WLKSportsFavoriteCaching, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKSportsFavoriteCache : NSObject <WLKSportsFavoriteCaching>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    NSNumber *_DSID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasCache;
-(id)_cacheKeyForAccount;
-(id)_dsid;
-(id)_dsidKey;
-(id)_syncSettingKeyForAccount;
-(id)initWithUserDefaults:(id)arg0 DSID:(id)arg1 ;
-(void)addFavorites:(id)arg0 completion:(id)arg1 ;
-(void)getFavoritesWithCompletion:(id)arg0 ;
-(void)hasFavoritesSyncEnabledKey:(id)arg0 ;
-(void)invalidate;
-(void)isOptedIn:(id)arg0 ;
-(void)removeFavorites:(id)arg0 completion:(id)arg1 ;
-(void)setCache:(id)arg0 completion:(id)arg1 ;
-(void)setOptInStatus:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif