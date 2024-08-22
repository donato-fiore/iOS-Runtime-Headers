// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYLINKCONTEXTCLIENT_H
#define SYLINKCONTEXTCLIENT_H

@class NSXPCConnection, NSMutableSet, NSString;
@protocol SYLinkContextClientProtocol, OS_dispatch_queue, SYLinkContextClientDelegate;

#import <Foundation/Foundation.h>

#import "SYNotesActivationObserver.h"

@interface SYLinkContextClient : NSObject <SYLinkContextClientProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue; // ivar: __clientQueue
@property (retain, nonatomic) NSXPCConnection *_connection; // ivar: __connection
@property (readonly, nonatomic) BOOL _forTesting; // ivar: __forTesting
@property (retain, nonatomic) SYNotesActivationObserver *_notesObserver; // ivar: __notesObserver
@property (readonly, nonatomic) NSMutableSet *_pendingCreateLinkCompletionBlocks; // ivar: __pendingCreateLinkCompletionBlocks
@property (readonly, nonatomic) NSMutableSet *_pendingFetchLinkCompletionBlocks; // ivar: __pendingFetchLinkCompletionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SYLinkContextClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *testingShouldSendCreateLinkRequest; // ivar: _testingShouldSendCreateLinkRequest


-(id)_linkContextDictionariesFromDataArray:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initForTesting:(BOOL)arg0 ;
-(void)_configureConnectionAndResume;
-(void)_createConnectionIfNeeded;
-(void)_invalidateConnection;
-(void)_processFetchLinkContextsRequestForUserActivity:(id)arg0 serviceProxy:(id)arg1 completion:(id)arg2 ;
-(void)_sendInitialMessage;
-(void)_sendRequestToCreateLinkWithContentItemData:(id)arg0 preferNewDocument:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateObserverAndCreateConnectionIfNeeded;
-(void)createAndShowContextualLinkWithUserActivity:(id)arg0 linkPreviewMetadata:(id)arg1 preferNewDocument:(BOOL)arg2 completion:(id)arg3 ;
-(void)createConnectionWithEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)fetchLinkContextsForUserActivity:(id)arg0 completion:(id)arg1 ;
-(void)userDidRemoveContentItemDatas:(id)arg0 ;
-(void)userEditDidAddContentItemDatas:(id)arg0 ;
-(void)userWillAddLinkWithActivityData:(id)arg0 completion:(id)arg1 ;


@end


#endif