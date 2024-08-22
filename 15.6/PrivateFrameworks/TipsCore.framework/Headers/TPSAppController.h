// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSAPPCONTROLLER_H
#define TPSAPPCONTROLLER_H

@class NSUserDefaults, NSDictionary, NSArray, NSHashTable, NSError;

#import <Foundation/Foundation.h>

#import "TPSAssetSizes.h"
#import "TPSCollection.h"
#import "TPSFullTipContentManager.h"

@interface TPSAppController : NSObject

@property (nonatomic) BOOL alwaysShowIntro; // ivar: _alwaysShowIntro
@property (retain, nonatomic) NSUserDefaults *appGroupDefaults; // ivar: _appGroupDefaults
@property (nonatomic) BOOL appInBackground; // ivar: _appInBackground
@property (retain, nonatomic) TPSAssetSizes *assetSizes; // ivar: _assetSizes
@property (retain, nonatomic) NSDictionary *collectionMap; // ivar: _collectionMap
@property (retain, nonatomic) NSArray *collections; // ivar: _collections
@property (nonatomic) BOOL contentHasLoaded; // ivar: _contentHasLoaded
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (retain, nonatomic) TPSCollection *featuredCollection; // ivar: _featuredCollection
@property (retain, nonatomic) TPSFullTipContentManager *fullTipContentManager; // ivar: _fullTipContentManager
@property (nonatomic) BOOL ignoreFeaturedCollection; // ivar: _ignoreFeaturedCollection
@property (retain, nonatomic) NSError *lastFetchError; // ivar: _lastFetchError
@property (retain, nonatomic) NSDictionary *tipMap; // ivar: _tipMap
@property (readonly, nonatomic) NSArray *tips;
@property (nonatomic) BOOL updatingContent; // ivar: _updatingContent


+(id)sharedInstance;
-(id)assetConfigurationForAssets:(id)arg0 language:(id)arg1 userInterfaceStyle:(NSInteger)arg2 viewMode:(NSInteger)arg3 ;
-(id)collectionForIdentifier:(id)arg0 ;
-(id)collectionStatusForCollection:(id)arg0 ;
-(id)init;
-(id)tipForIdentifier:(id)arg0 ;
-(id)tipsForCollection:(id)arg0 ;
-(id)tipsForCollectionIdentifier:(id)arg0 ;
-(id)topFeatureCollectionFromCollections:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)collectionIdentifierViewed:(id)arg0 ;
-(void)contentWillUpdate;
-(void)dealloc;
-(void)networkStateDidChange:(BOOL)arg0 ;
-(void)reloadAppGroupDefaults;
-(void)removeDelegate:(id)arg0 ;
-(void)removeNotificationForIdentifier:(id)arg0 ;
-(void)tipIdentifierViewed:(id)arg0 ;
-(void)updateContent;


@end


#endif