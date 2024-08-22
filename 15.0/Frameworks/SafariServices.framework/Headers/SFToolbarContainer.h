// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFTOOLBARCONTAINER_H
#define SFTOOLBARCONTAINER_H

@class UIView, UIToolbar;



@interface SFToolbarContainer : UIView {
    UIToolbar *_toolbar;
    CGFloat _minimumWidth;
    UIEdgeInsets _toolbarInsets;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif