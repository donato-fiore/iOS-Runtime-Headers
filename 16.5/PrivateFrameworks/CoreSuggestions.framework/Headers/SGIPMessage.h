// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGIPMESSAGE_H
#define SGIPMESSAGE_H

@class NSDate, NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SGIPPerson.h"

@interface SGIPMessage : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (nonatomic) BOOL isGroupConversation; // ivar: _isGroupConversation
@property (nonatomic) BOOL isSenderSignificant; // ivar: _isSenderSignificant
@property (nonatomic) BOOL isSent; // ivar: _isSent
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (retain, nonatomic) NSArray *messageUnits; // ivar: _messageUnits
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) SGIPPerson *sender; // ivar: _sender
@property (retain, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)supportsSecureCoding;
+(id)messageWithIPMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMessage:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif