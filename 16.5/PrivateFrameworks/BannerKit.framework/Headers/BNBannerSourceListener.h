// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNBANNERSOURCELISTENER_H
#define BNBANNERSOURCELISTENER_H

@class FBSDisplayConfiguration, NSSet, BSServiceConnectionListener, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;
@protocol BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerSourceListenerPresentableDelegate, BNBannerSourceListenerHostedPresentableObserving, BSInvalidatable, OS_dispatch_queue, BNBannerSourceListenerDelegate;

#import <Foundation/Foundation.h>


@interface BNBannerSourceListener : NSObject <BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerSourceListenerPresentableDelegate, BNBannerSourceListenerHostedPresentableObserving, BSInvalidatable>

 {
    FBSDisplayConfiguration *_displayConfiguration;
    NSSet *_authorizedBundleIDs;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    NSMutableSet *_unpreparedPresentables;
    NSMutableDictionary *_requesterIDsToPresentables;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNBannerSourceListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_isConnectingProcessAuthorized:(id)arg0 error:(*id)arg1 ;
-(BOOL)_isPresentableWaitingToBeMadeReady:(id)arg0 ;
-(BOOL)_isPresentableWithIdentificationWaitingToBeMadeReady:(id)arg0 ;
-(BOOL)bannerSourceListenerPresentable:(id)arg0 isConnectingProcessAuthorized:(id)arg1 error:(*id)arg2 ;
-(BOOL)bannerSourceListenerPresentableShouldEnablePresentableContextInterface:(id)arg0 ;
-(id)_createSceneWithIdentifier:(id)arg0 forProcess:(id)arg1 preferredContentSize:(struct CGSize )arg2 contentOutsets:(struct UIEdgeInsets )arg3 userInfo:(id)arg4 ;
-(id)_presentablesWithIdentification:(id)arg0 requiringUniqueMatch:(BOOL)arg1 ;
-(id)_removeUnpreparedPresentablesWithIdentification:(id)arg0 ;
-(id)_uniquePresentableWithIdentification:(id)arg0 ;
-(id)initWithAuthorizedBundleIDs:(id)arg0 ;
-(id)initWithServiceDomain:(id)arg0 displayConfiguration:(id)arg1 authorizedBundleIDs:(id)arg2 ;
-(void)__layoutDescriptionWithReply:(id)arg0 ;
-(void)__postPresentableWithSpecification:(id)arg0 options:(id)arg1 userInfo:(id)arg2 reply:(id)arg3 ;
-(void)__recommendSuspension:(id)arg0 forReason:(id)arg1 revokingCurrent:(id)arg2 reply:(id)arg3 ;
-(void)__revokePresentablesWithIdentification:(id)arg0 withAnimation:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 reply:(id)arg4 ;
-(void)_addConnection:(id)arg0 ;
-(void)_addPresentable:(id)arg0 ;
-(void)_addUnpreparedBannerSourcePresentableForBannerSpecification:(id)arg0 scene:(id)arg1 readyCompletion:(id)arg2 ;
-(void)_addUnpreparedPresentable:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_removePresentable:(id)arg0 ;
-(void)_removePresentableWithIdentification:(id)arg0 requiringUniqueMatch:(BOOL)arg1 ;
-(void)_removeUnpreparedPresentable:(id)arg0 ;
-(void)_requestPostingBannerSourceListenerPresentable:(id)arg0 options:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)_requestPostingBannerSourceListenerPresentableWaitingToBeMadeReady:(id)arg0 options:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)_stopObservingAndInvalidatePresentable:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutDescriptionDidChange:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)sceneDidInvalidateForBannerSourceListenerPresentable:(id)arg0 ;


@end


#endif