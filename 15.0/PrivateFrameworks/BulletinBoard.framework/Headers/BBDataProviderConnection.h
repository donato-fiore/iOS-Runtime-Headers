// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBDATAPROVIDERCONNECTION_H
#define BBDATAPROVIDERCONNECTION_H

@class NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, BBDataProviderConnectionServerProxy;

#import <Foundation/Foundation.h>

#import "BBDataProviderConnectionResolver.h"

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate>

 {
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id<BBDataProviderConnectionServerProxy> *_serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BOOL _connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
}


@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(void)initialize;
-(id)_addDataProvider:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)addDataProvider:(id)arg0 ;
-(id)addDataProvider:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 onQueue:(id)arg1 ;
-(void)_invalidate;
-(void)_queue_setServerProxy:(id)arg0 ;
-(void)addDataProvider:(id)arg0 withCompletion:(id)arg1 ;
-(void)addParentSectionInfo:(id)arg0 displayName:(id)arg1 icon:(id)arg2 ;
-(void)addParentSectionInfo:(id)arg0 displayName:(id)arg1 icon:(id)arg2 universalSectionID:(id)arg3 ;
-(void)addParentSectionInfo:(id)arg0 displayName:(id)arg1 icon:(id)arg2 unversalSectionID:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)ping:(id)arg0 ;
-(void)removeDataProviderWithSectionID:(id)arg0 ;
-(void)setServerProxy:(id)arg0 ;


@end


#endif