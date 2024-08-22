// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBIOMETRICMONITORVIEW_H
#define SBBIOMETRICMONITORVIEW_H

@class UIView;



@interface SBBiometricMonitorView : UIView {
    UIView *_stateView;
    UIView *_presenceView;
    UIView *_poseView;
}


@property (nonatomic) NSInteger matchState; // ivar: _matchState
@property (nonatomic) NSInteger poseState; // ivar: _poseState
@property (nonatomic) NSInteger presenceDetectState; // ivar: _presenceDetectState


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif