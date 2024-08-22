// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCONVERSATIONFLAGCHANGETRIAGEACTION_H
#define MSCONVERSATIONFLAGCHANGETRIAGEACTION_H

@class EMMessage;


#import "MSFlagChangeTriageAction.h"

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (readonly, nonatomic) EMMessage *referenceMessage;


+(NSInteger)conversationNotificationLevel;
-(id)_changeAction;
-(id)initWithReferenceMessage:(id)arg0 delegate:(id)arg1 reason:(NSInteger)arg2 ;
-(id)messageFlags;
-(void)_toggleFlagWithBuilder:(id)arg0 ;


@end


#endif