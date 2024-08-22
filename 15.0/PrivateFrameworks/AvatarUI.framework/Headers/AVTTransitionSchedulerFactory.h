// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTTRANSITIONSCHEDULERFACTORY_H
#define AVTTRANSITIONSCHEDULERFACTORY_H


#import <Foundation/Foundation.h>


@interface AVTTransitionSchedulerFactory : NSObject



// +(id)concurrentTransitionSchedulerWithEventHandler:(id)arg0 delay:(unk)arg1  ;
+(id)synchronousTransitionSchedulerWithEventHandler:(id)arg0 ;


@end


#endif