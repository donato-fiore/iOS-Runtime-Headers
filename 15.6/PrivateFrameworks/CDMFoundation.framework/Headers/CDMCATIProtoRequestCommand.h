// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMCATIPROTOREQUESTCOMMAND_H
#define CDMCATIPROTOREQUESTCOMMAND_H

@class SIRINLUINTERNALCATICATIRequest;


#import "CDMBaseCommand.h"

@interface CDMCATIProtoRequestCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALCATICATIRequest *request; // ivar: _request


-(id)commandName;
-(id)initWithRequest:(id)arg0 ;


@end


#endif