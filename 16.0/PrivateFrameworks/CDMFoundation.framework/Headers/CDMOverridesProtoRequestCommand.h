// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMOVERRIDESPROTOREQUESTCOMMAND_H
#define CDMOVERRIDESPROTOREQUESTCOMMAND_H

@class SIRINLUINTERNALOVERRIDESOverridesRequest;


#import "CDMBaseCommand.h"

@interface CDMOverridesProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALOVERRIDESOverridesRequest *request; // ivar: _request


-(id)commandName;
-(id)initWithRequest:(id)arg0 ;


@end


#endif