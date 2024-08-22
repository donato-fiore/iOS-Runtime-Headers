// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCOLORCONTROLCLUSTERCOLORLOOPSETPARAMS_H
#define MTRCOLORCONTROLCLUSTERCOLORLOOPSETPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterColorLoopSetParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *action; // ivar: _action
@property (copy, nonatomic) NSNumber *direction; // ivar: _direction
@property (copy, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (copy, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *startHue; // ivar: _startHue
@property (copy, nonatomic) NSNumber *time; // ivar: _time
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *updateFlags; // ivar: _updateFlags


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif