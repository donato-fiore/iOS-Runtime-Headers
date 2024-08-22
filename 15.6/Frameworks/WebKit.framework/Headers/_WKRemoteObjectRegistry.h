// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKREMOTEOBJECTREGISTRY_H
#define _WKREMOTEOBJECTREGISTRY_H


#import <Foundation/Foundation.h>


@interface _WKRemoteObjectRegistry : NSObject {
    unique_ptr<WebKit::RemoteObjectRegistry, std::default_delete<WebKit::RemoteObjectRegistry>> _remoteObjectRegistry;
    RetainPtr<NSMapTable> _remoteObjectProxies;
    HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::HashTableTraits> _exportedObjects;
    HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>, WTF::HashTableTraits> _pendingReplies;
}


@property (readonly, nonatomic) *void remoteObjectRegistry;


-(id)_initWithWebPage:(struct NakedRef<WebKit::WebPage> )arg0 ;
-(id)_initWithWebPageProxy:(struct NakedRef<WebKit::WebPageProxy> )arg0 ;
-(id)remoteObjectProxyWithInterface:(id)arg0 ;
-(void)_callReplyWithID:(NSUInteger)arg0 blockInvocation:(*void)arg1 ;
-(void)_invalidate;
-(void)_invokeMethod:(*void)arg0 ;
-(void)_releaseReplyWithID:(NSUInteger)arg0 ;
-(void)_sendInvocation:(id)arg0 interface:(id)arg1 ;
-(void)registerExportedObject:(id)arg0 interface:(id)arg1 ;
-(void)unregisterExportedObject:(id)arg0 interface:(id)arg1 ;


@end


#endif