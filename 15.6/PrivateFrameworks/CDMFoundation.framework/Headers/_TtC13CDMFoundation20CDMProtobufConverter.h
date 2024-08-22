// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13CDMFOUNDATION20CDMPROTOBUFCONVERTER_H
#define _TTC13CDMFOUNDATION20CDMPROTOBUFCONVERTER_H


#import <Foundation/Foundation.h>


@interface _TtC13CDMFoundation20CDMProtobufConverter : NSObject



+(id)nluRequestJsonToSIRINLUWithProtoJson:(id)arg0 ;
+(id)nluResponseFromSIRINLUEXTERNALCDMNluResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)nluResponseFromSIRINLUWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializeExternalNluRequestWithRequest:(id)arg0 formatType:(id)arg1 ;
+(id)serializeExternalNluResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializeITFMParserRequestWithRequest:(id)arg0 formatType:(id)arg1 ;
+(id)serializeITFMParserResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializeMDRequestWithRequest:(id)arg0 formatType:(id)arg1 ;
+(id)serializeMDResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializeMRRequestWithRequest:(id)arg0 formatType:(id)arg1 ;
+(id)serializeMRResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializeNlv4ParserRequestWithRequest:(id)arg0 formatType:(id)arg1 ;
+(id)serializeNlv4ParserResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializePSCParserRequestWithRequest:(id)arg0 formatType:(id)arg1 ;
+(id)serializePSCParserResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializePreprocessingWrapperWithWrapper:(id)arg0 formatType:(id)arg1 ;
+(id)serializeSNLCParserRequestWithRequest:(id)arg0 formatType:(id)arg1 ;
+(id)serializeSNLCParserResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializeSpanMatchResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)serializeTokenizerResponseWithResponse:(id)arg0 formatType:(id)arg1 ;
+(id)siriExternalNluRequestJsonToObjWithProto2Json:(id)arg0 ;
+(id)siriInternalMatchingSpanJsonToObjWithProto2Json:(id)arg0 ;
-(id)init;


@end


#endif