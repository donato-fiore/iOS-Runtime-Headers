// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLXPCPHOTOLIBRARYSTORECONTAINER_H
#define PLXPCPHOTOLIBRARYSTORECONTAINER_H

@class NSXPCListener, NSXPCListenerEndpoint, NSXPCStoreServer;

#import <Foundation/Foundation.h>


@interface PLXPCPhotoLibraryStoreContainer : NSObject {
    NSXPCListener *_listener;
}


@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) NSXPCStoreServer *server; // ivar: _server


+(id)newContainerWithPathManager:(id)arg0 connectionAuthorization:(id)arg1 ;
-(id)initWithServer:(id)arg0 listener:(id)arg1 ;


@end


#endif