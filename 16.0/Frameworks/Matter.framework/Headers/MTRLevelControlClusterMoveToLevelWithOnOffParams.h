// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRLEVELCONTROLCLUSTERMOVETOLEVELWITHONOFFPARAMS_H
#define MTRLEVELCONTROLCLUSTERMOVETOLEVELWITHONOFFPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRLevelControlClusterMoveToLevelWithOnOffParams : NSObject

@property (retain, nonatomic) NSNumber *level; // ivar: _level
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)description;
-(id)init;


@end


#endif