// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGELEGACYPROCESSINGPIPELINECOMPONENT_H
#define IMMESSAGELEGACYPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDServiceSession.h"
#import "IMDAccount.h"
#import "IMDiMessageIDSTrustedData.h"

@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {
    IMDServiceSession *_serviceSession;
    IMDAccount *_account;
    IMDiMessageIDSTrustedData *_idsTrustedData;
    id *_messageContext;
}




-(id)initWithServiceSession:(id)arg0 idsTrustedData:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif