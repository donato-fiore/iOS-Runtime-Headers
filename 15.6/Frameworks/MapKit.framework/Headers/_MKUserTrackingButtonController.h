// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKUSERTRACKINGBUTTONCONTROLLER_H
#define _MKUSERTRACKINGBUTTONCONTROLLER_H

@class UIActivityIndicatorView, NSString, UIImageView;
@protocol CAAnimationDelegate, MKUserTrackingButtonTarget, MKUserTrackingView;

#import <Foundation/Foundation.h>

#import "_MKUserTrackingButton.h"

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate>

 {
    id<MKUserTrackingButtonTarget> *_target;
    _MKUserTrackingButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
}


@property (nonatomic) NSUInteger buttonBehavior; // ivar: _buttonBehavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MKUserTrackingView> *userTrackingView; // ivar: _userTrackingView


+(CGFloat)_symbolPointSize;
-(BOOL)_shouldAnimateFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(id)_activityIndicatorView;
-(id)_contentAnimation;
-(id)_expandAnimation;
-(id)_imageForState:(NSInteger)arg0 controlState:(NSUInteger)arg1 ;
-(id)_shrinkAnimation;
-(id)initWithTarget:(id)arg0 userTrackingView:(id)arg1 imageView:(id)arg2 button:(id)arg3 ;
-(void)_authorizationStatusChanged:(id)arg0 ;
-(void)_goToNextMode:(id)arg0 ;
-(void)_reloadState;
-(void)_updateLoading;
-(void)_updatePreferredSymbolConfiguration;
-(void)_updateState;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif