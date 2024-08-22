// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSOPENCLIPCARDPRESENTER_H
#define CPSOPENCLIPCARDPRESENTER_H

@class SBSRemoteAlertHandle, SFClient, NSString;
@protocol SBSRemoteAlertHandleObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPSOpenClipCardPresenter : NSObject <SBSRemoteAlertHandleObserver>

 {
    SBSRemoteAlertHandle *_alertHandle;
    SFClient *_sharingClient;
    NSObject<OS_dispatch_queue> *_queue;
    id *_stagedLocationConfirmationDisplay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)responseForOpenClipAction:(BOOL)arg0 ;
+(id)sharedPresenter;
-(id)init;
-(void)_activateAlertHandleWithSettings:(id)arg0 viewControllerClassName:(id)arg1 repsonseHandler:(id)arg2 ;
-(void)_activateAlertHandleWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_invalidateSharingClient;
-(void)_performStagedLocationConfirmationDisplayIfNeeded;
-(void)_sharingClientDidInvalidate;
// -(void)_showCardWithOptions:(NSUInteger)arg0 activationHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)showCardWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)showLocationConfirmationSheetWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif