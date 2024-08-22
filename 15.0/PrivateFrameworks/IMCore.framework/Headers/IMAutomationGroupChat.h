// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMAUTOMATIONGROUPCHAT_H
#define IMAUTOMATIONGROUPCHAT_H



#import "IMCoreAutomationHook.h"

@interface IMAutomationGroupChat : IMCoreAutomationHook



-(id)_runChangeParticipantsQueryWithGroupID:(id)arg0 participants:(id)arg1 timeOut:(CGFloat)arg2 error:(*id)arg3 optArguments:(id)arg4 addParticipants:(BOOL)arg5 ;
-(id)addParticipantsWithGroupID:(id)arg0 participants:(id)arg1 timeOut:(CGFloat)arg2 error:(*id)arg3 optArguments:(id)arg4 ;
-(id)changeGroupNameWithGroupID:(id)arg0 newName:(id)arg1 timeOut:(CGFloat)arg2 error:(*id)arg3 optArguments:(id)arg4 ;
-(id)createGroupChatWithDestinationIDs:(id)arg0 error:(*id)arg1 optArguments:(id)arg2 ;
-(id)groupNameWithGroupID:(id)arg0 timeOut:(CGFloat)arg1 error:(*id)arg2 optArguments:(id)arg3 ;
-(id)groupParticipantsWithGroupID:(id)arg0 timeOut:(CGFloat)arg1 error:(*id)arg2 optArguments:(id)arg3 ;
-(id)removeParticipantsWithGroupID:(id)arg0 participants:(id)arg1 timeOut:(CGFloat)arg2 error:(*id)arg3 optArguments:(id)arg4 ;


@end


#endif