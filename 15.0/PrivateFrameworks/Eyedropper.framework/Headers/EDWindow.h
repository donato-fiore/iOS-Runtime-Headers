// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDWINDOW_H
#define EDWINDOW_H

@class UIWindow;
@protocol EDWindowTrackingDelegate;


#import "EDWindowRootViewController.h"

@interface EDWindow : UIWindow

@property (retain, nonatomic) EDWindowRootViewController *root; // ivar: _root
@property (weak, nonatomic) NSObject<EDWindowTrackingDelegate> *trackingDelegate; // ivar: _trackingDelegate


+(BOOL)_isSecure;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_preventsRootPresentationController;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldControlAutorotation;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)handleStatusBarChangeFromHeight:(CGFloat)arg0 toHeight:(CGFloat)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif