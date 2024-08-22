// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCMEDIALIBRARYACCESSORY_H
#define ACCMEDIALIBRARYACCESSORY_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACCMediaLibraryProvider.h"

@interface ACCMediaLibraryAccessory : NSObject

@property (readonly, nonatomic) NSString *accessoryUID; // ivar: _accessoryUID
@property (retain, nonatomic) NSMutableDictionary *confirmedRevisionList; // ivar: _confirmedRevisionList
@property (readonly, nonatomic) NSMutableDictionary *libraries; // ivar: _libraries
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue; // ivar: _listQueue
@property (retain, nonatomic) NSMutableDictionary *pendingPlaylistContentUpdates; // ivar: _pendingPlaylistContentUpdates
@property (retain, nonatomic) NSMutableDictionary *pendingUpdates; // ivar: _pendingUpdates
@property (readonly, weak, nonatomic) ACCMediaLibraryProvider *provider; // ivar: _provider
@property (retain, nonatomic) NSMutableDictionary *waitingConfirm; // ivar: _waitingConfirm
@property (nonatomic) unsigned int windowPerLibrary; // ivar: _windowPerLibrary


-(BOOL)_pendingUpdatesAndWaitingConfirmFullForLibrary:(id)arg0 ;
-(BOOL)addPlaylistContentUpdate:(id)arg0 library:(id)arg1 ;
-(BOOL)addUpdate:(id)arg0 library:(id)arg1 ;
-(BOOL)pendingUpdatesAndWaitingConfirmFullForLibrary:(id)arg0 ;
-(NSUInteger)_pendingAndWaitingConfirmUpdatesCountForLibrary:(id)arg0 ;
-(NSUInteger)_pendingPlaylistContentUpdatesCountForLibrary:(id)arg0 ;
-(NSUInteger)pendingAndWaitingConfirmUpdatesCountForLibrary:(id)arg0 ;
-(NSUInteger)pendingPlaylistContentUpdatesCountForLibrary:(id)arg0 ;
-(id)_confirmedRevisionListForLibrary:(id)arg0 createIfNotExist:(BOOL)arg1 ;
-(id)_pendingPlaylistContentUpdatesForLibrary:(id)arg0 createIfNotExist:(BOOL)arg1 ;
-(id)_pendingUpdatesForLibrary:(id)arg0 createIfNotExist:(BOOL)arg1 ;
-(id)_waitingUpdatesForLibrary:(id)arg0 createIfNotExist:(BOOL)arg1 ;
-(id)confirmUpdates:(id)arg0 revision:(id)arg1 count:(unsigned int)arg2 ;
-(id)copyPendingNonContentUpdatesToSendForLibrary:(id)arg0 ;
-(id)copyPendingPlaylistContentUpdatesToSendForLibrary:(id)arg0 ;
-(id)description;
-(id)initWithUID:(id)arg0 windowPerLibrary:(unsigned int)arg1 provider:(id)arg2 ;
-(void)_addConfirmedRevisionForLibrary:(id)arg0 revision:(id)arg1 ;
-(void)_addConfirmedRevisionForLibrary:(id)arg0 revisionsToAdd:(id)arg1 ;
-(void)_addToWaitlistForLibrary:(id)arg0 item:(id)arg1 ;
-(void)_addToWaitlistForLibrary:(id)arg0 list:(id)arg1 ;
-(void)_confirmedRevisionListRemoveLibraryIfEmpty:(id)arg0 ;
-(void)_pendingPlaylistContentUpdatesRemoveLibraryIfEmpty:(id)arg0 ;
-(void)_pendingUpdatesRemoveLibraryIfEmpty:(id)arg0 ;
-(void)_waitingUpdatesRemoveLibraryIfEmpty:(id)arg0 ;
-(void)addLibraryInfo:(id)arg0 ;
-(void)clearAllUpdates;
-(void)clearAllUpdatesForLibrary:(id)arg0 ;
-(void)confirmPlaylistContentUpdates:(id)arg0 revision:(id)arg1 ;
-(void)dealloc;


@end


#endif