// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATATRIGGEREVENT_H
#define WFCOREDATATRIGGEREVENT_H

@class NSManagedObject, NSDate, NSString, NSData;
@protocol WFRecordStorage;


#import "WFCoreDataTrigger.h"

@interface WFCoreDataTriggerEvent : NSManagedObject <WFRecordStorage>



@property (nonatomic) BOOL confirmed;
@property (copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *eventInfo;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) Class superclass;
@property (retain, nonatomic) WFCoreDataTrigger *trigger;


+(id)fetchRequest;
-(id)descriptor;


@end


#endif