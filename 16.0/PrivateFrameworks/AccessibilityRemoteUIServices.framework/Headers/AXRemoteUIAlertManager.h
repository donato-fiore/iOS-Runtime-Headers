// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXREMOTEUIALERTMANAGER_H
#define AXREMOTEUIALERTMANAGER_H

@class NSString, NSMutableDictionary;
@protocol SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>


@interface AXRemoteUIAlertManager : NSObject <SBSRemoteAlertHandleObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *remoteCallbackHolders; // ivar: _remoteCallbackHolders
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
// -(void)_sbs_presentRemoteUIAlertWithIdentifier:(id)arg0 viewControllerClassName:(id)arg1 userInfo:(id)arg2 presentationHandler:(id)arg3 dismissalHandler:(unk)arg4  ;
// -(void)presentRemoteUIAlertWithIdentifier:(id)arg0 viewControllerClassName:(id)arg1 userInfo:(id)arg2 presentationHandler:(id)arg3 dismissalHandler:(unk)arg4  ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif