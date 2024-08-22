// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUMOTIONDATA_H
#define TUMOTIONDATA_H


#import <Foundation/Foundation.h>


@interface TUMotionData : NSObject {
    ? attitude;
    ? rotationRate;
    ? gravity;
    ? userAcceleration;
    ? deviceOrientation;
    ? source;
}




-(id)init;


@end


#endif