// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCV14CORECHARTSWIFT23INTERACTIONHANDLINGVIEW10UIVIEWTYPE_H
#define _TTCV14CORECHARTSWIFT23INTERACTIONHANDLINGVIEW10UIVIEWTYPE_H

@class UIView;
@protocol UIGestureRecognizerDelegate;



@interface _TtCV14CoreChartSwift23InteractionHandlingView10UIViewType : UIView <UIGestureRecognizerDelegate>

 {
    ? dispatcher;
    ? panDelegate;
    ? panStart;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)handleLongPress:(id)arg0 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)handleSingleTap:(id)arg0 ;


@end


#endif