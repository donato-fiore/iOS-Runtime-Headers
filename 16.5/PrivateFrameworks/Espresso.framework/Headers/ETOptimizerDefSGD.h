// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETOPTIMIZERDEFSGD_H
#define ETOPTIMIZERDEFSGD_H



#import "ETOptimizerDef.h"

@interface ETOptimizerDefSGD : ETOptimizerDef

@property float lr; // ivar: _lr
@property float lr_decay_epoch; // ivar: _lr_decay_epoch
@property float momentum; // ivar: _momentum
@property float weight_decay; // ivar: _weight_decay


-(id)init;


@end


#endif