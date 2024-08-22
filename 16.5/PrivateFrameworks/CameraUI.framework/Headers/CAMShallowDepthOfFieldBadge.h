// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSHALLOWDEPTHOFFIELDBADGE_H
#define CAMSHALLOWDEPTHOFFIELDBADGE_H

@class UIView, CEKBadgeTextView;



@interface CAMShallowDepthOfFieldBadge : UIView

@property (readonly, nonatomic) CEKBadgeTextView *_disabledTextView; // ivar: __disabledTextView
@property (readonly, nonatomic) CEKBadgeTextView *_enabledTextView; // ivar: __enabledTextView
@property (nonatomic) NSInteger shallowDepthOfFieldStatus; // ivar: _shallowDepthOfFieldStatus


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateForShallowDepthOfFieldStatusAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif