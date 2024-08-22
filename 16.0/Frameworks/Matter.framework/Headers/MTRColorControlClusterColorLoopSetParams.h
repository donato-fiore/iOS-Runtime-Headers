// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCOLORCONTROLCLUSTERCOLORLOOPSETPARAMS_H
#define MTRCOLORCONTROLCLUSTERCOLORLOOPSETPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterColorLoopSetParams : NSObject

@property (retain, nonatomic) NSNumber *action; // ivar: _action
@property (retain, nonatomic) NSNumber *direction; // ivar: _direction
@property (retain, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (retain, nonatomic) NSNumber *startHue; // ivar: _startHue
@property (retain, nonatomic) NSNumber *time; // ivar: _time
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *updateFlags; // ivar: _updateFlags


-(id)description;
-(id)init;


@end


#endif