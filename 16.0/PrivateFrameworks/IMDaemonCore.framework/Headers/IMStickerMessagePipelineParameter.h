// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSTICKERMESSAGEPIPELINEPARAMETER_H
#define IMSTICKERMESSAGEPIPELINEPARAMETER_H

@protocol IMStickerMessageProcessingParameter;


#import "IMAssociatedMessagePipelineParameter.h"

@interface IMStickerMessagePipelineParameter : IMAssociatedMessagePipelineParameter <IMStickerMessageProcessingParameter>





-(BOOL)supportsStickerAttributesInMessageBody;
-(id)description;
-(id)initWithBD:(id)arg0 idsTrustedData:(id)arg1 ;


@end


#endif