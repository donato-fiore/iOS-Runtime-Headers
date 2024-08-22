// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMSONGLIBRARY_H
#define FMSONGLIBRARY_H

@class NSMutableSet, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FlexCloudManager.h"
#import "FlexReachability.h"

@interface FMSongLibrary : NSObject

@property (retain, nonatomic) NSMutableSet *assetsInFlight; // ivar: _assetsInFlight
@property (retain, nonatomic) NSArray *bundledSongs; // ivar: _bundledSongs
@property (retain, nonatomic) FlexCloudManager *cloudManager; // ivar: _cloudManager
@property (nonatomic) BOOL contactedCloud; // ivar: _contactedCloud
@property (retain, nonatomic) FlexReachability *flexReachability; // ivar: _flexReachability
@property (nonatomic) NSInteger networkStatus; // ivar: _networkStatus
@property (readonly, nonatomic) BOOL networkingIsDisabled; // ivar: _networkingIsDisabled
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSMutableArray *songs; // ivar: _songs
@property (retain, nonatomic) NSMutableDictionary *songsByUID; // ivar: _songsByUID


-(BOOL)supportForCloud;
-(id)_registerSongs:(id)arg0 ;
-(id)fetchSongWithUID:(id)arg0 ;
-(id)fetchSongsWithOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)registerSongBundleAtPath:(id)arg0 ;
-(void)_createCloudManager;
-(void)_downloadProgressChanged:(id)arg0 ;
-(void)_loadBundledSongs;
-(void)_loadCachedSongs;
-(void)_notifySongDownloadInProgressChanged:(BOOL)arg0 ;
-(void)_notifySongsChanged:(id)arg0 ;
-(void)_setupReachability;
-(void)_updateFromCloud;
-(void)cancelDownloadOfAllAssets;
-(void)dealloc;
-(void)networkStatusChanged:(id)arg0 ;
-(void)purgeAllLocalCachedAssetsWithIDs:(id)arg0 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg0 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg0 withOptions:(id)arg1 ;
-(void)unregisterSongWithID:(id)arg0 ;


@end


#endif