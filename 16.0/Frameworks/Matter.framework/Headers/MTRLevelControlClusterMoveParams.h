// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRLEVELCONTROLCLUSTERMOVEPARAMS_H
#define MTRLEVELCONTROLCLUSTERMOVEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRLevelControlClusterMoveParams : NSObject

@property (retain, nonatomic) NSNumber *moveMode; // ivar: _moveMode
@property (retain, nonatomic) NSNumber *optionMask; // ivar: _optionMask
@property (retain, nonatomic) NSNumber *optionOverride; // ivar: _optionOverride
@property (retain, nonatomic) NSNumber *rate; // ivar: _rate
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif