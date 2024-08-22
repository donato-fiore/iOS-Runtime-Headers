// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ILMESSAGECOMMUNICATION_H
#define ILMESSAGECOMMUNICATION_H

@class NSString;


#import "ILCommunication.h"

@interface ILMessageCommunication : ILCommunication

@property (readonly, copy, nonatomic) NSString *messageBody; // ivar: _messageBody


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMessageCommunication:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSender:(id)arg0 dateReceived:(id)arg1 messageBody:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif