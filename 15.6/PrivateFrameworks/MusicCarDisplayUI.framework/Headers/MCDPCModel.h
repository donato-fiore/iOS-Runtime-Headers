// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCDPCMODEL_H
#define MCDPCMODEL_H

@class NSString, NSMutableDictionary, MPWeakTimer, NSIndexPath;
@protocol MCDNowPlayingContentManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCDPlayableContentPlaybackManager.h"
#import "MCDPCItem.h"

@interface MCDPCModel : NSObject <MCDNowPlayingContentManagerDelegate>



@property (readonly, nonatomic) NSString *appTitle;
@property (retain, nonatomic) NSMutableDictionary *beginLoadingBlocks; // ivar: _beginLoadingBlocks
@property (retain, nonatomic) MPWeakTimer *beginLoadingTimeoutTimer; // ivar: _beginLoadingTimeoutTimer
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) id *containerCompletion; // ivar: _containerCompletion
@property (nonatomic, getter=isCurrentPlayingApp) BOOL currentPlayingApp; // ivar: _currentPlayingApp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinishInitialLoad; // ivar: _didFinishInitialLoad
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSMutableDictionary *items; // ivar: _items
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteItemQueue; // ivar: _mediaRemoteItemQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteNotificationQueue; // ivar: _mediaRemoteNotificationQueue
@property (retain, nonatomic) MCDPlayableContentPlaybackManager *playableContentPlaybackManager; // ivar: _playableContentPlaybackManager
@property (copy, nonatomic) id *playbackCompletion; // ivar: _playbackCompletion
@property (retain, nonatomic) MPWeakTimer *playbackProgressTimeoutTimer; // ivar: _playbackProgressTimeoutTimer
@property (readonly, nonatomic) MCDPCItem *rootItem; // ivar: _rootItem
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (nonatomic) unsigned int supportedAPIMask; // ivar: _supportedAPIMask


-(id)_errorForNotification:(id)arg0 ;
-(id)containerForRoot;
-(id)initWithBundleID:(id)arg0 ;
-(id)itemsFromMRContentItems:(id)arg0 ;
-(void)_browsableContentDidRegisterNotification:(id)arg0 ;
-(void)_contentItemsUpdated:(id)arg0 ;
-(void)_dataSourceInvalidated:(id)arg0 ;
-(void)_finishBeginLoadingNotification:(id)arg0 ;
-(void)_finishPlaybackNotification:(id)arg0 ;
-(void)_invalidateBeginLoadingTimeoutTimer;
-(void)_invalidatePlaybackProgressTimeoutTimer;
-(void)_nowPlayingDidChangeNotification:(id)arg0 ;
-(void)_registerForClientContent;
-(void)_registerNotifications;
-(void)_setupBeginLoadingTimeoutTimerWithCompletion:(id)arg0 ;
-(void)_setupPlaybackProgressTimeoutTimerWithCompletion:(id)arg0 ;
-(void)beginLoadingItemAtIndexPath:(id)arg0 completion:(id)arg1 ;
-(void)contentManager:(id)arg0 itemDidChange:(id)arg1 response:(id)arg2 ;
-(void)dealloc;
-(void)getChildrenAtIndexPath:(id)arg0 inRange:(struct _NSRange )arg1 completion:(id)arg2 ;
-(void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg0 withCompletion:(id)arg1 ;
-(void)getCountOfChildrenAtIndexPath:(id)arg0 withCompletion:(id)arg1 ;
-(void)getNowPlayingIdentifiersWithCompletion:(id)arg0 ;
-(void)initiatePlaybackAtIndexPath:(id)arg0 completion:(id)arg1 ;


@end


#endif