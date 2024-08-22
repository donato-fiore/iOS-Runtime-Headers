// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UINAVIGATIONTRANSITIONVIEW_H
#define UINAVIGATIONTRANSITIONVIEW_H

@protocol NSCoding;


#import "UIView.h"
#import "UIResponder.h"
#import "UIWindow.h"

@interface UINavigationTransitionView : UIView <NSCoding>

 {
    UIView *_toView;
    NSInteger _transition;
    UIResponder *_firstResponderToRestore;
    UIWindow *_originalWindow;
    CGFloat _fromViewAlpha;
    BOOL _isTransitioning;
    BOOL _popoverWillCleanUpNavigationTransition;
    BOOL _usesRoundedCorners;
}


@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly) UIView *fromView; // ivar: _fromView
@property (readonly) BOOL isTransitioning;
@property (nonatomic) BOOL popoverWillCleanUpNavigationTransition;
@property (nonatomic) BOOL usesRoundedCorners;


+(CGFloat)defaultDurationForTransition:(NSInteger)arg0 ;
-(BOOL)_isTransitioningFromView:(id)arg0 ;
-(BOOL)_prefersFocusContainment;
-(BOOL)transition:(NSInteger)arg0 fromView:(id)arg1 toView:(id)arg2 ;
-(BOOL)transition:(NSInteger)arg0 toView:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cleanupTransition;
-(void)_cleanupTransitionFromPopover;
-(void)_navigationTransitionDidStop;
-(void)_notifyDelegateTransitionDidStopWithContext:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif