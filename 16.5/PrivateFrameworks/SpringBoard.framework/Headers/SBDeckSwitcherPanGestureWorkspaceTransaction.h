// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDECKSWITCHERPANGESTUREWORKSPACETRANSACTION_H
#define SBDECKSWITCHERPANGESTUREWORKSPACETRANSACTION_H

@class NSString;
@protocol SBHomeGrabberDelegate;


#import "SBFluidSwitcherGestureWorkspaceTransaction.h"

@interface SBDeckSwitcherPanGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <SBHomeGrabberDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg0 ;
-(CGFloat)additionalEdgeSpacingForHomeGrabberView:(id)arg0 ;
-(NSInteger)_gestureType;
-(id)selectedAppLayoutForGestureRecognizer:(id)arg0 ;
-(id)touchHistoryProvidingGesture;
-(void)_begin;
-(void)_beginWithGesture:(id)arg0 ;
-(void)_didComplete;
-(void)_finishWithGesture:(id)arg0 ;
-(void)_removeHysteresisFromTranslation;


@end


#endif