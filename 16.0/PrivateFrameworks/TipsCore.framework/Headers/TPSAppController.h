// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSAPPCONTROLLER_H
#define TPSAPPCONTROLLER_H

@class NSUserDefaults, NSDictionary, NSArray, NSHashTable, NSError, NSMutableArray;

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
@property (retain, nonatomic) NSDictionary *collectionSectionMap; // ivar: _collectionSectionMap
@property (retain, nonatomic) NSArray *collectionSections; // ivar: _collectionSections
@property (retain, nonatomic) NSArray *collections; // ivar: _collections
@property (nonatomic) BOOL contentHasLoaded; // ivar: _contentHasLoaded
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (retain, nonatomic) TPSCollection *featuredCollection; // ivar: _featuredCollection
@property (retain, nonatomic) TPSFullTipContentManager *fullTipContentManager; // ivar: _fullTipContentManager
@property (retain, nonatomic) NSError *lastFetchError; // ivar: _lastFetchError
@property (retain, nonatomic) NSMutableArray *savedTipIdentifiers; // ivar: _savedTipIdentifiers
@property (retain, nonatomic) TPSCollection *savedTipsCollection; // ivar: _savedTipsCollection
@property (retain, nonatomic) NSDictionary *tipMap; // ivar: _tipMap
@property (readonly, nonatomic) NSArray *tips;
@property (nonatomic) BOOL updatingContent; // ivar: _updatingContent
@property (retain, nonatomic) NSArray *userGuides; // ivar: _userGuides


+(id)sharedInstance;
-(BOOL)isAccessoriesSection:(id)arg0 ;
-(BOOL)isAppleWatchSection:(id)arg0 ;
-(BOOL)isExploreHardwareSection:(id)arg0 ;
-(BOOL)isTipSavedForIdentifier:(id)arg0 ;
-(id)assetConfigurationForAssets:(id)arg0 language:(id)arg1 userInterfaceStyle:(NSInteger)arg2 assetFileInfoManager:(id)arg3 ;
-(id)collectionForIdentifier:(id)arg0 ;
-(id)collectionIdentifierForTipIdentifier:(id)arg0 ;
-(id)collectionSectionForIdentifier:(id)arg0 ;
-(id)collectionStatusForCollection:(id)arg0 ;
-(id)createSavedTipsCollection:(id)arg0 ;
-(id)delegateEnumerator;
-(id)init;
-(id)tipForIdentifier:(id)arg0 ;
-(id)tipsForCollection:(id)arg0 ;
-(id)tipsForCollectionIdentifier:(id)arg0 ;
-(id)updateUserGuides;
-(void)addDelegate:(id)arg0 ;
-(void)collectionIdentifierViewed:(id)arg0 ;
-(void)contentWillUpdate;
-(void)dealloc;
-(void)fetchAssetsWithAssetsConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)networkStateDidChange:(BOOL)arg0 ;
-(void)reloadAppGroupDefaults;
-(void)removeDelegate:(id)arg0 ;
-(void)removeNotificationForIdentifier:(id)arg0 ;
-(void)tipViewed:(id)arg0 collectionIdentifier:(id)arg1 ;
-(void)toggleTipSavedForIdentifier:(id)arg0 ;
-(void)updateContent;
-(void)updateSavedTipsContent;


@end


#endif