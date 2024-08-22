// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDHOMEAFFORDANCECONTROLLERCLIENTBRIDGE_H
#define SBDASHBOARDHOMEAFFORDANCECONTROLLERCLIENTBRIDGE_H

@class NSString;
@protocol SBNotificationHomeAffordanceControllerClient, CSHomeGestureParticipating;

#import <Foundation/Foundation.h>


@interface SBDashBoardHomeAffordanceControllerClientBridge : NSObject <SBNotificationHomeAffordanceControllerClient>

 {
    id<CSHomeGestureParticipating> *_coverSheetHomeGestureParticipant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCoverSheetHomeGestureParticipant:(id)arg0 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif