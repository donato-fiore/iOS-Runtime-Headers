// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRESIZINGKEYPLANECOORDINATOR_H
#define UIKBRESIZINGKEYPLANECOORDINATOR_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "_UIDynamicAnimationGroup.h"
#import "UIView.h"
#import "UIColor.h"
#import "UIPanGestureRecognizer.h"

@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate>

 {
    CGFloat _prevResizingOffset;
    CGFloat _foregroundOpacity;
    _UIDynamicAnimationGroup *_resizingAnimationGroup;
    UIView *_grabber;
    UIColor *_grabberColor;
    BOOL _isResizing;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isResizing;
@property (readonly, nonatomic) CGFloat resizingOffset; // ivar: _resizingOffset
@property (readonly) Class superclass;


+(CGFloat)savedResizingOffset;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(void)dimKeys:(id)arg0 ;
-(void)handleResizeGesture:(id)arg0 ;
-(void)reloadResizingOffset;
-(void)resizeKeyplaneWithOffset:(CGFloat)arg0 andRedraw:(BOOL)arg1 ;
-(void)saveResizingStopIndex:(NSUInteger)arg0 ;
-(void)setRenderConfig:(id)arg0 ;
-(void)stopResizing;
-(void)uninstallGestureRecognizers;
-(void)updateGestureRecognizers;
-(void)updateGrabber;


@end


#endif