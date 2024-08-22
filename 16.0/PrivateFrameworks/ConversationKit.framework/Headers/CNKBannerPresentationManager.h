// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKBANNERPRESENTATIONMANAGER_H
#define CNKBANNERPRESENTATIONMANAGER_H

@class TUCall;
@protocol CNKAudioRoutingDelegate, CNKBannerPresentationDelegate;

#import <Foundation/Foundation.h>

#import "CNKConversationControlsManager.h"
#import "CNKSystemBannerHostViewController.h"

@interface CNKBannerPresentationManager : NSObject {
    ? inCallConversationControlsDelegate;
    ? _conversationControlsManager;
    ? presentedSystemApertureElement;
    ? $__lazy_storage_$_isSystemHUDManagedBySpringBoard;
    ? presentedBannerDismissalTimer;
    ? systemApertureElementDismissalTimer;
    ? placeholderCallCenter;
    ? shouldRequestHUDPresentationOnAVUpgradeOrDowngrade;
    ? previouslyHadMultipleCalls;
    ? defaults;
    ? features;
}


@property (nonatomic, weak) NSObject<CNKAudioRoutingDelegate> *audioRoutingDelegate; // ivar: audioRoutingDelegate
@property (nonatomic, readonly) CNKConversationControlsManager *conversationControlsManager;
@property (nonatomic, retain) TUCall *handedOffCall; // ivar: handedOffCall
@property (nonatomic, readonly) BOOL inCallControlsVisible;
@property (nonatomic) BOOL isSystemHUDManagedBySpringBoard;
@property (nonatomic, weak) NSObject<CNKBannerPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (nonatomic, retain) CNKSystemBannerHostViewController *presentedBanner; // ivar: presentedBanner


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)makeSystemApertureElementProvider;


@end


#endif