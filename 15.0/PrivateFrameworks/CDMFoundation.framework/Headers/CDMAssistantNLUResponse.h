// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMASSISTANTNLURESPONSE_H
#define CDMASSISTANTNLURESPONSE_H

@class SIRINLUResponse, SIRINLUINTERNALPreprocessingWrapper, NSString, SIRINLUEXTERNALCDMNluResponse;

#import <Foundation/Foundation.h>


@interface CDMAssistantNLUResponse : NSObject

@property (readonly, nonatomic) SIRINLUResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper; // ivar: _preprocessingWrapper
@property (readonly, nonatomic) NSString *requestId; // ivar: _requestId
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *siriNLUTypeObj; // ivar: _siriNLUTypeObj


-(id)initWithNLUResponse:(id)arg0 preprocessingWrapper:(id)arg1 requestId:(id)arg2 ;
-(id)initWithNLUResponse:(id)arg0 requestId:(id)arg1 ;
-(id)initWithNLUResponseDeprecated:(id)arg0 shouldConvertNLXResponse:(BOOL)arg1 requestId:(id)arg2 ;


@end


#endif