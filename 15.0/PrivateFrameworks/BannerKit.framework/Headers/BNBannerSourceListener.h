// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BNBANNERSOURCELISTENER_H
#define BNBANNERSOURCELISTENER_H

@class FBSDisplayConfiguration, NSSet, BSServiceConnectionListener, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;
@protocol BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerSourceListenerPresentableObserving, BSInvalidatable, OS_dispatch_queue, BNBannerSourceListenerDelegate;

#import <Foundation/Foundation.h>


@interface BNBannerSourceListener : NSObject <BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerSourceListenerPresentableObserving, BSInvalidatable>

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
-(BOOL)_isPrototypeFeaturesEnabled;
-(id)_createSceneWithIdentifier:(id)arg0 forProcess:(id)arg1 preferredContentSize:(struct CGSize )arg2 contentOutsets:(struct UIEdgeInsets )arg3 userInfo:(id)arg4 ;
-(id)_removeUnpreparedPresentablesWithIdentification:(id)arg0 ;
-(id)initWithAuthorizedBundleIDs:(id)arg0 ;
-(id)initWithServiceDomain:(id)arg0 displayConfiguration:(id)arg1 authorizedBundleIDs:(id)arg2 ;
-(void)__layoutDescriptionWithReply:(id)arg0 ;
-(void)__postPresentableWithSpecification:(id)arg0 options:(id)arg1 userInfo:(id)arg2 reply:(id)arg3 ;
-(void)__recommendSuspension:(id)arg0 forReason:(id)arg1 revokingCurrent:(id)arg2 reply:(id)arg3 ;
-(void)__revokePresentablesWithIdentification:(id)arg0 withAnimation:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 reply:(id)arg4 ;
-(void)_addConnection:(id)arg0 ;
-(void)_addPresentable:(id)arg0 ;
-(void)_addUnpreparedPresentable:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_removePresentable:(id)arg0 ;
-(void)_removePresentableWithIdentification:(id)arg0 ;
-(void)_removePresentablesFromRequesterWithIdentifier:(id)arg0 passingTest:(id)arg1 ;
-(void)_removeUnpreparedPresentable:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutDescriptionDidChange:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)sceneDidInvalidateForBannerSourceListenerPresentable:(id)arg0 ;


@end


#endif