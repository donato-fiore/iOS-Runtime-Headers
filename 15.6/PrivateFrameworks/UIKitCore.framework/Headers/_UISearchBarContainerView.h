// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHBARCONTAINERVIEW_H
#define _UISEARCHBARCONTAINERVIEW_H



#import "UIView.h"

@interface _UISearchBarContainerView : UIView {
    UIView *_subview;
    int _resizingMask;
    BOOL _shouldSendContainerSafeAreaInsetsDidChange;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_addSubview:(id)arg0 positioned:(NSInteger)arg1 relativeTo:(id)arg2 ;
-(void)_didRemoveSubview:(id)arg0 ;
-(void)_uncontainerSubview:(id)arg0 ;
-(void)enforceSubviewAtBottomIfNecessary;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif