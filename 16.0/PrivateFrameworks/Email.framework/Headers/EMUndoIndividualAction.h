// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMUNDOINDIVIDUALACTION_H
#define EMUNDOINDIVIDUALACTION_H

@class NSURL, ECMessageFlagChange, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "EMFollowUp.h"

@interface EMUndoIndividualAction : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic) BOOL blockSender; // ivar: _blockSender
@property (nonatomic) NSInteger conversationID; // ivar: _conversationID
@property (nonatomic) NSInteger conversationNotificationLevel; // ivar: _conversationNotificationLevel
@property (retain, nonatomic) NSURL *destinationMailboxURL; // ivar: _destinationMailboxURL
@property (retain, nonatomic) ECMessageFlagChange *flagChange; // ivar: _flagChange
@property (retain, nonatomic) EMFollowUp *followUp; // ivar: _followUp
@property (retain, nonatomic) NSArray *messageDatabaseIDs; // ivar: _messageDatabaseIDs
@property (retain, nonatomic) NSDate *readLaterDate; // ivar: _readLaterDate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif