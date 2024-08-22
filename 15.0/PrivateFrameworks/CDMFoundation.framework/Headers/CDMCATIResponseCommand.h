// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCATIRESPONSECOMMAND_H
#define CDMCATIRESPONSECOMMAND_H

@class SIRINLUResponse, SIRINLURequestID;


#import "CDMBaseCommand.h"

@interface CDMCATIResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) SIRINLURequestID *requestID; // ivar: _requestID


-(id)commandName;
-(id)initWithNluResponse:(id)arg0 ;


@end


#endif