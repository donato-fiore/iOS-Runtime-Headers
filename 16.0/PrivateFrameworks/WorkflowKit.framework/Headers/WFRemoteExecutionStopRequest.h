// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONSTOPREQUEST_H
#define WFREMOTEEXECUTIONSTOPREQUEST_H

@class NSString;


#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionStopRequest : WFRemoteExecutionRequest

@property (readonly, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequestIdentifier:(id)arg0 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;


@end


#endif