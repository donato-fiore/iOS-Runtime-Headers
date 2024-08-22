// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUIP33_B6A2D4E72E5722B5103497ADB7778B5F31UIKITFOCUSABLEVIEWRESPONDERITEM_H
#define _TTC7SWIFTUIP33_B6A2D4E72E5722B5103497ADB7778B5F31UIKITFOCUSABLEVIEWRESPONDERITEM_H

@class UIFocusEffect, NSArray, NSString;
@protocol UIFocusItem, _UIFocusItemPrivate, UIFocusItemContainer, UIFocusEnvironment;


#import "UIKitFocusableViewResponderItemBase.h"

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F31UIKitFocusableViewResponderItem : UIKitFocusableViewResponderItemBase <UIFocusItem, _UIFocusItemPrivate>

 {
    ? base;
    ? host;
    ? contentPath;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) UIFocusEffect *focusEffect;
@property (nonatomic, readonly) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) CGRect frame;
@property (nonatomic, readonly) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) NSString *swiftui_focusGroupIdentifier;


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)init;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif