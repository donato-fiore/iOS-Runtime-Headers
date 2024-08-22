// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNKBANNERPRESENTATIONMANAGER_H
#define CNKBANNERPRESENTATIONMANAGER_H

@protocol CNKAudioRoutingDelegate, CNKBannerPresentationDelegate;

#import <Foundation/Foundation.h>

#import "CNKConversationControlsManager.h"
#import "_TtC15ConversationKit30SystemBannerHostViewController.h"

@interface CNKBannerPresentationManager : NSObject {
    ? inCallConversationControlsDelegate;
    ? _conversationControlsManager;
    ? presentedBannerDismissalTimer;
}


@property (nonatomic, weak) NSObject<CNKAudioRoutingDelegate> *audioRoutingDelegate; // ivar: audioRoutingDelegate
@property (nonatomic, readonly) CNKConversationControlsManager *conversationControlsManager;
@property (nonatomic, readonly) BOOL inCallControlsVisible;
@property (nonatomic, weak) NSObject<CNKBannerPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (nonatomic, retain) _TtC15ConversationKit30SystemBannerHostViewController *presentedBanner; // ivar: presentedBanner


-(id)init;
-(id)initWithDelegate:(id)arg0 ;


@end


#endif