// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATAWORKFLOWACTIONS_H
#define WFCOREDATAWORKFLOWACTIONS_H

@class NSManagedObject, NSData;


#import "WFCoreDataWorkflow.h"

@interface WFCoreDataWorkflowActions : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;


+(id)fetchRequest;


@end


#endif