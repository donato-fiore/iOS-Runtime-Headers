// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTYPINGINDICATORPIPELINEPARAMETER_H
#define IMTYPINGINDICATORPIPELINEPARAMETER_H

@class NSString, NSData;


#import "IMTextMessagePipelineParameter.h"

@interface IMTypingIndicatorPipelineParameter : IMTextMessagePipelineParameter

@property (copy, nonatomic) NSString *balloonPluginBundleID; // ivar: _balloonPluginBundleID
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (copy, nonatomic) NSData *typingIndicatorIconData; // ivar: _typingIndicatorIconData


-(id)initWithBD:(id)arg0 idsTrustedData:(id)arg1 ;
-(id)initWithBDBasic:(id)arg0 idsTrustedData:(id)arg1 ;


@end


#endif