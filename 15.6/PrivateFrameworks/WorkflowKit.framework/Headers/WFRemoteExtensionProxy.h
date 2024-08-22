// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXTENSIONPROXY_H
#define WFREMOTEEXTENSIONPROXY_H

@class INCExtensionConnection, SARemoteDevice;
@protocol INCExtensionProxy;

#import <Foundation/Foundation.h>


@interface WFRemoteExtensionProxy : NSObject <INCExtensionProxy>



@property (readonly, nonatomic) INCExtensionConnection *connection; // ivar: _connection
@property (readonly, copy, nonatomic) SARemoteDevice *remoteDevice; // ivar: _remoteDevice


-(id)initWithConnection:(id)arg0 andDevice:(id)arg1 ;
-(void)confirmIntentWithCompletionHandler:(id)arg0 ;
-(void)handleIntentRemotelyWithRemoteOperation:(id)arg0 completion:(id)arg1 ;
-(void)handleIntentWithCompletionHandler:(id)arg0 ;
-(void)resolveIntentSlotKeyPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveIntentSlotKeyPaths:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif