// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSAPPLECAREDAEMONRESPONSELISTENER_H
#define IDSAPPLECAREDAEMONRESPONSELISTENER_H

@class NSString;
@protocol IDSDaemonListenerProtocol;

#import <Foundation/Foundation.h>

#import "IDSDaemonRequestTimer.h"

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol>

 {
    IDSDaemonRequestTimer *_requestTimer;
    id *_disconnectedBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDisconnectedBlockAndNoTimeout:(id)arg0 ;
-(id)initWithRequestTimer:(id)arg0 ;
-(void)applecareResponseForRequestID:(id)arg0 withError:(id)arg1 ;
-(void)daemonDisconnected;


@end


#endif