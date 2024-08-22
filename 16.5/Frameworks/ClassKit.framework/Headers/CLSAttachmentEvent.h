// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSATTACHMENTEVENT_H
#define CLSATTACHMENTEVENT_H

@class NSString;


#import "CLSInsightEvent.h"

@interface CLSAttachmentEvent : CLSInsightEvent

@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (copy, nonatomic) NSString *classID; // ivar: _classID
@property (nonatomic) NSInteger contextType; // ivar: _contextType
@property (nonatomic) int handoutAttachmentType; // ivar: _handoutAttachmentType
@property (copy, nonatomic) NSString *handoutID; // ivar: _handoutID
@property (copy, nonatomic) NSString *recipientPersonID; // ivar: _recipientPersonID


+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAttachmentID:(id)arg0 classID:(id)arg1 handoutID:(id)arg2 eventType:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif