// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGECONVERSATIONFLAGCHANGEACTION_H
#define EMMESSAGECONVERSATIONFLAGCHANGEACTION_H

@class NSArray;


#import "EMMessageChangeAction.h"

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction

@property (copy, nonatomic) NSArray *conversationIDs; // ivar: _conversationIDs
@property (readonly, nonatomic) NSInteger conversationNotificationLevel; // ivar: _conversationNotificationLevel


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationIDs:(id)arg0 conversationNotificationLevel:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif