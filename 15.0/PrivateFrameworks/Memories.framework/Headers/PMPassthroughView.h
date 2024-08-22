// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMPASSTHROUGHVIEW_H
#define PMPASSTHROUGHVIEW_H

@class UIView;
@protocol PMPassthroughViewDelegate;



@interface PMPassthroughView : UIView

@property (weak, nonatomic) NSObject<PMPassthroughViewDelegate> *delegate; // ivar: _delegate


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif