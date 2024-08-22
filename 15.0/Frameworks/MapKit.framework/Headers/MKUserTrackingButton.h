// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKUSERTRACKINGBUTTON_H
#define MKUSERTRACKINGBUTTON_H

@class UIView;


#import "_MKUserTrackingButton.h"
#import "MKMapView.h"

@interface MKUserTrackingButton : UIView {
    _MKUserTrackingButton *_button;
}


@property (weak, nonatomic) MKMapView *mapView;


+(id)userTrackingButtonWithMapView:(id)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 button:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)addInteraction:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeInteraction:(id)arg0 ;


@end


#endif