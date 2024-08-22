// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTUREDISMISSABLECOVERSHEETVIEWCONTROLLER_H
#define SBHOMEGESTUREDISMISSABLECOVERSHEETVIEWCONTROLLER_H

@class CSCoverSheetViewControllerBase, NSString, SBFZStackParticipant;
@protocol SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate;


#import "SBHomeGesturePanGestureRecognizer.h"
#import "SBHomeGestureParticipant.h"

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate>



@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer; // ivar: _bottomEdgeRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // ivar: _homeGestureParticipant
@property (readonly, nonatomic) NSInteger homeGestureParticipantIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsHomeGestureOwnership; // ivar: _wantsHomeGestureOwnership
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant
@property (readonly, nonatomic) NSInteger zStackParticipantIdentifier;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldDismissForHomeGestureRecognizer:(id)arg0 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_handleBottomEdgeGesture:(id)arg0 ;
-(void)_handleBottomEdgeGestureBegan:(id)arg0 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg0 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg0 ;
-(void)_relinquishHomeGestureOwnership;
-(void)_requestHomeGestureOwnership;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif