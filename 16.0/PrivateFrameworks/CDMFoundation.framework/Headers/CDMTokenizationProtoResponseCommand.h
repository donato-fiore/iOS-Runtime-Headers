// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMTOKENIZATIONPROTORESPONSECOMMAND_H
#define CDMTOKENIZATIONPROTORESPONSECOMMAND_H

@class NSArray, SIRINLUINTERNALTOKENIZERTokenizerResponse;


#import "CDMBaseCommand.h"

@interface CDMTokenizationProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) NSArray *previousSiriResponseTokenResponses; // ivar: _previousSiriResponseTokenResponses
@property (retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *response; // ivar: _response
@property (retain, nonatomic) NSArray *responses; // ivar: _responses


-(id)commandName;
-(id)description;
-(id)initWithPreviousResponses:(id)arg0 withPreviousSiriResponse:(id)arg1 ;
-(id)initWithResponse:(id)arg0 ;
-(id)initWithResponses:(id)arg0 ;


@end


#endif