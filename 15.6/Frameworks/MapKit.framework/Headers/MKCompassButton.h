// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCOMPASSBUTTON_H
#define MKCOMPASSBUTTON_H

@class UIView, UIView<MKCompassView>;


#import "MKMapView.h"

@interface MKCompassButton : UIView {
    UIView<MKCompassView> *_compassView;
    BOOL _visible;
}


@property (nonatomic) NSInteger compassVisibility; // ivar: _compassVisibility
@property (weak, nonatomic) MKMapView *mapView; // ivar: _mapView


+(id)compassButtonWithMapView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 mapView:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_updateVisibility;
-(void)addInteraction:(id)arg0 ;
-(void)dealloc;
-(void)didTapCompassGesture:(id)arg0 ;
-(void)mapViewDidUpdateYawNotification:(id)arg0 ;
-(void)removeInteraction:(id)arg0 ;


@end


#endif