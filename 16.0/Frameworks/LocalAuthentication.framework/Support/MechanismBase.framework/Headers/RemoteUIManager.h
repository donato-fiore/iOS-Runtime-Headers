// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMOTEUIMANAGER_H
#define REMOTEUIMANAGER_H

@class NSString;
@protocol RemoteUIActivatorDelegate, RemoteUIManaging, RemoteUIManaging><RemoteUIActivatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RemoteUIManager : NSObject <RemoteUIActivatorDelegate, RemoteUIManaging>

 {
    id<RemoteUIManaging><RemoteUIActivatorDelegate> *_responder;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(id)workQueue;
-(void)checkClearForIdleExitWithCompletion:(id)arg0 ;
-(void)connectRemoteUI:(id)arg0 reply:(id)arg1 ;
-(void)connectionToViewServiceInvalidated:(id)arg0 ;
-(void)didReceiveExpectedError:(id)arg0 ;
-(void)didReceiveUnexpectedError:(id)arg0 ;
-(void)disconnectRemoteUI;
-(void)dismissRemoteUI:(id)arg0 uiMechanism:(id)arg1 uiDisappeared:(BOOL)arg2 reply:(id)arg3 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg0 reply:(id)arg1 ;
-(void)showUIWithParams:(id)arg0 reply:(id)arg1 ;


@end


#endif