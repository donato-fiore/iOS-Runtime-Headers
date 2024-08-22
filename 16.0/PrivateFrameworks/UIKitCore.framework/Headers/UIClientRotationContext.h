// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICLIENTROTATIONCONTEXT_H
#define UICLIENTROTATIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UISnapshotView.h"
#import "UIWindow.h"

@interface UIClientRotationContext : NSObject {
    UIView *_headerView;
    UIView *_footerView;
    UIView *_snapshotTargetView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    BOOL _headerWasHidden;
    BOOL _footerWasHidden;
    BOOL _contentWasHidden;
    BOOL _snapshotTargetWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    ? _rotationSettings;
    CGFloat contentBottomInset;
    UIWindow *_window;
}


@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSInteger fromOrientation; // ivar: _fromOrientation
@property (readonly, nonatomic) id *rotatingClient; // ivar: _rotatingClient
@property (nonatomic) BOOL skipClientRotationCallbacks; // ivar: _skipClientRotationCallbacks
@property (readonly, nonatomic) NSInteger toOrientation; // ivar: _toOrientation


-(BOOL)_isFooterTranslucent;
-(BOOL)_isHeaderTranslucent;
-(id)initWithClient:(id)arg0 toOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 andWindow:(id)arg3 ;
-(void)_positionHeaderView:(id)arg0 andFooterView:(id)arg1 outsideContentViewForInterfaceOrientation:(NSInteger)arg2 ;
-(void)_slideHeaderView:(id)arg0 andFooterView:(id)arg1 offScreen:(BOOL)arg2 forInterfaceOrientation:(NSInteger)arg3 ;
-(void)dealloc;
-(void)finishFirstHalfRotation;
-(void)finishFullRotateUsingOnePartAnimation:(BOOL)arg0 ;
-(void)rotateSnapshots;
-(void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg0 ;
-(void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg0 forInterfaceOrientation:(NSInteger)arg1 ;


@end


#endif