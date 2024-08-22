// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMREADRECEIPTPROCESSINGPIPELINECOMPONENT_H
#define IMREADRECEIPTPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent, IDSService;


#import "IMDMessageStore.h"
#import "IMDChatRegistry.h"
#import "IMDRecentsController.h"

@interface IMReadReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDRecentsController *_recents;
    IDSService *_service;
}




-(id)_markMessagesUpToGUID:(id)arg0 forChat:(id)arg1 isFromMe:(BOOL)arg2 date:(id)arg3 ;
-(id)initWithMessageStore:(id)arg0 chatRegistry:(id)arg1 recents:(id)arg2 IDSService:(id)arg3 ;
-(id)runIndividuallyWithInput:(id)arg0 ;
-(void)_donateReadEventForChat:(id)arg0 ;


@end


#endif