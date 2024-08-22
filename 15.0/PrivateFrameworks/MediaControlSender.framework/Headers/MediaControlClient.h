// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLCLIENT_H
#define MEDIACONTROLCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MediaControlClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    *MediaControlClientImp _client;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    id *_eventHandlerBlock;
}




-(id)init;
-(struct MediaControlClientImp *)internalClient;
-(void)checkAuthentication;
-(void)dealloc;
-(void)ensureConnected;
-(void)ensureDisconnected;
-(void)getProperty:(id)arg0 qualifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3 ;
-(void)getSlideshowFeaturesWithOptions:(unsigned int)arg0 completionQueue:(id)arg1 completionBlock:(id)arg2 ;
-(void)getSlideshowInfoWithOptions:(unsigned int)arg0 completionQueue:(id)arg1 completionBlock:(id)arg2 ;
-(void)invalidate;
-(void)performRemoteAction:(id)arg0 withParams:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3 ;
-(void)sendPhotoData:(id)arg0 completionQueue:(id)arg1 completionBlock:(id)arg2 ;
-(void)sendPhotoData:(id)arg0 options:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3 ;
-(void)setEventHandlerQueue:(id)arg0 eventHandlerBlock:(id)arg1 ;
-(void)setHost:(id)arg0 ;
-(void)setPassword:(id)arg0 ;
-(void)setProperty:(id)arg0 qualifier:(id)arg1 value:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
-(void)setSlideshowInfo:(id)arg0 completionQueue:(id)arg1 completionBlock:(id)arg2 ;
-(void)startPresentation:(id)arg0 completionQueue:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif