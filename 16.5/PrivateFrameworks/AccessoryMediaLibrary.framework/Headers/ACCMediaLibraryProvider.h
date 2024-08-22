// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCMEDIALIBRARYPROVIDER_H
#define ACCMEDIALIBRARYPROVIDER_H

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol ACCMediaLibraryProviderDelegateProtocol, OS_dispatch_queue, ACCMediaLibraryXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCMediaLibraryProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories; // ivar: _accessories
@property (weak, nonatomic) NSObject<ACCMediaLibraryProviderDelegateProtocol> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *delegateQ; // ivar: _delegateQ
@property (nonatomic) int lastUpdateType; // ivar: _lastUpdateType
@property (retain, nonatomic) NSMutableDictionary *libraries; // ivar: _libraries
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (retain, nonatomic) NSString *providerUID; // ivar: _providerUID
@property (retain, nonatomic) NSObject<ACCMediaLibraryXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection


-(NSInteger)update:(id)arg0 revision:(id)arg1 content:(id)arg2 accessory:(id)arg3 ;
-(NSInteger)update:(id)arg0 revision:(id)arg1 deleteItem:(NSUInteger)arg2 progress:(unsigned char)arg3 accessory:(id)arg4 ;
-(NSInteger)update:(id)arg0 revision:(id)arg1 deletePlaylist:(NSUInteger)arg2 progress:(unsigned char)arg3 accessory:(id)arg4 ;
-(NSInteger)update:(id)arg0 revision:(id)arg1 item:(id)arg2 progress:(unsigned char)arg3 accessory:(id)arg4 ;
-(NSInteger)update:(id)arg0 revision:(id)arg1 persistentID:(NSUInteger)arg2 type:(int)arg3 updateInfo:(id)arg4 progress:(unsigned char)arg5 accessory:(id)arg6 ;
-(NSInteger)update:(id)arg0 revision:(id)arg1 playlist:(id)arg2 progress:(unsigned char)arg3 accessory:(id)arg4 ;
-(NSInteger)update:(id)arg0 revision:(id)arg1 progress:(unsigned char)arg2 accessory:(id)arg3 ;
-(id)description;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_checkPlaylistContentToSend:(id)arg0 accessory:(id)arg1 ;
-(void)_notifyRemoteOfAvailableLibraries;
-(void)accessoryMediaLibraryAllDetached;
-(void)accessoryMediaLibraryAttached:(id)arg0 windowPerLibrary:(unsigned int)arg1 ;
-(void)accessoryMediaLibraryDetached:(id)arg0 ;
-(void)accessoryMediaLibraryUpdate:(id)arg0 windowPerLibrary:(unsigned int)arg1 ;
-(void)confirmPlaylistContentUpdate:(id)arg0 library:(id)arg1 lastRevision:(id)arg2 ;
-(void)confirmUpdate:(id)arg0 library:(id)arg1 lastRevision:(id)arg2 updateCount:(unsigned int)arg3 ;
-(void)connectToServer;
-(void)dealloc;
-(void)flushUpdates:(id)arg0 accessory:(id)arg1 ;
-(void)notify:(id)arg0 stateChange:(int)arg1 enabled:(BOOL)arg2 ;
-(void)notifyAvailableLibraries:(id)arg0 ;
-(void)playAllSongs:(id)arg0 library:(id)arg1 startItem:(NSUInteger)arg2 ;
-(void)playCollection:(id)arg0 library:(id)arg1 collection:(NSUInteger)arg2 type:(int)arg3 startIndex:(unsigned int)arg4 ;
-(void)playCollection:(id)arg0 library:(id)arg1 collection:(NSUInteger)arg2 type:(int)arg3 startItem:(NSUInteger)arg4 ;
-(void)playCurrentSelection:(id)arg0 library:(id)arg1 ;
-(void)playItems:(id)arg0 library:(id)arg1 itemList:(id)arg2 startIndex:(unsigned int)arg3 ;
-(void)resetUpdate:(id)arg0 accessory:(id)arg1 ;
-(void)startMediaLibraryUpdate:(id)arg0 library:(id)arg1 lastRevision:(id)arg2 mediaItemProperties:(NSUInteger)arg3 playlistProperties:(NSUInteger)arg4 playlistContentStyle:(int)arg5 playlistContentProperties:(NSUInteger)arg6 reqOptions:(NSUInteger)arg7 ;
-(void)stopAllMediaLibraryUpdate:(id)arg0 ;
-(void)stopMediaLibraryUpdate:(id)arg0 library:(id)arg1 ;


@end


#endif