// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDDOCKVIEW_H
#define UIKEYBOARDDOCKVIEW_H

@protocol _UIViewRepresentingKeyboardLayout, UIKeyboardDockViewDelegate;


#import "UIView.h"
#import "UIKeyboardDockItem.h"

@interface UIKeyboardDockView : UIView <_UIViewRepresentingKeyboardLayout>



@property (retain, nonatomic) UIKeyboardDockItem *centerDockItem; // ivar: _centerDockItem
@property (weak, nonatomic) NSObject<UIKeyboardDockViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIKeyboardDockItem *leftDockItem; // ivar: _leftDockItem
@property (retain, nonatomic) UIKeyboardDockItem *rightDockItem; // ivar: _rightDockItem


+(NSInteger)_currentInterfaceOrientation;
+(id)dockViewHomeGestureExclusionZones;
+(struct ? )_itemFramesForBoundingSize:(struct CGSize )arg0 ;
-(id)_dockItemWithButton:(id)arg0 ;
-(id)_keyboardLayoutView;
-(id)_keyboardLongPressInteractionRegions;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_configureDockItem:(id)arg0 ;
-(void)_didReceiveHandBiasChangeNotification:(id)arg0 ;
-(void)_dockItemButtonWasTapped:(id)arg0 withEvent:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif