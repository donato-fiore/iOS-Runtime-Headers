// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRDER_H
#define SPRDER_H


#import <Foundation/Foundation.h>


@interface SPRDER : NSObject



+(BOOL)DERDecodeSequenceContentWithData:(id)arg0 block:(id)arg1 ;
+(BOOL)DERDecodeSequenceWithData:(id)arg0 block:(id)arg1 ;
+(BOOL)DERParseSEFWSequence:(struct ? *)arg0 info:(struct ? *)arg1 ;
+(BOOL)DERParseScriptSequence:(struct ? *)arg0 info:(struct ? *)arg1 ;
+(id)DERDecodeData:(id)arg0 ;
+(id)DERDecodeData:(id)arg0 expectedSingleByteTag:(unsigned char)arg1 ;
+(id)DERDecodeData:(id)arg0 expectedTag:(NSUInteger)arg1 ;
+(id)DERParseScriptInfo:(id)arg0 ;


@end


#endif