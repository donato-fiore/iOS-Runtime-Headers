// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFCISO7816APDU_H
#define NFCISO7816APDU_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NFCISO7816APDU : NSObject <NSCopying>

 {
    _NSRange _payloadOffset;
    NSInteger _le;
    NSData *_fullPacket;
}


@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) NSInteger expectedResponseLength;
@property (readonly, nonatomic) unsigned char instructionClass;
@property (readonly, nonatomic) unsigned char instructionCode;
@property (readonly, nonatomic) unsigned char p1Parameter;
@property (readonly, nonatomic) unsigned char p2Parameter;


-(id)asData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithInstructionClass:(unsigned char)arg0 instructionCode:(unsigned char)arg1 p1Parameter:(unsigned char)arg2 p2Parameter:(unsigned char)arg3 data:(id)arg4 expectedResponseLength:(NSInteger)arg5 ;


@end


#endif