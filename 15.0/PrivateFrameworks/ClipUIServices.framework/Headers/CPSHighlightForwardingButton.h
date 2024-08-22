// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSHIGHLIGHTFORWARDINGBUTTON_H
#define CPSHIGHLIGHTFORWARDINGBUTTON_H

@class UIButton;
@protocol CPSHighlightable;



@interface CPSHighlightForwardingButton : UIButton

@property (weak, nonatomic) NSObject<CPSHighlightable> *highlightForwardingTarget; // ivar: _highlightForwardingTarget


-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif