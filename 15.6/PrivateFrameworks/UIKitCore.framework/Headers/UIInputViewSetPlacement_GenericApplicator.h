// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWSETPLACEMENT_GENERICAPPLICATOR_H
#define UIINPUTVIEWSETPLACEMENT_GENERICAPPLICATOR_H

@class NSLayoutConstraint, NSArray, NSString;
@protocol UIInputViewSetPlacementApplicator, UIInputViewSetPlacementOwner;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator>

 {
    NSLayoutConstraint *_horizontalConstraint;
    NSLayoutConstraint *_verticalConstraint;
    NSLayoutConstraint *_widthConstraint;
    id<UIInputViewSetPlacementOwner> *_owner;
}


@property (readonly, retain) NSArray *constraints;
@property (readonly) UIEdgeInsets contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) UIView *draggableView;
@property (readonly) NSUInteger hash;
@property (readonly) UIEdgeInsets inputAccessoryPadding;
@property (readonly) UIEdgeInsets inputAssistantPadding;
@property (readonly) CGPoint origin;
@property (readonly) CGRect popoverFrame;
@property (readonly) Class superclass;
@property (readonly, retain) UIView *twoFingerDraggableView;


+(id)applicatorForOwner:(id)arg0 withPlacement:(id)arg1 ;
-(BOOL)allConstraintsActive;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGesture:(id)arg0 inDraggableView:(struct CGPoint )arg1 ;
-(BOOL)preBeginGesture:(id)arg0 shouldBegin:(*BOOL)arg1 ;
-(id)initForOwner:(id)arg0 withPlacement:(id)arg1 ;
-(struct CGRect )targetRect;
-(void)applyChanges:(id)arg0 ;
-(void)checkVerticalConstraint;
-(void)invalidate;
-(void)prepare;


@end


#endif