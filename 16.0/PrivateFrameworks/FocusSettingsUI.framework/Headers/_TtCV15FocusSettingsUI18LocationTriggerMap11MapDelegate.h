// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV15FOCUSSETTINGSUI18LOCATIONTRIGGERMAP11MAPDELEGATE_H
#define _TTCV15FOCUSSETTINGSUI18LOCATIONTRIGGERMAP11MAPDELEGATE_H

@protocol MKMapViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV15FocusSettingsUI18LocationTriggerMap11MapDelegate : NSObject <MKMapViewDelegate>

 {
    ? slider;
    ? _radius;
    ? annotation;
    ? circle;
}




-(id)init;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(void)sliderMovedWithSender:(id)arg0 ;


@end


#endif