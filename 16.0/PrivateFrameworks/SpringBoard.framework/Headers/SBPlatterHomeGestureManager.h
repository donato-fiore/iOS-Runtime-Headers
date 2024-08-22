// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPLATTERHOMEGESTUREMANAGER_H
#define SBPLATTERHOMEGESTUREMANAGER_H

@class NSMapTable, NSString;
@protocol SBPlatterHomeGestureContextDelegate, SBPlatterHomeGestureManagerDelegate;

#import <Foundation/Foundation.h>


@interface SBPlatterHomeGestureManager : NSObject <SBPlatterHomeGestureContextDelegate>

 {
    NSMapTable *_participantsToHomeGestureContexts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBPlatterHomeGestureManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_allParticipants;
-(id)_homeGestureContextForParticipant:(id)arg0 creatingIfNecessary:(BOOL)arg1 withWindowScene:(id)arg2 ;
-(id)_participantForHomeGestureContext:(id)arg0 ;
-(id)gestureRecognizerPriorityAssertionForBannerManagerHomeGestureContext:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)keyboardHomeAffordanceAssertionForBannerManagerHomeGestureContext:(id)arg0 ;
-(id)registerParticipant:(id)arg0 windowScene:(id)arg1 ;
-(void)_removeHomeGestureContextForParticipant:(id)arg0 ;
-(void)bannerManagerHomeGestureContext:(id)arg0 homeGestureOwnershipDidChange:(BOOL)arg1 ;
-(void)unregisterParticipant:(id)arg0 ;
-(void)wantsHomeGestureDidChangeForBannerManagerHomeGestureContext:(id)arg0 ;


@end


#endif