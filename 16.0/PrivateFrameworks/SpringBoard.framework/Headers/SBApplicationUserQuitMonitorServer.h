// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONUSERQUITMONITORSERVER_H
#define SBAPPLICATIONUSERQUITMONITORSERVER_H

@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSMutableArray, NSString;
@protocol BSServiceConnectionListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBApplicationUserQuitMonitorServer : NSObject <BSServiceConnectionListenerDelegate>

 {
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_queue_addConnection:(id)arg0 ;
-(void)_queue_removeConnection:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)userClosedLastSceneOfApplicationWithBundleID:(id)arg0 ;


@end


#endif