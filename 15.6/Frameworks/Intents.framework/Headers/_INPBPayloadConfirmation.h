// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBPAYLOADCONFIRMATION_H
#define _INPBPAYLOADCONFIRMATION_H

@class PBCodable, NSString;
@protocol _INPBPayloadConfirmation, NSSecureCoding, NSCopying;


#import "_INPBSelectionItem.h"

@interface _INPBPayloadConfirmation : PBCodable <_INPBPayloadConfirmation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int addTasksIntentTargetTaskListConfirmationReason; // ivar: _addTasksIntentTargetTaskListConfirmationReason
@property (retain, nonatomic) _INPBSelectionItem *confirmationItem; // ivar: _confirmationItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAddTasksIntentTargetTaskListConfirmationReason;
@property (readonly, nonatomic) BOOL hasConfirmationItem;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSendAnnouncementIntentAnnouncementConfirmationReason;
@property (nonatomic) BOOL hasStartCallIntentContactsConfirmationReason;
@property (readonly) NSUInteger hash;
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) int sendAnnouncementIntentAnnouncementConfirmationReason; // ivar: _sendAnnouncementIntentAnnouncementConfirmationReason
@property (nonatomic) int startCallIntentContactsConfirmationReason; // ivar: _startCallIntentContactsConfirmationReason
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)reasonAsString:(int)arg0 ;
-(id)sendAnnouncementIntentAnnouncementConfirmationReasonAsString:(int)arg0 ;
-(id)startCallIntentContactsConfirmationReasonAsString:(int)arg0 ;
-(int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(id)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(int)StringAsSendAnnouncementIntentAnnouncementConfirmationReason:(id)arg0 ;
-(int)StringAsStartCallIntentContactsConfirmationReason:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif