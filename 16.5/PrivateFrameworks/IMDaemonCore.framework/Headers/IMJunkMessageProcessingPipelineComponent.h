// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMJUNKMESSAGEPROCESSINGPIPELINECOMPONENT_H
#define IMJUNKMESSAGEPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDAccount.h"
#import "IMDiMessageIDSTrustedData.h"

@interface IMJunkMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDAccount *account; // ivar: _account
@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData; // ivar: _idsTrustedData


-(id)initWithAccount:(id)arg0 idsTrustedData:(id)arg1 ;
-(id)runIndividuallyWithInput:(id)arg0 ;
-(void)_trackSendEventForSender:(id)arg0 andReceiver:(id)arg1 ;


@end


#endif