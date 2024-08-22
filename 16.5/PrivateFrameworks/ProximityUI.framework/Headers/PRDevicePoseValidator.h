// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRDEVICEPOSEVALIDATOR_H
#define PRDEVICEPOSEVALIDATOR_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PRPose.h"

@interface PRDevicePoseValidator : NSObject {
    NSObject<OS_os_log> *_logger;
}


@property (nonatomic) CGFloat maximumSpeed; // ivar: _maximumSpeed
@property (retain, nonatomic) PRPose *previousPose; // ivar: _previousPose


-(BOOL)validatePose:(id)arg0 ;
-(id)initWithMaximumSpeed:(CGFloat)arg0 ;


@end


#endif