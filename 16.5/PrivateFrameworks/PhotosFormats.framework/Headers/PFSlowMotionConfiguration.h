// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSLOWMOTIONCONFIGURATION_H
#define PFSLOWMOTIONCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "PFSlowMotionRampConfiguration.h"

@interface PFSlowMotionConfiguration : NSObject

@property (readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampDown; // ivar: _rampDown
@property (readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampUp; // ivar: _rampUp
@property (readonly, nonatomic) float volumeDuringRampToSlowMotion; // ivar: _volumeDuringRampToSlowMotion
@property (readonly, nonatomic) float volumeDuringSlowMotion; // ivar: _volumeDuringSlowMotion


-(id)init;


@end


#endif