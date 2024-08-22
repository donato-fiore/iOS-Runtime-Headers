// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSESSIONINFOMETADATASERIALIZER_H
#define IDSSESSIONINFOMETADATASERIALIZER_H


#import <Foundation/Foundation.h>


@interface IDSSessionInfoMetadataSerializer : NSObject



+(id)_readArrayFromByteArray:(char *)arg0 fieldByteSize:(unsigned short)arg1 byteBuffer:(struct ? *)arg2 ;
+(id)_readDictionaryFromByteArray:(char *)arg0 fieldByteSize:(unsigned short)arg1 byteBuffer:(struct ? *)arg2 ;
+(id)deserializeSessionInfoMetadata:(id)arg0 ;
+(id)serializeSessionInfoMetadata:(id)arg0 ;
+(void)_writeArrayToByteBuffer:(id)arg0 buffer:(struct ? *)arg1 ;
+(void)_writeDictionaryToByteBuffer:(id)arg0 buffer:(struct ? *)arg1 ;
+(void)_writeNumberToByteBuffer:(id)arg0 buffer:(struct ? *)arg1 ;
+(void)_writeStringToByteBuffer:(id)arg0 buffer:(struct ? *)arg1 ;


@end


#endif