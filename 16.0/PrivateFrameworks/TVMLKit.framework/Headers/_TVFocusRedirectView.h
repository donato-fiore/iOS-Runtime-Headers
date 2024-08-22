// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVFOCUSREDIRECTVIEW_H
#define _TVFOCUSREDIRECTVIEW_H

@class UIView, UIFocusContainerGuide;



@interface _TVFocusRedirectView : UIView

@property (readonly, nonatomic) UIFocusContainerGuide *containerGuide; // ivar: _containerGuide
@property (nonatomic) BOOL containsInertia; // ivar: _containsInertia


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif