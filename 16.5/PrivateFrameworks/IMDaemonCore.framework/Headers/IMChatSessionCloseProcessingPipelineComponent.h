// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHATSESSIONCLOSEPROCESSINGPIPELINECOMPONENT_H
#define IMCHATSESSIONCLOSEPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDAccount.h"
#import "IMDMessageStore.h"
#import "IMDChatRegistry.h"
#import "IMDiMessageIDSTrustedData.h"

@interface IMChatSessionCloseProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount *_account;
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDiMessageIDSTrustedData *_idsTrustedData;
}




-(id)initWithAccount:(id)arg0 messageStore:(id)arg1 chatRegistry:(id)arg2 idsTrustedData:(id)arg3 ;
-(id)initWithMessageStore:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif