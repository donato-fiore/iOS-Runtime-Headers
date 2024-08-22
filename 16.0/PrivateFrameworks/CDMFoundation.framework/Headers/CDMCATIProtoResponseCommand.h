// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCATIPROTORESPONSECOMMAND_H
#define CDMCATIPROTORESPONSECOMMAND_H

@class SIRINLUINTERNALCATICATIResponse;


#import "CDMBaseCommand.h"

@interface CDMCATIProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALCATICATIResponse *response; // ivar: _response


-(id)commandName;
-(id)initWithResponse:(id)arg0 ;


@end


#endif