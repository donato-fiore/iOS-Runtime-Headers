// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVTOUCHFORWARDINGVIEW_H
#define SVTOUCHFORWARDINGVIEW_H

@class UIView;



@interface SVTouchForwardingView : UIView

@property (nonatomic) CGFloat lastTouchTimestamp; // ivar: _lastTouchTimestamp
@property (copy, nonatomic, setter=onTouch:) id *touchedBlock; // ivar: _touchedBlock


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)onTouch:(id)arg0 ;


@end


#endif