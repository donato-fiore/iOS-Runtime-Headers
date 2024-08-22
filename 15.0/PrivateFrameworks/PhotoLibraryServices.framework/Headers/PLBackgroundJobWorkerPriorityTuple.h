// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBACKGROUNDJOBWORKERPRIORITYTUPLE_H
#define PLBACKGROUNDJOBWORKERPRIORITYTUPLE_H


#import <Foundation/Foundation.h>

#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobWorkerPriorityTuple : NSObject

@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) PLBackgroundJobWorker *worker; // ivar: _worker


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithWorker:(id)arg0 priority:(NSInteger)arg1 ;


@end


#endif