// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALWAYSONBRIGHTNESSCURVECONTROLLER_H
#define SBALWAYSONBRIGHTNESSCURVECONTROLLER_H

@class BrightnessSystemClient;

#import <Foundation/Foundation.h>


@interface SBAlwaysOnBrightnessCurveController : NSObject {
    BrightnessSystemClient *_brightnessSystemClient;
    os_unfair_lock_s _lock;
    BOOL _lock_useAlwaysOnBrightnessCurve;
    BOOL _lock_didSetAlwaysOnBrightnessCurve;
}


@property (readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) BOOL useAlwaysOnBrightnessCurve;


-(id)init;
-(id)initWithBrightnessSystemClient:(id)arg0 ;


@end


#endif