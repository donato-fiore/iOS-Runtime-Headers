// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPLATTERTRANSFORMVIEW_H
#define _UIPLATTERTRANSFORMVIEW_H



#import "UIView.h"
#import "_UIPortalView.h"
#import "UITargetedPreview.h"

@interface _UIPlatterTransformView : UIView

@property (nonatomic) BOOL allowsUserInteraction; // ivar: _allowsUserInteraction
@property (nonatomic) BOOL appliesMinificationFilter; // ivar: _appliesMinificationFilter
@property (nonatomic) BOOL forwardsHitTestingToSourceView; // ivar: _forwardsHitTestingToSourceView
@property (nonatomic) BOOL hidesSourceView; // ivar: _hidesSourceView
@property (nonatomic) BOOL matchesAlpha; // ivar: _matchesAlpha
@property (retain, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (nonatomic) BOOL shouldTakeOwnershipOfSourceView; // ivar: _shouldTakeOwnershipOfSourceView
@property (retain, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview
@property (readonly, nonatomic) UIView *sourceView;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateMinificationFilter;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif