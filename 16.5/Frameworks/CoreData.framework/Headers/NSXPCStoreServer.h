// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSXPCSTORESERVER_H
#define NSXPCSTORESERVER_H

@class NSURL, NSDictionary, NSArray, NSXPCListener, NSMapTable, NSMutableDictionary, NSString;
@protocol NSXPCServerProtocol, NSXPCListenerDelegate, NSXPCStoreServerDelegate;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSXPCStoreServerRequestHandlingPolicy.h"

@interface NSXPCStoreServer : NSObject <NSXPCServerProtocol, NSXPCListenerDelegate>

 {
    NSURL *_modelURL;
    NSManagedObjectModel *_model;
    NSURL *_storeURL;
    NSDictionary *_storeOptions;
    NSArray *_entitlementNames;
    NSXPCListener *_listener;
    NSXPCStoreServerRequestHandlingPolicy *_policy;
    NSMapTable *_connectionToCoordinatorMap;
    NSMutableDictionary *_cacheIDtoCoordinatorMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<NSXPCStoreServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)debugDefault;
+(void)initialize;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)errorHandlingDelegate;
-(id)initForStoreWithURL:(id)arg0 usingModel:(id)arg1 options:(id)arg2 policy:(id)arg3 ;
-(id)initForStoreWithURL:(id)arg0 usingModelAtURL:(id)arg1 options:(id)arg2 policy:(id)arg3 ;
-(id)replacementObjectForXPCConnection:(id)arg0 encoder:(id)arg1 object:(id)arg2 ;
-(void)dealloc;
-(void)handleRequest:(id)arg0 reply:(id)arg1 ;
-(void)setErrorHandlingDelegate:(id)arg0 ;
-(void)startListening;


@end


#endif