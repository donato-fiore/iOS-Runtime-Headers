// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMODEDIAL_H
#define CAMMODEDIAL_H

@class UIControl, CAGradientLayer, NSDictionary, UIView, NSArray, NSString;
@protocol CAMAccessibilityHUDItemProvider, CAMModeDialDataSource;



@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider>



@property (readonly, nonatomic) CAGradientLayer *_gradientLayer; // ivar: __gradientLayer
@property (retain, nonatomic, setter=_setItems:) NSDictionary *_items; // ivar: __items
@property (readonly, nonatomic) UIView *_itemsContainerView; // ivar: __itemsContainerView
@property (readonly, nonatomic) UIView *_meshTransformView; // ivar: __meshTransformView
@property (retain, nonatomic, setter=_setModes:) NSArray *_modes; // ivar: __modes
@property (readonly, nonatomic) UIView *_selectedItemBackgroundView; // ivar: __selectedItemBackgroundView
@property (nonatomic) NSObject<CAMModeDialDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger selectedMode; // ivar: _selectedMode
@property (readonly) Class superclass;


+(BOOL)wantsVerticalModeDialForLayoutStyle:(NSInteger)arg0 ;
-(CGFloat)_centeringNudgeForMode:(NSInteger)arg0 ;
-(NSInteger)_nearestCaptureModeForLocation:(struct CGPoint )arg0 ;
-(id)_fontForLayoutStyle:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(id)_horizontalMeshTransform;
-(id)_meshTransformForLayoutStyle:(NSInteger)arg0 ;
-(id)_selectedItem;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGPoint )_horizontalContainerCenterForMode:(NSInteger)arg0 ;
-(struct CGPoint )_verticalContainerCenterForMode:(NSInteger)arg0 ;
-(struct CGSize )_interpolatedHorizontalMeshTransformSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonCAMModeDialInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_configureGradientForLayoutStyle:(NSInteger)arg0 ;
-(void)_configureMeshTransformForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutHorizontalModeDial;
-(void)_layoutVerticalModeDial;
-(void)_updateContainerCenterFromSelectedModeAnimated:(BOOL)arg0 ;
-(void)_updateForLayoutStyle;
-(void)_updateItemsForLayoutStyle:(NSInteger)arg0 ;
-(void)_updateSelectedItemBackgroundForLayoutStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif