// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGARAGEDOORICONCONTENTVIEW_H
#define HUGARAGEDOORICONCONTENTVIEW_H

@class UIVisualEffectView, UIView;


#import "HUPrimaryStateIconContentView.h"
#import "HUGarageDoorStateTransition.h"
#import "HUShapeLayerView.h"
#import "HUVisualEffectContainerView.h"

@interface HUGarageDoorIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) HUGarageDoorStateTransition *activeTransition; // ivar: _activeTransition
@property (retain, nonatomic) UIVisualEffectView *bottomPanelHingeView; // ivar: _bottomPanelHingeView
@property (retain, nonatomic) HUShapeLayerView *bottomPanelViewWithHandle; // ivar: _bottomPanelViewWithHandle
@property (retain, nonatomic) HUShapeLayerView *bottomPanelViewWithoutHandle; // ivar: _bottomPanelViewWithoutHandle
@property (retain, nonatomic) HUVisualEffectContainerView *buildingContainerView; // ivar: _buildingContainerView
@property (retain, nonatomic) HUShapeLayerView *buildingView; // ivar: _buildingView
@property (retain, nonatomic) UIVisualEffectView *carContainerView; // ivar: _carContainerView
@property (retain, nonatomic) HUShapeLayerView *carView; // ivar: _carView
@property (nonatomic) BOOL clipBottomPanelShapesToBounds; // ivar: _clipBottomPanelShapesToBounds
@property (retain, nonatomic) UIView *doorContainerView; // ivar: _doorContainerView
@property (retain, nonatomic) UIView *doorHingeView; // ivar: _doorHingeView
@property (retain, nonatomic) UIView *doorView; // ivar: _doorView
@property (retain, nonatomic) UIVisualEffectView *middlePanelHingeView; // ivar: _middlePanelHingeView
@property (retain, nonatomic) HUShapeLayerView *middlePanelView; // ivar: _middlePanelView
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (retain, nonatomic) UIVisualEffectView *topPanelHingeView; // ivar: _topPanelHingeView
@property (retain, nonatomic) HUShapeLayerView *topPanelView; // ivar: _topPanelView


+(CGFloat)_referenceHeightForPanelAtPosition:(NSUInteger)arg0 open:(BOOL)arg1 ;
+(CGFloat)_referenceOriginYForPanelAtPosition:(NSUInteger)arg0 open:(BOOL)arg1 ;
+(CGFloat)_scaleFactorForBounds:(struct CGRect )arg0 referenceSize:(struct CGSize )arg1 ;
+(id)_pathForBottomDoorPanelWithHandleForBounds:(struct CGRect )arg0 ;
+(id)_pathForMiddleDoorPanelWithHandleForBounds:(struct CGRect )arg0 ;
+(id)buildingPathForBounds:(struct CGRect )arg0 ;
+(id)carPathForBounds:(struct CGRect )arg0 ;
+(id)pathForPanelAtPosition:(NSUInteger)arg0 bounds:(struct CGRect )arg1 showHandle:(BOOL)arg2 ;
-(BOOL)wantsManagedVibrancyEffect;
-(CGFloat)_referenceScaleFactor;
-(id)_createPanelViewForPosition:(NSUInteger)arg0 showHandle:(BOOL)arg1 ;
-(id)_panelViewsForPosition:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)managedVisualEffectViews;
-(id)panelHingeViews;
-(struct CATransform3D )_doorHingeSublayerTransformForOpenState:(BOOL)arg0 ;
-(struct CATransform3D )_panelHingeSublayerTransformWithOpenState:(BOOL)arg0 ;
-(struct CGAffineTransform )_referenceScaleTransform;
-(struct CGRect )_frameForPanelAtPosition:(NSUInteger)arg0 open:(BOOL)arg1 relativeToHinge:(BOOL)arg2 ;
-(struct CGRect )_frameForPanelHingeAtPosition:(NSUInteger)arg0 open:(BOOL)arg1 ;
-(void)_enumeratePanelViewsWithBlock:(id)arg0 ;
-(void)_updateCarLayoutForOpenState:(BOOL)arg0 ;
-(void)_updateLayoutForOpenState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updatePanelLayoutForOpenState:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)updateColorsForDisplayStyle:(NSUInteger)arg0 ;
-(void)updateIconFromState:(NSInteger)arg0 toState:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif