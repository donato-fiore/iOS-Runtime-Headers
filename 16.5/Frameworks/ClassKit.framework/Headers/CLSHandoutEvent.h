// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSHANDOUTEVENT_H
#define CLSHANDOUTEVENT_H

@class NSArray, NSString, NSDate;


#import "CLSInsightEvent.h"

@interface CLSHandoutEvent : CLSInsightEvent

@property (copy, nonatomic) NSArray *attachmentDetails; // ivar: _attachmentDetails
@property (copy, nonatomic) NSString *classID; // ivar: _classID
@property (retain, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (copy, nonatomic) NSString *handoutID; // ivar: _handoutID
@property (copy, nonatomic) NSArray *recipientIDs; // ivar: _recipientIDs


+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithClassID:(id)arg0 handoutID:(id)arg1 eventType:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif