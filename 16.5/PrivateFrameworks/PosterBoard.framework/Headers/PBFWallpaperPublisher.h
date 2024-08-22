// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFWALLPAPERPUBLISHER_H
#define PBFWALLPAPERPUBLISHER_H

@class PRSWallpaperPublisher, NSMutableDictionary, NSString;
@protocol PRSWallpaperPublisherDelegate, PBFWallpaperPublisherDelegate;

#import <Foundation/Foundation.h>


@interface PBFWallpaperPublisher : NSObject <PRSWallpaperPublisherDelegate>

 {
    PRSWallpaperPublisher *_wallpaperPublisher;
    PRSServerPosterPath" _paths;
    PRSServerPosterPath" _lastSentPaths;
    NSMutableDictionary *_pathsByUUID;
    NSMutableDictionary *_isPairedByUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PBFWallpaperPublisherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updatePath:(id)arg0 addingIfNotExists:(BOOL)arg1 ;
-(NSUInteger)_update;
-(id)init;
-(void)_compact;
-(void)_updateSelectedLockPath:(id)arg0 selectedHomePath:(id)arg1 activeLockPath:(id)arg2 activeHomePath:(id)arg3 ;
-(void)activateWithSelectedLockPath:(id)arg0 selectedHomePath:(id)arg1 activeLockPath:(id)arg2 activeHomePath:(id)arg3 recentlyChanged:(BOOL)arg4 ;
-(void)noteSnapshotUpdateForPath:(id)arg0 snapshotType:(id)arg1 ;
-(void)updateHomePath:(id)arg0 matchingLockPath:(id)arg1 ;
-(void)updatePath:(id)arg0 ;
-(void)updateSelectedLockPath:(id)arg0 selectedHomePath:(id)arg1 activeLockPath:(id)arg2 activeHomePath:(id)arg3 ;
-(void)wallpaperPublisherDidReceiveObserverConnection;


@end


#endif