// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTMAPDETAILITEM_H
#define EKEVENTMAPDETAILITEM_H

@class MKMapItemView, NSArray, UIView, CLLocation;


#import "EKEventDetailItem.h"
#import "EKEventMapCell.h"

@interface EKEventMapDetailItem : EKEventDetailItem {
    EKEventMapCell *_cell;
    EKEventMapCell *_oldCell;
    MKMapItemView *_mapView;
    NSArray *_mapViewConstraints;
    UIView *_loadingView;
    NSArray *_loadingViewConstraints;
    CLLocation *_location;
    BOOL _animationHasRan;
}


@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // ivar: _hasMapItemLaunchOptionFromTimeToLeaveNotification


-(BOOL)_shouldShowMapView;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)_mapHeight;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg0 inCell:(id)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(struct ? )_makeSpanWithCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 minRadius:(CGFloat)arg2 ;
-(void)_animateMapIfNeededWithPresentingController:(id)arg0 presentingView:(id)arg1 ;
-(void)_loadMapItem:(id)arg0 withCoordinateSpan:(struct ? )arg1 ;
-(void)_setupCell;
-(void)_setupCellAsEmpty;
-(void)_setupCellWithMapView;
-(void)eventViewController:(id)arg0 tableViewDidScroll:(id)arg1 ;
-(void)refreshCopiedEvents;
-(void)reset;
-(void)setupMapView;
-(void)updateViewColors;


@end


#endif