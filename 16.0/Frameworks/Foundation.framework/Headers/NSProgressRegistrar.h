// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPROGRESSREGISTRAR_H
#define NSPROGRESSREGISTRAR_H

@class NSMutableDictionary, NSMutableSet;
@protocol NSXPCListenerDelegate, NSProgressRegistrar, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSFileAccessNode.h"
#import "NSString.h"

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_publishersByID;
    NSMutableDictionary *_publisherTransactionsByID;
    NSMutableDictionary *_subscribersByID;
    NSMutableDictionary *_subscriberTransactionsByID;
    NSFileAccessNode *_rootFileAccessNode;
    NSMutableSet *_pendingFileSubscriberIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithQueue:(id)arg0 rootFileAccessNode:(id)arg1 ;
-(void)_getRemoteProcessWithAuditToken:(struct ? )arg0 canReadItemAtURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)addPublisher:(id)arg0 forID:(id)arg1 acknowledgementAppBundleIDs:(id)arg2 category:(id)arg3 fileURL:(id)arg4 initialValues:(id)arg5 completionHandler:(id)arg6 ;
-(void)addSubscriber:(id)arg0 forID:(id)arg1 appBundleID:(id)arg2 category:(id)arg3 completionHandler:(id)arg4 ;
-(void)addSubscriber:(id)arg0 forID:(id)arg1 appBundleID:(id)arg2 fileURL:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)observePublisherForID:(id)arg0 values:(id)arg1 forKeys:(id)arg2 ;
-(void)observePublisherUserInfoForID:(id)arg0 value:(id)arg1 forKey:(id)arg2 ;
-(void)removePublisherForID:(id)arg0 ;
-(void)removeSubscriberForID:(id)arg0 ;


@end


#endif