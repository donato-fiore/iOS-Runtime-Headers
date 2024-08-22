// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMUAAPNLRESPONSECOMMAND_H
#define CDMUAAPNLRESPONSECOMMAND_H

@class SIRINLUResponse, NSString;


#import "CDMBaseCommand.h"

@interface CDMUaaPNLResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) NSString *requestId; // ivar: _requestId


-(id)initWithRequestId:(id)arg0 nluResponse:(id)arg1 error:(id)arg2 ;


@end


#endif