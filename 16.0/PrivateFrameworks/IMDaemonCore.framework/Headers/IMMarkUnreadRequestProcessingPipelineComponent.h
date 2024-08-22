// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMARKUNREADREQUESTPROCESSINGPIPELINECOMPONENT_H
#define IMMARKUNREADREQUESTPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent, IDSService;


#import "IMDMessageStore.h"
#import "IMDChatRegistry.h"
#import "IMDMessageSuppressionController.h"
#import "IMDRecentsController.h"

@interface IMMarkUnreadRequestProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDMessageSuppressionController *_messageSuppressionController;
    IMDRecentsController *_recents;
    IDSService *_service;
}




-(id)initWithMessageStore:(id)arg0 chatRegistry:(id)arg1 messageSuppressionController:(id)arg2 recents:(id)arg3 IDSService:(id)arg4 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif