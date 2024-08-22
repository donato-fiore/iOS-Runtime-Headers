// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRESTIMATORINPUT_H
#define PRESTIMATORINPUT_H

@class PRRoseSolution;

#import <Foundation/Foundation.h>


@interface PREstimatorInput : NSObject {
    ? _translation;
}


@property (nonatomic) CGFloat priorTimestamp; // ivar: _priorTimestamp
@property (retain, nonatomic) PRRoseSolution *proximity; // ivar: _proximity
@property (nonatomic) ? rotation; // ivar: _rotation
@property (nonatomic) CGFloat subsequentTimestamp; // ivar: _subsequentTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property ? translation;




@end


#endif