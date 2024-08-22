// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMFINDCHATPROCESSINGPIPELINECOMPONENT_H
#define IMFINDCHATPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDChatRegistry.h"
#import "IMDAccount.h"

@interface IMFindChatProcessingPipelineComponent : IMPipelineComponent {
    IMDChatRegistry *_chatRegistry;
    IMDAccount *_account;
}




+(id)findGroupChatWithFromIdentifier:(id)arg0 toIdentifier:(id)arg1 groupName:(id)arg2 participants:(id)arg3 groupID:(id)arg4 chatRegistry:(id)arg5 ;
-(BOOL)_participantsContainBizID:(id)arg0 ;
-(BOOL)_shouldDropMessageGroupID:(id)arg0 participants:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 ;
-(BOOL)shouldDropDueToGroupSize:(id)arg0 ;
-(id)initWithChatRegistry:(id)arg0 account:(id)arg1 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif