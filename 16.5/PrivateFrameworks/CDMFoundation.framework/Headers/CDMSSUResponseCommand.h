// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSSURESPONSECOMMAND_H
#define CDMSSURESPONSECOMMAND_H

@class SIRINLUINTERNALSSUSSUResponse;


#import "CDMBaseCommand.h"

@interface CDMSSUResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALSSUSSUResponse *ssuResponse; // ivar: _ssuResponse


-(id)initWithCmdError:(id)arg0 ;
-(id)initWithSSUResponse:(id)arg0 ;
-(id)initWithSSUResponse:(id)arg0 cmdError:(id)arg1 ;


@end


#endif