// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMREPETITIONDETECTIONRESPONSECOMMAND_H
#define CDMREPETITIONDETECTIONRESPONSECOMMAND_H

@class SIRINLUINTERNALQUERYREWRITEQRResponse;


#import "CDMBaseCommand.h"

@interface CDMRepetitionDetectionResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALQUERYREWRITEQRResponse *response; // ivar: _response


-(id)initWithResponse:(id)arg0 ;


@end


#endif