// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSTYLEOWNERUUIDDECODER_H
#define TSCHSTYLEOWNERUUIDDECODER_H


#import <Foundation/Foundation.h>


@interface TSCHStyleOwnerUUIDDecoder : NSObject {
    unsigned char _UUID;
    NSUInteger _index;
}




+(id)UUIDDecoderWithUUID:(id)arg0 ;
-(BOOL)p_hasSpaceToDecodeNumberOfBytes:(NSUInteger)arg0 ;
-(NSUInteger)decodeNSUIntegerFromUInt64;
-(NSUInteger)decodeUInt64;
-(id)initWithUUID:(id)arg0 ;
-(unsigned char)decodeByte;
-(void)endDecode;


@end


#endif