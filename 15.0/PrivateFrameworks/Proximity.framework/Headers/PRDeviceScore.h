// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRDEVICESCORE_H
#define PRDEVICESCORE_H

@class NSData;

#import <Foundation/Foundation.h>

#import "PRAngleMeasurement.h"
#import "PRRangeMeasurement.h"

@interface PRDeviceScore : NSObject

@property (readonly) PRAngleMeasurement *angle; // ivar: _angle
@property (readonly) NSData *btAddress; // ivar: _btAddress
@property (readonly) NSInteger proximity; // ivar: _proximity
@property (readonly) PRRangeMeasurement *range; // ivar: _range
@property (readonly) CGFloat score; // ivar: _score
@property (readonly) CGFloat scoreUncertainty; // ivar: _scoreUncertainty
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPRDeviceScore:(id)arg0 ;
-(id)init;
-(id)initWithValues:(id)arg0 proximity:(NSInteger)arg1 range:(id)arg2 angle:(id)arg3 score:(CGFloat)arg4 scoreUncertainty:(CGFloat)arg5 ;


@end


#endif