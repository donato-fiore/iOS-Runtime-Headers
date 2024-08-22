// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVDIRECTUPLOADQUEUE_H
#define SSVDIRECTUPLOADQUEUE_H

@class NSHashTable, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSVDirectUploadQueue : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    int _daemonLaunchToken;
    SSXPCConnection *_inboundConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    SSXPCConnection *_outboundConnection;
    NSArray *_uploadKinds;
    NSMutableArray *_uploads;
}


@property (readonly, copy) NSArray *uploadKinds;


-(id)_outboundConnection;
-(id)init;
-(id)initWithUploadKinds:(id)arg0 ;
-(void)_establishInboundConnection;
-(void)_handleAddUploadsMessage:(id)arg0 ;
-(void)_handleChangeUploadsMessage:(id)arg0 ;
-(void)_handleInboundMessage:(id)arg0 connection:(id)arg1 ;
-(void)_handleRemoveUploadsMessage:(id)arg0 ;
-(void)_sendObserversUploadsDidChange;
-(void)_sendSimpleMessage:(id)arg0 completionBlock:(id)arg1 ;
-(void)addUploadObserver:(id)arg0 ;
-(void)cancelAllUploadsWithCompletionBlock:(id)arg0 ;
-(void)cancelUploads:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)getUploadsWithCompletionBlock:(id)arg0 ;
-(void)pauseAllUploadsWithCompletionBlock:(id)arg0 ;
-(void)pauseUploads:(id)arg0 completionBlock:(id)arg1 ;
-(void)removeUploadObserver:(id)arg0 ;
-(void)resumeAllUploadsWithCompletionBlock:(id)arg0 ;
-(void)resumeUploads:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif