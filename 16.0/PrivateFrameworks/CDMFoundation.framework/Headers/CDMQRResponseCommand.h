// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMQRRESPONSECOMMAND_H
#define CDMQRRESPONSECOMMAND_H

@class SIRINLUINTERNALQUERYREWRITEQRResponse;


#import "CDMBaseCommand.h"

@interface CDMQRResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALQUERYREWRITEQRResponse *qrResponse; // ivar: _qrResponse


-(id)commandName;
-(id)initWithResponse:(id)arg0 ;


@end


#endif