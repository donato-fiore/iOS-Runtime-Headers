// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARGEOTRACKINGTECHNIQUESTATEPOSE_H
#define ARGEOTRACKINGTECHNIQUESTATEPOSE_H


#import <Foundation/Foundation.h>


@interface ARGeoTrackingTechniqueStatePose : NSObject

@property (readonly, nonatomic) BOOL fused; // ivar: _fused
@property (readonly, nonatomic) CGFloat heading; // ivar: _heading
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) ? transform; // ivar: _transform


-(id)initWithTimestamp:(CGFloat)arg0 transform:(struct ? )arg1 fused:(BOOL)arg2 heading:(CGFloat)arg3 ;


@end


#endif