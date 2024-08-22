// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEEMERGENCYSTARTMESSAGE_H
#define CTSTEWIEEMERGENCYSTARTMESSAGE_H

@class NSString, NSData;
@protocol CTStewieMessageOutgoing;

#import <Foundation/Foundation.h>


@interface CTStewieEmergencyStartMessage : NSObject <CTStewieMessageOutgoing>



@property (nonatomic) NSInteger conversationID; // ivar: _conversationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger notifyOption; // ivar: _notifyOption
@property (retain, nonatomic) NSData *serializedQuestionnaireAnswers; // ivar: _serializedQuestionnaireAnswers
@property (nonatomic) BOOL shareEED; // ivar: _shareEED
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEmergencyStartMessage:(id)arg0 ;
-(CGFloat)estimatedSendTime;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif