// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRIGGEREVENTREALMOBJECT_H
#define WFTRIGGEREVENTREALMOBJECT_H

@class NSDate, NSString, NSData;
@protocol WFRecordStorage;


#import "RLMObject.h"

@interface WFTriggerEventRealmObject : RLMObject <WFRecordStorage>



@property (nonatomic) BOOL confirmed; // ivar: _confirmed
@property (copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *eventInfo; // ivar: _eventInfo
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *triggerID; // ivar: _triggerID


+(id)primaryKey;
+(id)requiredProperties;
-(id)descriptor;


@end


#endif