// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSHALOVIEW_H
#define _UIFOCUSHALOVIEW_H

@class NSString;
@protocol PTSettingsKeyObserver;


#import "UIView.h"
#import "UIColor.h"
#import "UITraitCollection.h"
#import "_UIShapeView.h"
#import "_UIShape.h"

@interface _UIFocusHaloView : UIView <PTSettingsKeyObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *gapColor; // ivar: _gapColor
@property (retain, nonatomic) UITraitCollection *gapSourceTraitCollection; // ivar: _gapSourceTraitCollection
@property (retain, nonatomic) _UIShapeView *gapView; // ivar: _gapView
@property (nonatomic) CGFloat gapWidth; // ivar: _gapWidth
@property (nonatomic) BOOL geometryFrozen; // ivar: _geometryFrozen
@property (readonly, nonatomic) UIColor *haloColor;
@property (retain, nonatomic) _UIShapeView *haloView; // ivar: _haloView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIShapeView *maskViewWhenInside; // ivar: _maskViewWhenInside
@property (nonatomic) NSInteger position; // ivar: _position
@property (copy, nonatomic) _UIShape *shape; // ivar: _shape
@property (readonly) Class superclass;
@property (nonatomic) CGFloat thickness; // ivar: _thickness
@property (readonly, nonatomic) CGFloat totalConsumedSpace;


-(BOOL)_debugEnabled;
-(BOOL)_ignoreRemoveAllAnimations;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)resolvedGapColor;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_updateDebugUI;
-(void)_updateGapColor;
-(void)_updateHalo;
-(void)didMoveToSuperview;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif