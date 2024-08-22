// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAVIDEOCONVERSIONSERVICECLIENT_H
#define PAVIDEOCONVERSIONSERVICECLIENT_H

@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol VideoConversionServiceClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PAVideoConversionServiceClient : NSObject <VideoConversionServiceClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (retain) NSMutableDictionary *pendingRequestIdentifierToProgressMap; // ivar: _pendingRequestIdentifierToProgressMap
@property (retain) NSXPCConnection *serviceConnection; // ivar: _serviceConnection
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)canMarkPendingRequestAsOptionalForProgress:(id)arg0 ;
-(id)convertVideoAtSourceURL:(id)arg0 toDestinationURL:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)convertVideoAtSourceURLCollection:(id)arg0 toDestinationURLCollection:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;
-(void)extractStillImageFromVideoAtSourceURL:(id)arg0 toDestinationURL:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleRequestCompletionForIdentifier:(id)arg0 ;
-(void)invalidateAfterPendingRequestCompletion;
-(void)markPendingRequestAsOptionalForProgress:(id)arg0 ;
-(void)modifyRequestWithIdentifier:(id)arg0 modifications:(id)arg1 ;
-(void)requestStatusWithCompletionHandler:(id)arg0 ;
-(void)setupServiceConnection;
-(void)transitionToInvalidatedState;
-(void)updateProgress:(id)arg0 ;
-(void)ut_invalidateServiceConnection;


@end


#endif