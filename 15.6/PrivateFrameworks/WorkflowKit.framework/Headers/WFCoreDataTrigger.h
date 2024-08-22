// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATATRIGGER_H
#define WFCOREDATATRIGGER_H

@class NSManagedObject, NSData, NSString, NSSet;
@protocol WFRecordStorage;


#import "WFCoreDataRunEvent.h"
#import "WFCoreDataWorkflow.h"

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>



@property (retain, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSSet *events;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int notificationLevel;
@property (retain, nonatomic) WFCoreDataRunEvent *runEvents;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic) int source;
@property (retain, nonatomic) NSData *suggestionData;
@property (readonly) Class superclass;


+(id)fetchRequest;
+(id)recordPropertyMap;
-(id)descriptor;
-(id)trigger;


@end


#endif