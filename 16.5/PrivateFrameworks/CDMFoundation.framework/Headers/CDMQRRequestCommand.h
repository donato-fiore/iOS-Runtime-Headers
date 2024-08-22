// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMQRREQUESTCOMMAND_H
#define CDMQRREQUESTCOMMAND_H

@class SIRINLUINTERNALQUERYREWRITEQRRequest;


#import "CDMBaseCommand.h"

@interface CDMQRRequestCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALQUERYREWRITEQRRequest *qrRequest; // ivar: _qrRequest


-(id)initWithQRRequest:(id)arg0 ;


@end


#endif