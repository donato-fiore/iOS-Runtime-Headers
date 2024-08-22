// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMMESSAGECONVERSATIONFLAGCHANGEACTION_H
#define EMMESSAGECONVERSATIONFLAGCHANGEACTION_H



#import "EMMessageChangeAction.h"

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction

@property NSInteger conversationID; // ivar: _conversationID
@property (readonly, nonatomic) NSInteger conversationNotificationLevel; // ivar: _conversationNotificationLevel
@property (readonly, nonatomic) NSInteger originalConversationNotificationLevel; // ivar: _originalConversationNotificationLevel


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationID:(NSInteger)arg0 conversationNotificationLevel:(NSInteger)arg1 originalConversationNotificationLevel:(NSInteger)arg2 ;
-(id)initWithMessage:(id)arg0 conversationNotificationLevel:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif