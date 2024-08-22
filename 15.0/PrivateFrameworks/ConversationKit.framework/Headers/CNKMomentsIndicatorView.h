// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNKMOMENTSINDICATORVIEW_H
#define CNKMOMENTSINDICATORVIEW_H

@class UIView, NSMutableDictionary;
@protocol CNKMomentsIndicatorBubbleDelegate;



@interface CNKMomentsIndicatorView : UIView <CNKMomentsIndicatorBubbleDelegate>



@property (retain, nonatomic) NSMutableDictionary *bubblesByType; // ivar: _bubblesByType
@property (nonatomic) NSInteger displayStyle; // ivar: _displayStyle


-(id)bottomConstraintForBubble:(id)arg0 inBubbles:(id)arg1 ;
-(id)bottomConstraintForBubble:(id)arg0 style:(NSInteger)arg1 ;
-(id)commonConstraintsForBubble:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTimeOutForMomentsIndicatorBubble:(id)arg0 ;
-(void)presentCaptureIndicatorWithType:(NSInteger)arg0 forRemoteParticipantNamed:(id)arg1 ;
-(void)refreshLayout;


@end


#endif