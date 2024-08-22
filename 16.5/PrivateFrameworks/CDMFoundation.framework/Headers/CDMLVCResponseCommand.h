// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMLVCRESPONSECOMMAND_H
#define CDMLVCRESPONSECOMMAND_H

@class SIRINLUINTERNALITFMITFMParserResponse, SIRINLUEXTERNALLanguageVariantResult;


#import "CDMBaseCommand.h"

@interface CDMLVCResponseCommand : CDMBaseCommand

@property int classLabel; // ivar: _classLabel
@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserResponse *itfmResponse; // ivar: _itfmResponse
@property (readonly, nonatomic) SIRINLUEXTERNALLanguageVariantResult *languageVariantResult; // ivar: _languageVariantResult


-(id)description;
-(id)initWithITFMResponse:(id)arg0 languageVariantResult:(id)arg1 ;


@end


#endif