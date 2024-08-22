// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEEMERGENCYTEXTMESSAGE_H
#define CTSTEWIEEMERGENCYTEXTMESSAGE_H

@class NSString;
@protocol CTStewieMessageIncoming, CTStewieMessageOutgoing;

#import <Foundation/Foundation.h>


@interface CTStewieEmergencyTextMessage : NSObject <CTStewieMessageIncoming, CTStewieMessageOutgoing>



@property (nonatomic) NSInteger conversationID; // ivar: _conversationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger incomingTextNotifyOption; // ivar: _incomingTextNotifyOption
@property (nonatomic) NSInteger sequenceNum; // ivar: _sequenceNum
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(CGFloat)estimatedSendTimeForEmergencyText:(id)arg0 ;
+(NSInteger)maxLengthInBytesForIncomingText;
+(NSInteger)maxLengthInBytesForOutgoingText;
+(NSInteger)maxSequenceNum;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEmergencyTextMessage:(id)arg0 ;
-(CGFloat)estimatedSendTime;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initIncomingTextMessageWithConversationID:(NSInteger)arg0 sequenceNum:(NSInteger)arg1 emergencyText:(id)arg2 notifyOption:(NSInteger)arg3 error:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationID:(NSInteger)arg0 sequenceNum:(NSInteger)arg1 emergencyText:(id)arg2 error:(*id)arg3 ;
-(id)initWithConversationIDInternal:(NSInteger)arg0 sequenceNum:(NSInteger)arg1 emergencyText:(id)arg2 maxTextLength:(NSUInteger)arg3 error:(*id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif