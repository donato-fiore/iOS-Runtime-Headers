// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULOCATIONTRIGGEREDITORMAPDRAGRADIUSVIEW_H
#define HULOCATIONTRIGGEREDITORMAPDRAGRADIUSVIEW_H

@class UIView, MKMapView;
@protocol HULocationTriggerEditorMapDragRadiusViewDelegate;



@interface HULocationTriggerEditorMapDragRadiusView : UIView {
    ? normalizedSliderValue;
    ? radiusInMeters;
    ? radiusSlider;
    ? radiusLabel;
}


@property (nonatomic, weak) NSObject<HULocationTriggerEditorMapDragRadiusViewDelegate> *delegate; // ivar: delegate
@property (nonatomic, weak) MKMapView *mapView; // ivar: mapView
@property (nonatomic) NSUInteger proximity; // ivar: proximity


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 radiusInMeters:(CGFloat)arg1 delegate:(id)arg2 ;


@end


#endif