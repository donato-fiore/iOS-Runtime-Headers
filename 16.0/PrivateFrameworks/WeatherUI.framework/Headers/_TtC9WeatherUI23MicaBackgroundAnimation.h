// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9WEATHERUI23MICABACKGROUNDANIMATION_H
#define _TTC9WEATHERUI23MICABACKGROUNDANIMATION_H

@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9WeatherUI23MicaBackgroundAnimation : NSObject <CALayerDelegate>

 {
    ? layer;
    ? playbackCoordinator;
    ? stateController;
    ? rootLayer;
    ? rotationLayer;
    ? displayScale;
    ? timeStep;
    ? randomSpeedVariance;
    ? stateName;
    ? isAnimating;
    ? isActive;
    ? scale;
}




-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif