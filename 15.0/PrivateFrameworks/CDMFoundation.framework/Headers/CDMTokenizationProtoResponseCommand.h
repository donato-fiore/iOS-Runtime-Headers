// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMTOKENIZATIONPROTORESPONSECOMMAND_H
#define CDMTOKENIZATIONPROTORESPONSECOMMAND_H

@class SIRINLUINTERNALTOKENIZERTokenizerResponse, NSArray;


#import "CDMBaseCommand.h"

@interface CDMTokenizationProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *response; // ivar: _response
@property (retain, nonatomic) NSArray *responses; // ivar: _responses


-(id)commandName;
-(id)description;
-(id)initWithResponse:(id)arg0 ;
-(id)initWithResponses:(id)arg0 ;


@end


#endif