// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMASSOCIATEDMESSAGEPIPELINEPARAMETER_H
#define IMASSOCIATEDMESSAGEPIPELINEPARAMETER_H

@class NSString;
@protocol IMAssociatedMessageProcessingParameter;


#import "IMTextMessagePipelineParameter.h"

@interface IMAssociatedMessagePipelineParameter : IMTextMessagePipelineParameter <IMAssociatedMessageProcessingParameter>



@property (copy, nonatomic) NSString *associatedMessageGUID; // ivar: _associatedMessageGUID
@property (nonatomic) _NSRange associatedMessageRange; // ivar: _associatedMessageRange
@property (nonatomic) NSInteger associatedMessageType; // ivar: _associatedMessageType


-(id)description;
-(id)initWithBD:(id)arg0 idsTrustedData:(id)arg1 ;


@end


#endif