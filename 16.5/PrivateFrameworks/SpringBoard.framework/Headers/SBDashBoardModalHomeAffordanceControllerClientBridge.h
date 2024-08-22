// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDMODALHOMEAFFORDANCECONTROLLERCLIENTBRIDGE_H
#define SBDASHBOARDMODALHOMEAFFORDANCECONTROLLERCLIENTBRIDGE_H

@class NSString;
@protocol SBFZStackParticipantDelegate, SBHomeGrabberDelegate, CSModalHomeGestureParticipating;

#import <Foundation/Foundation.h>


@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <SBFZStackParticipantDelegate, SBHomeGrabberDelegate>

 {
    id<CSModalHomeGestureParticipating> *_coverSheetModalHomeGestureParticipant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)additionalEdgeSpacingForHomeGrabberView:(id)arg0 ;
-(id)initWithCoverSheetModalHomeGestureParticipant:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif