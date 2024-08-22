// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REREMOTETRAININGCLIENTLISTENER_H
#define REREMOTETRAININGCLIENTLISTENER_H

@class NSMutableSet, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;

#import <Foundation/Foundation.h>


@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate>

 {
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RERemoteTrainingClientListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedTrainingClientListener;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif