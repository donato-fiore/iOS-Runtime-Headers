// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUIP33_60C465D0E37117769FC505C04DE5239A24UIKITFOCUSABLEFILLERITEM_H
#define _TTC7SWIFTUIP33_60C465D0E37117769FC505C04DE5239A24UIKITFOCUSABLEFILLERITEM_H

@class NSArray;
@protocol UIFocusItem, UIFocusItemContainer, UIFocusEnvironment;


#import "UIKitFocusableViewResponderItemBase.h"

@interface _TtC7SwiftUIP33_60C465D0E37117769FC505C04DE5239A24UIKitFocusableFillerItem : UIKitFocusableViewResponderItemBase <UIFocusItem>

 {
    ? host;
    ? axis;
    ? logicalFrame;
    ? focusableFrame;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) CGRect frame;
@property (nonatomic, readonly) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)init;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif