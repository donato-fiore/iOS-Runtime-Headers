// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVSCHEDULECHANGESPROPERTY_H
#define CALDAVSCHEDULECHANGESPROPERTY_H

@class NSString, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "CalDAVOccurrenceChange.h"

@interface CalDAVScheduleChangesProperty : NSObject

@property (nonatomic) int actionType; // ivar: _actionType
@property (retain, nonatomic) NSString *attendeeAddress; // ivar: _attendeeAddress
@property (retain, nonatomic) NSString *dateStamp; // ivar: _dateStamp
@property (readonly, nonatomic) BOOL isCancel;
@property (readonly, nonatomic) BOOL isCreate;
@property (readonly, nonatomic) BOOL isReply;
@property (readonly, nonatomic) BOOL isUpdate;
@property (retain, nonatomic) CalDAVOccurrenceChange *masterChange; // ivar: _masterChange
@property (retain, nonatomic) NSMutableDictionary *occurrenceChanges; // ivar: _occurrenceChanges
@property (readonly, nonatomic) NSArray *recurrenceIDs;


+(id)debugStringForType:(int)arg0 ;
+(id)propertyWithItem:(id)arg0 ;
-(id)changeForOccurrence:(id)arg0 ;
-(id)init;
-(void)addOccurrenceChange:(id)arg0 ;


@end


#endif