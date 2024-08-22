// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKOVERLAYCONTAINERVIEW_H
#define MKOVERLAYCONTAINERVIEW_H

@class UIView, NSArray;
@protocol MKOverlayContainerViewDelegate;


#import "MKMapView.h"

@interface MKOverlayContainerView : UIView {
    NSMutableOrderedSet" _overlays;
    NSMapTable" _overlayToDrawable;
    NSMutableArray" _drawables;
    NSMutableArray" _vkOverlays;
    UIView" _viewContainers;
}


@property (readonly, nonatomic) NSArray *allDrawables;
@property (weak, nonatomic) NSObject<MKOverlayContainerViewDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (nonatomic) CGFloat mapZoomScale; // ivar: _mapZoomScale
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) BOOL requiresModernMap;
@property (readonly, nonatomic) BOOL supportsElevation;


+(NSInteger)_defaultOverlayLevel;
-(BOOL)_allOverlaysSupportElevation;
-(BOOL)_anyOverlayRequiresModernMap;
-(BOOL)_overlayRequiresModernMap:(id)arg0 ;
-(BOOL)_overlaySpansGlobeAndReplacesMapContent;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)_drawableIndexForDrawable:(id)arg0 level:(NSInteger)arg1 ;
-(NSInteger)_levelForOverlay:(id)arg0 exists:(*BOOL)arg1 ;
-(NSUInteger)_overlayCount;
-(id)_considerAddingDrawable:(id)arg0 inAddRect:(struct ? )arg1 level:(NSInteger)arg2 ;
-(id)_viewContainerForLevel:(NSInteger)arg0 ;
-(id)drawableForOverlay:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)overlaysInLevel:(NSInteger)arg0 ;
-(struct ? )_mapRectWithFractionOfVisible:(CGFloat)arg0 ;
-(void)_configureAndAddDrawable:(id)arg0 forOverlay:(id)arg1 level:(NSInteger)arg2 ;
-(void)_exchangeOverlayAtIndex:(NSUInteger)arg0 withOverlayAtIndex:(NSUInteger)arg1 level:(NSInteger)arg2 ;
-(void)_flexTerrainIfNeeded;
-(void)_insertDrawable:(id)arg0 forOverlay:(id)arg1 atIndex:(NSInteger)arg2 level:(NSInteger)arg3 ;
-(void)_removeDrawable:(id)arg0 forOverlay:(id)arg1 level:(NSInteger)arg2 ;
-(void)_unFlexTerrainIfNeeded;
-(void)_updateContentScale:(id)arg0 ;
-(void)_updateShowsAppleLogoIfNeeded;
-(void)addAndRemoveOverlayViews;
-(void)addOverlay:(id)arg0 ;
-(void)addOverlay:(id)arg0 level:(NSInteger)arg1 ;
-(void)addOverlays:(id)arg0 ;
-(void)addOverlays:(id)arg0 level:(NSInteger)arg1 ;
-(void)didMoveToWindow;
-(void)exchangeOverlay:(id)arg0 withOverlay:(id)arg1 ;
-(void)exchangeOverlayAtIndex:(NSUInteger)arg0 withOverlayAtIndex:(NSUInteger)arg1 ;
-(void)insertOverlay:(id)arg0 aboveOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertOverlay:(id)arg0 atIndex:(NSUInteger)arg1 level:(NSInteger)arg2 ;
-(void)insertOverlay:(id)arg0 belowOverlay:(id)arg1 ;
-(void)removeOverlay:(id)arg0 ;
-(void)removeOverlays:(id)arg0 ;


@end


#endif