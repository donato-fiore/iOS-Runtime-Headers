// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBWORKERPENDINGWORKITEMS_H
#define PLBACKGROUNDJOBWORKERPENDINGWORKITEMS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PLBackgroundJobCriteria.h"

@interface PLBackgroundJobWorkerPendingWorkItems : NSObject

@property (readonly, copy, nonatomic) PLBackgroundJobCriteria *criteria; // ivar: _criteria
@property (readonly, copy, nonatomic) NSArray *workItemsNeedingProcessing; // ivar: _workItemsNeedingProcessing


-(id)initWithCriteria:(id)arg0 workItemsNeedingProcessing:(id)arg1 ;
-(id)initWithZeroWorkItems;


@end


#endif