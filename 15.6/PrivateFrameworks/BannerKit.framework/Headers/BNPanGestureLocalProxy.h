// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BNPANGESTURELOCALPROXY_H
#define BNPANGESTURELOCALPROXY_H

@class UIPanGestureRecognizer, UIView, NSString;
@protocol BNPanGestureProxyPrivate, BNPanGestureProxyDelegate;

#import <Foundation/Foundation.h>


@interface BNPanGestureLocalProxy : NSObject <BNPanGestureProxyPrivate>

 {
    UIPanGestureRecognizer *_panGesture;
    UIView *_containerView;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNPanGestureProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didCrossDefaultThreshold; // ivar: _didCrossDefaultThreshold
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithPanGestureRecognizer:(id)arg0 containerView:(id)arg1 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )translationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )velocityInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )visualTranslationInCoordinateSpace:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)sendAction;


@end


#endif