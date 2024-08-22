// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UILARGECONTENTVIEWERINTERACTION_H
#define UILARGECONTENTVIEWERINTERACTION_H

@class NSString;
@protocol UIAccessibilityHUDGestureDelegateInternal, UIInteraction, UILargeContentViewerInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIGestureRecognizer.h"

@interface UILargeContentViewerInteraction : NSObject <UIAccessibilityHUDGestureDelegateInternal, UIInteraction>

 {
    UIView *_view;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UILargeContentViewerInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view;


+(BOOL)isEnabled;
+(void)initialize;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)_itemAtPoint:(struct CGPoint )arg0 ;
-(id)_viewControllerForAccessibilityHUDGestureManager:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif