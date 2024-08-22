// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWSETPLACEMENT_DOCKRESPONDERAPPLICATOR_H
#define UIINPUTVIEWSETPLACEMENT_DOCKRESPONDERAPPLICATOR_H

@class FloatingApplicator;


#import "UIKeyboardPopoverContainer.h"

@interface UIInputViewSetPlacement_DockResponderApplicator : FloatingApplicator

@property (retain, nonatomic) UIKeyboardPopoverContainer *popover; // ivar: _popover
@property (nonatomic) CGRect popoverRectPlaceholder; // ivar: _popoverRectPlaceholder


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGesture:(id)arg0 inDraggableView:(struct CGPoint )arg1 ;
-(BOOL)isPopoverRequired;
-(BOOL)preBeginGesture:(id)arg0 shouldBegin:(*BOOL)arg1 ;
-(id)draggableView;
-(id)startingPropertiesFromPlacementProperties:(id)arg0 ;
-(id)twoFingerDraggableView;
-(struct CGAffineTransform )scaledPopoverTransform;
-(struct UIEdgeInsets )contentInsets;
-(void)applyChanges:(id)arg0 ;
-(void)invalidate;
-(void)invalidatePopover;
-(void)prepare;


@end


#endif