// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOREDATAWORKFLOWICON_H
#define WFCOREDATAWORKFLOWICON_H

@class NSManagedObject;


#import "WFCoreDataCollection.h"
#import "WFCoreDataWorkflow.h"

@interface WFCoreDataWorkflowIcon : NSManagedObject

@property (nonatomic) NSInteger backgroundColorValue;
@property (retain, nonatomic) WFCoreDataCollection *collection;
@property (nonatomic) NSInteger glyphNumber;
@property (retain, nonatomic) WFCoreDataWorkflow *workflow;


+(id)fetchRequest;


@end


#endif