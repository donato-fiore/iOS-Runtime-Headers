// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVBACKGROUNDVIEW_H
#define AVBACKGROUNDVIEW_H

@class UIView;


#import "AVLayoutView.h"

@interface AVBackgroundView : UIView

@property (nonatomic) BOOL automaticallyDrawsRoundedCorners; // ivar: _automaticallyDrawsRoundedCorners
@property (nonatomic, getter=isCircular) BOOL circular; // ivar: _circular
@property (retain, nonatomic) AVLayoutView *layoutView; // ivar: _layoutView
@property (nonatomic) BOOL prefersLowQualityEffects; // ivar: _prefersLowQualityEffects


-(BOOL)_isContainedInOverlappingBackgroundView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_ensureOrRemoveLayoutView;
-(void)_updateBackdropShape;
-(void)addSubview:(id)arg0 applyingMaterialStyle:(NSInteger)arg1 tintEffectStyle:(NSInteger)arg2 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif