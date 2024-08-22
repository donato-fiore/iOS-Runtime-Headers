// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMFAMILYSENDERMESSAGEPROCESSINGPIPELINECOMPONENT_H
#define IMFAMILYSENDERMESSAGEPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDAccount.h"
#import "IMDiMessageIDSTrustedData.h"

@interface IMFamilySenderMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDAccount *account; // ivar: _account
@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData; // ivar: _idsTrustedData


-(BOOL)_fromFamilyMember:(id)arg0 ;
-(id)_generateError:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif