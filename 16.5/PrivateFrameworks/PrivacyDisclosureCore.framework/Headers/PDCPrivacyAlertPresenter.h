// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCPRIVACYALERTPRESENTER_H
#define PDCPRIVACYALERTPRESENTER_H

@class SBSRemoteAlertHandle, NSMapTable, NSString;
@protocol SBSRemoteAlertHandleObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDCPrivacyAlertPresenter : NSObject <SBSRemoteAlertHandleObserver>

 {
    SBSRemoteAlertHandle *_alertHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_requestToAlertMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedPresenter;
-(id)init;
-(void)_activateAlertHandleForIdentity:(id)arg0 settings:(id)arg1 repsonseHandler:(id)arg2 ;
-(void)_ensureAppIsLaunchableWithIdentity:(id)arg0 completion:(id)arg1 ;
-(void)activateRemoteAlertWithIdentity:(id)arg0 requestHandle:(id)arg1 forcePresent:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)didCancelRequestHandle:(id)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif