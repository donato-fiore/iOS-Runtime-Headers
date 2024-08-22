// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPREORDERMANAGER_H
#define SSPREORDERMANAGER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSPreorderManager : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    *__CFArray _observers;
    NSArray *_preorders;
}


@property (readonly) NSArray *itemKinds;
@property (readonly) NSArray *preorders;


+(id)bookStoreItemKinds;
+(id)musicStoreItemKinds;
-(id)init;
-(id)initWithItemKinds:(id)arg0 ;
-(void)_connectAsObserver;
-(void)_handleMessage:(id)arg0 fromServerConnection:(id)arg1 ;
-(void)_registerAsObserver;
-(void)_sendMessageToObservers:(SEL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelPreorders:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)dealloc;
-(void)reloadFromServer;
-(void)removeObserver:(id)arg0 ;


@end


#endif