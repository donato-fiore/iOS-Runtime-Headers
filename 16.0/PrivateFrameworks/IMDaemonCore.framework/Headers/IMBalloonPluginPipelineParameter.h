// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMBALLOONPLUGINPIPELINEPARAMETER_H
#define IMBALLOONPLUGINPIPELINEPARAMETER_H

@class NSString, NSData, NSDictionary;
@protocol IMBalloonPluginPipelineParameter;


#import "IMTextMessagePipelineParameter.h"

@interface IMBalloonPluginPipelineParameter : IMTextMessagePipelineParameter <IMBalloonPluginPipelineParameter>



@property (copy, nonatomic) NSString *associatedMessageGUID; // ivar: _associatedMessageGUID
@property (nonatomic) _NSRange associatedMessageRange; // ivar: _associatedMessageRange
@property (nonatomic) NSInteger associatedMessageType; // ivar: _associatedMessageType
@property (copy, nonatomic) NSString *balloonPluginBundleID; // ivar: _balloonPluginBundleID
@property (copy, nonatomic) NSData *balloonPluginPayload; // ivar: _balloonPluginPayload
@property (copy, nonatomic) NSDictionary *combinedPayloadAttachmentDictionary; // ivar: _combinedPayloadAttachmentDictionary


+(id)logger;
-(id)initWithBD:(id)arg0 idsTrustedData:(id)arg1 ;


@end


#endif