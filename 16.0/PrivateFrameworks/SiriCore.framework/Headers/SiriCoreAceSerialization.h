// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICOREACESERIALIZATION_H
#define SIRICOREACESERIALIZATION_H


#import <Foundation/Foundation.h>


@interface SiriCoreAceSerialization : NSObject



+(BOOL)tryParsingAceHeaderData:(id)arg0 compressionType:(*unsigned char)arg1 bytesRead:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)tryParsingPacketWithBytes:(*void)arg0 length:(NSUInteger)arg1 rawPacket:(struct ? *)arg2 object:(*id)arg3 bytesRead:(*NSUInteger)arg4 error:(*id)arg5 ;
+(id)_insufficientDataErrorForBytesNeeded:(NSUInteger)arg0 available:(NSUInteger)arg1 ;
+(id)_tryParsingPlistPacketBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)_tryParsingSpeechPacketBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)aceDataForNop;
+(id)aceDataForObject:(id)arg0 error:(*id)arg1 ;
+(id)aceDataForPing:(unsigned int)arg0 ;
+(id)aceDataForPong:(unsigned int)arg0 ;
+(id)aceDataForSpeechPacket:(id)arg0 error:(*id)arg1 ;
+(id)aceDataForStreamEnd;
+(id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg0 ;
+(id)dataForNop;
+(id)dataForObject:(id)arg0 error:(*id)arg1 ;
+(id)dataForPing:(unsigned int)arg0 ;
+(id)dataForPong:(unsigned int)arg0 ;
+(id)dataForSpeechPacket:(id)arg0 error:(*id)arg1 ;
+(id)dataForStreamEnd;
+(id)dataForStreamHeaderWithCompressionType:(unsigned char)arg0 ;


@end


#endif