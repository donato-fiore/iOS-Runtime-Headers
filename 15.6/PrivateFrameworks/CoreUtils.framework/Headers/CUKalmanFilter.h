// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUKALMANFILTER_H
#define CUKALMANFILTER_H


#import <Foundation/Foundation.h>

#import "CUKalmanConfiguration.h"

@interface CUKalmanFilter : NSObject {
    CUKalmanConfiguration *_config;
}


@property (readonly, nonatomic) CGFloat stateU; // ivar: _stateU
@property (readonly, nonatomic) CGFloat stateX; // ivar: _stateX


-(CGFloat)updateWithValue:(CGFloat)arg0 ;
-(CGFloat)updateWithValue:(CGFloat)arg0 control:(CGFloat)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif