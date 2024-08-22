// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMASSISTANTNLURESPONSE_H
#define CDMASSISTANTNLURESPONSE_H

@class SIRINLUINTERNALPreprocessingWrapper, NSString, SIRINLUEXTERNALCDMNluResponse;


#import "CDMServiceGraphCommand.h"

@interface CDMAssistantNLUResponse : CDMServiceGraphCommand

@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper; // ivar: _preprocessingWrapper
@property (readonly, nonatomic) NSString *requestId; // ivar: _requestId
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *siriNLUTypeObj; // ivar: _siriNLUTypeObj


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNLUResponse:(id)arg0 preprocessingWrapper:(id)arg1 requestId:(id)arg2 ;
-(id)initWithNLUResponse:(id)arg0 requestId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif