// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCABACKDROPLAYERVIEW_H
#define AVCABACKDROPLAYERVIEW_H

@class UIView, UIColor, NSHashTable, CABackdropLayer;


#import "AVCABackdropLayerView.h"

@interface AVCABackdropLayerView : UIView

@property (nonatomic) NSInteger activeBackdropEffect; // ivar: _activeBackdropEffect
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property (copy, nonatomic) UIColor *customBackgroundColor; // ivar: _customBackgroundColor
@property (readonly, nonatomic) NSHashTable *dependents; // ivar: _dependents
@property (nonatomic) BOOL forceLowQualityEffect; // ivar: _forceLowQualityEffect
@property (weak, nonatomic) AVCABackdropLayerView *groupLeader; // ivar: _groupLeader
@property (readonly, nonatomic) CABackdropLayer *layer;


+(id)averageFilter;
+(id)blurFilter;
+(id)colorMatrixFilter;
+(id)reducedTransparencyColor;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_ensureDependents;
-(void)_enumerateDependents:(id)arg0 ;
-(void)_updateFilters;
-(void)addDependent:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)removeDependent:(id)arg0 ;
-(void)updateActiveBackdropEffectIfGroupLeader;
-(void)updateGroupLeader;


@end


#endif