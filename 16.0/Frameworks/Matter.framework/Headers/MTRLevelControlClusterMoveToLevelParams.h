// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRLEVELCONTROLCLUSTERMOVETOLEVELPARAMS_H
#define MTRLEVELCONTROLCLUSTERMOVETOLEVELPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRLevelControlClusterMoveToLevelParams : NSObject

@property (retain, nonatomic) NSNumber *level; // ivar: _level
@property (retain, nonatomic) NSNumber *optionMask; // ivar: _optionMask
@property (retain, nonatomic) NSNumber *optionOverride; // ivar: _optionOverride
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)description;
-(id)init;


@end


#endif