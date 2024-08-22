// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLAUXILIARYHOSTVIEW_H
#define HUQUICKCONTROLAUXILIARYHOSTVIEW_H

@class UIView, UIView<HUQuickControlAuxiliaryView>;



@interface HUQuickControlAuxiliaryHostView : UIView

@property (retain, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView; // ivar: _auxiliaryView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)updateConstraints;


@end


#endif