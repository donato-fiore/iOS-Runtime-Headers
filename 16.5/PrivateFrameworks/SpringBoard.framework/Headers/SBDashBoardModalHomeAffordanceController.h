// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDMODALHOMEAFFORDANCECONTROLLER_H
#define SBDASHBOARDMODALHOMEAFFORDANCECONTROLLER_H

@class SBFZStackResolver, SBFZStackParticipant, NSString, UIScreenEdgePanGestureRecognizer;
@protocol CSModalHomeAffordanceControlling;

#import <Foundation/Foundation.h>


@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling>

 {
    SBFZStackResolver *_zStackResolver;
    SBFZStackParticipant *_zStackParticipant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer; // ivar: _homeGestureRecognizer
@property (readonly) Class superclass;


-(BOOL)ownsHomeGesture;
-(BOOL)registerHomeGestureParticipant:(id)arg0 ;
-(id)init;
-(void)_addGrabberView:(id)arg0 clientBridge:(id)arg1 ;
-(void)unregisterHomeGestureParticipant;


@end


#endif