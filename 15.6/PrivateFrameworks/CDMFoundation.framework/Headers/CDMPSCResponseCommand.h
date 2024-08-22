// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMPSCRESPONSECOMMAND_H
#define CDMPSCRESPONSECOMMAND_H

@class NSArray, SIRINLUINTERNALITFMITFMParserResponse;


#import "CDMBaseCommand.h"

@interface CDMPSCResponseCommand : CDMBaseCommand

@property int classLabel; // ivar: _classLabel
@property (readonly, nonatomic) NSArray *pscParses; // ivar: _pscParses
@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserResponse *pscResponse; // ivar: _pscResponse


-(id)commandName;
-(id)initWithPscParses:(id)arg0 pscResponse:(id)arg1 ;


@end


#endif