// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGETRANSFERACTION_H
#define EMMESSAGETRANSFERACTION_H

@class NSURL, ECMessageFlagChange;


#import "EMMessageChangeAction.h"

@interface EMMessageTransferAction : EMMessageChangeAction

@property (readonly, nonatomic) BOOL copyMessages; // ivar: _copyMessages
@property (readonly, nonatomic) NSURL *destinationMailboxURL; // ivar: _destinationMailboxURL
@property (readonly, nonatomic) ECMessageFlagChange *flagChange; // ivar: _flagChange
@property (readonly, nonatomic) NSInteger specialDestinationMailboxType; // ivar: _specialDestinationMailboxType


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageListItems:(id)arg0 destinationMailbox:(id)arg1 copyMessages:(BOOL)arg2 ;
-(id)initWithMessageListItems:(id)arg0 specialDestinationMailboxType:(NSInteger)arg1 flagChange:(id)arg2 copyMessages:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif