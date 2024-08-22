// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTPHRASESPOTTERCONTROLREMOTE_H
#define VTPHRASESPOTTERCONTROLREMOTE_H

@class NSString;
@protocol VTPeerRemoteConnectionDelegate, OS_dispatch_queue, VTPhraseSpotterControlRemoteDelegate;

#import <Foundation/Foundation.h>

#import "VTPeerRemoteConnection.h"

@interface VTPhraseSpotterControlRemote : NSObject <VTPeerRemoteConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    VTPeerRemoteConnection *_peerConnection;
    id<VTPhraseSpotterControlRemoteDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)remoteConnection:(id)arg0 handleMessageType:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif