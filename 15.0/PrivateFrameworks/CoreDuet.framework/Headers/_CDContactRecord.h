// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDCONTACTRECORD_H
#define _CDCONTACTRECORD_H

@class NSManagedObject, NSString, NSURL, NSSet;


#import "_CDContact.h"

@interface _CDContactRecord : NSManagedObject

@property (retain) _CDContact *contact; // ivar: contact
@property (nonatomic) CGFloat creationDate;
@property (retain, nonatomic) NSString *customIdentifier;
@property (retain, nonatomic) NSURL *displayImageURL;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) int displayType;
@property (nonatomic) CGFloat firstIncomingRecipientDate;
@property (nonatomic) CGFloat firstIncomingSenderDate;
@property (nonatomic) CGFloat firstOutgoingRecipientDate;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int incomingRecipientCount;
@property (nonatomic) int incomingSenderCount;
@property (retain, nonatomic) NSSet *interactionRecipient;
@property (retain, nonatomic) NSSet *interactionSender;
@property (nonatomic) CGFloat lastIncomingRecipientDate;
@property (nonatomic) CGFloat lastIncomingSenderDate;
@property (nonatomic) CGFloat lastOutgoingRecipientDate;
@property (nonatomic) int outgoingRecipientCount;
@property (retain, nonatomic) NSString *personId;
@property (nonatomic) int personIdType;
@property (nonatomic) int type;




@end


#endif