// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLREPLICATORVIEW_H
#define SLREPLICATORVIEW_H

@class UIView, NSLayoutConstraint;



@interface SLReplicatorView : UIView

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (nonatomic) NSInteger instanceCount; // ivar: _instanceCount
@property (nonatomic) CGFloat replicationPaddingX; // ivar: _replicationPaddingX
@property (retain, nonatomic) UIView *targetView; // ivar: _targetView
@property (retain, nonatomic) NSLayoutConstraint *targetViewLeadingConstraint; // ivar: _targetViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *targetViewTopConstraint; // ivar: _targetViewTopConstraint
@property (nonatomic) CGFloat widthConstant; // ivar: _widthConstant
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 targetView:(id)arg1 ;
-(void)_updateReplicatorLayer;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)updateInstanceCount:(NSUInteger)arg0 replicationPaddingX:(CGFloat)arg1 ;


@end


#endif