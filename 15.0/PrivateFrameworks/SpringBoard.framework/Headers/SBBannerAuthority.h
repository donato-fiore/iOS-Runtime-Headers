// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBANNERAUTHORITY_H
#define SBBANNERAUTHORITY_H

@class NSMutableDictionary, NSString;
@protocol BNConsideringDelegate, BNConsidering, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBBannerAuthority : NSObject <BNConsideringDelegate, BNConsidering>

 {
    NSMutableDictionary *_requesterIDsToAuthorities;
    NSMutableDictionary *_sinks;
    NSObject<OS_dispatch_queue> *_biomeQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNConsideringDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=_isScreenSharingActive, setter=_setScreenSharingActive:) BOOL screenSharingActive; // ivar: _screenSharingActive
@property (readonly) Class superclass;


-(BOOL)_shouldDropPresentableDuringScreenSharing:(id)arg0 userInfo:(id)arg1 ;
-(BOOL)_shouldDropPresentablesDuringScreenSharing;
-(NSInteger)_mediatedDecisionFromDecisions:(id)arg0 defaultDecision:(NSInteger)arg1 ;
-(NSInteger)shouldOverlapPresentable:(id)arg0 withPresentable:(id)arg1 ;
-(NSInteger)shouldPostPresentable:(id)arg0 userInfo:(id)arg1 reason:(*id)arg2 ;
-(NSInteger)shouldPresentPresentable:(id)arg0 withPresentedPresentables:(id)arg1 responsiblePresentable:(*id)arg2 ;
-(id)init;
-(void)_configureSinksIfNecessary;
-(void)bannerAuthority:(id)arg0 mayChangeDecisionForResponsiblePresentable:(id)arg1 ;
-(void)registerAuthority:(id)arg0 forRequesterIdentifier:(id)arg1 ;


@end


#endif