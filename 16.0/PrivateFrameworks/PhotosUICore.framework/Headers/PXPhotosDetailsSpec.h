// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSSPEC_H
#define PXPHOTOSDETAILSSPEC_H

@class UIColor;


#import "PXFeatureSpec.h"
#import "PXPhotosDetailsBarSpec.h"
#import "PXWidgetCompositionSpec.h"
#import "PXWidgetSpec.h"

@interface PXPhotosDetailsSpec : PXFeatureSpec

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) PXPhotosDetailsBarSpec *barSpec; // ivar: _barSpec
@property (readonly, nonatomic) PXWidgetCompositionSpec *compositionSpec; // ivar: _compositionSpec
@property (readonly, nonatomic) NSUInteger detailsOptions; // ivar: _detailsOptions
@property (readonly, nonatomic) CGFloat dimmingAlpha; // ivar: _dimmingAlpha
@property (readonly, nonatomic) UIColor *dimmingColor; // ivar: _dimmingColor
@property (readonly, nonatomic) BOOL enableActionsWidget;
@property (readonly, nonatomic) BOOL shouldInitializeBarsController;
@property (readonly, nonatomic) PXWidgetSpec *widgetSpec; // ivar: _widgetSpec


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 detailsOptions:(NSUInteger)arg2 ;


@end


#endif