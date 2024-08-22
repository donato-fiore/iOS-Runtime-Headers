// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATARUNEVENT_H
#define WFCOREDATARUNEVENT_H

@class NSManagedObject, NSDate, NSString;
@protocol WFRecordStorage;


#import "WFCoreDataWorkflow.h"
#import "WFCoreDataTrigger.h"

@interface WFCoreDataRunEvent : NSManagedObject <WFRecordStorage>



@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int outcome;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;
@property (copy, nonatomic) NSString *source;
@property (readonly) Class superclass;
@property (retain, nonatomic) WFCoreDataTrigger *trigger;


+(id)fetchRequest;
-(id)descriptor;


@end


#endif