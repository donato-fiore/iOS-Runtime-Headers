// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTMAPDETAILITEM_H
#define EKEVENTMAPDETAILITEM_H

@class MKMapItemView, UIView, CLLocation;


#import "EKEventDetailItem.h"
#import "EKEventMapCell.h"

@interface EKEventMapDetailItem : EKEventDetailItem {
    EKEventMapCell *_cell;
    MKMapItemView *_mapView;
    UIView *_loadingView;
    CLLocation *_location;
    EKEventMapCell *_oldCell;
    BOOL _animationHasRan;
}


@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // ivar: _hasMapItemLaunchOptionFromTimeToLeaveNotification


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)_mapHeight;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg0 inCell:(id)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(struct ? )_makeSpanWithCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 minRadius:(CGFloat)arg2 ;
-(void)_animateMapIfNeededWithPresentingController:(id)arg0 presentingView:(id)arg1 ;
-(void)_loadMapItem:(id)arg0 withCoordinateSpan:(struct ? )arg1 ;
-(void)eventViewController:(id)arg0 tableViewDidScroll:(id)arg1 ;
-(void)reset;
-(void)setupMapView;
-(void)updateViewColors;


@end


#endif