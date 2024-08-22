// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTEXTMESSAGEPROCESSINGPIPELINECOMPONENT_H
#define IMTEXTMESSAGEPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDAccount.h"
#import "IMDMessageStore.h"

@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount *_account;
    IMDMessageStore *_messageStore;
}




-(BOOL)canSuppressMessageWithInput:(id)arg0 ;
-(NSUInteger)computeFlagsForInput:(id)arg0 ;
-(id)createMessageItemWithInput:(id)arg0 ;
-(id)initWithAccount:(id)arg0 messageStore:(id)arg1 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif