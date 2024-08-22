// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOREDATAWORKFLOWQUARANTINE_H
#define WFCOREDATAWORKFLOWQUARANTINE_H

@class NSManagedObject, NSDate, NSString;


#import "WFCoreDataWorkflow.h"

@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (copy, nonatomic) NSDate *importDate;
@property (copy, nonatomic) NSString *sourceAppIdentifier;
@property (retain, nonatomic) WFCoreDataWorkflow *workflow;


+(id)fetchRequest;


@end


#endif