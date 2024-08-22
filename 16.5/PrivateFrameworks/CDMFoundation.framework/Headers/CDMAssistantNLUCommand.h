// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMASSISTANTNLUCOMMAND_H
#define CDMASSISTANTNLUCOMMAND_H

@class NSString, NLXSchemaNLXClientEventMetadata, SIRINLUEXTERNALCDMNluRequest;


#import "CDMServiceGraphCommand.h"

@interface CDMAssistantNLUCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata; // ivar: _selfMetadata
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj; // ivar: _siriNLUTypeObj


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNLURequest:(id)arg0 clientId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif