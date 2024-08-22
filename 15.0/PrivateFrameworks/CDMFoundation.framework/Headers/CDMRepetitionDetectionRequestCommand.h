// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMREPETITIONDETECTIONREQUESTCOMMAND_H
#define CDMREPETITIONDETECTIONREQUESTCOMMAND_H

@class SIRINLUINTERNALQUERYREWRITEQRRequest;


#import "CDMBaseCommand.h"

@interface CDMRepetitionDetectionRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALQUERYREWRITEQRRequest *qrRequest; // ivar: _qrRequest


-(id)commandName;
-(id)initWithQRRequest:(id)arg0 ;


@end


#endif