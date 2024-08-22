// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKSTACKINGPLACEHOLDERVIEW_H
#define _MKSTACKINGPLACEHOLDERVIEW_H

@class UIView, NSLayoutConstraint;



@interface _MKStackingPlaceholderView : UIView {
    NSLayoutConstraint *_contentHeightConstraint;
}


@property (nonatomic) CGFloat contentHeight;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithHeight:(CGFloat)arg0 ;


@end


#endif