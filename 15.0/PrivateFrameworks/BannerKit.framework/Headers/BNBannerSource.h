// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BNBANNERSOURCE_H
#define BNBANNERSOURCE_H

@class NSString, BSServiceConnection, NSMutableDictionary;
@protocol BNBannerSourceHostToClientInterface, BNBannerSceneComponentProviderDelegate, BNBannerClientContainerDelegate, BNBannerSourceProvidingPrivate, BNBannerSourceProviding, OS_dispatch_queue, BNBannerClientContainer, BNBannerSourceDelegate;

#import <Foundation/Foundation.h>


@interface BNBannerSource : NSObject <BNBannerSourceHostToClientInterface, BNBannerSceneComponentProviderDelegate, BNBannerClientContainerDelegate, BNBannerSourceProvidingPrivate, BNBannerSourceProviding>

 {
    NSString *_machName;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    NSMutableDictionary *_uniqueIDsToPresentables;
    id<BNBannerClientContainer> *_bannerClientContainerDeferringFocus;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNBannerSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier; // ivar: _requesterIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(id)bannerSourceForDestination:(NSInteger)arg0 forRequesterIdentifier:(id)arg1 ;
+(void)_invalidateBannerSource:(id)arg0 ;
+(void)initialize;
-(BOOL)bannerClientContainerShouldDeferFocus:(id)arg0 ;
-(BOOL)postPresentable:(id)arg0 options:(NSUInteger)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg0 animated:(BOOL)arg1 reason:(id)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(BOOL)setSuspended:(BOOL)arg0 forReason:(id)arg1 revokingCurrent:(BOOL)arg2 error:(*id)arg3 ;
-(id)_activeConnectionWithError:(*id)arg0 ;
-(id)_presentableForUniqueIdentifier:(id)arg0 ;
-(id)_revokePresentableWithIdentification:(id)arg0 reason:(id)arg1 animated:(id)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(id)containerViewControllerForBannerSceneComponentProvider:(id)arg0 ;
-(id)initWithDestination:(NSInteger)arg0 andRequesterIdentifier:(id)arg1 ;
-(id)initWithMachName:(id)arg0 andRequesterIdentifier:(id)arg1 ;
-(id)keyWindowForScreen:(id)arg0 ;
-(id)layoutDescriptionWithError:(*id)arg0 ;
-(id)revokeAllPresentablesWithReason:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(id)revokePresentableWithIdentification:(id)arg0 reason:(id)arg1 animated:(BOOL)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(id)revokePresentableWithRequestIdentifier:(id)arg0 reason:(id)arg1 animated:(BOOL)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(void)_addPresentable:(id)arg0 ;
-(void)_invalidateConnection;
-(void)_removePresentable:(id)arg0 reason:(id)arg1 ;
-(void)_removePresentableWithUniqueIdentifier:(id)arg0 reason:(id)arg1 ;
-(void)bannerClientContainerStoppedDeferringFocus:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sceneWillInvalidateForBannerSceneComponentProvider:(id)arg0 ;


@end


#endif