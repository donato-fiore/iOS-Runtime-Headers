// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFCNDEFPAYLOAD_H
#define NFCNDEFPAYLOAD_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFCNDEFPayload : NSObject <NSSecureCoding>

 {
    NSUInteger _chunkSize;
}


@property (copy, nonatomic) NSData *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *payload; // ivar: _payload
@property (copy, nonatomic) NSData *type; // ivar: _type
@property (nonatomic) unsigned char typeNameFormat; // ivar: _typeNameFormat


+(BOOL)supportsSecureCoding;
+(id)wellKnowTypeTextPayloadWithString:(id)arg0 locale:(id)arg1 ;
+(id)wellKnownTypeTextPayloadWithString:(id)arg0 locale:(id)arg1 ;
+(id)wellKnownTypeURIPayloadWithString:(id)arg0 ;
+(id)wellKnownTypeURIPayloadWithURL:(id)arg0 ;
-(NSUInteger)chunkSize;
-(id)asData;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(unsigned char)arg0 type:(id)arg1 identifier:(id)arg2 payload:(id)arg3 ;
-(id)initWithFormat:(unsigned char)arg0 type:(id)arg1 identifier:(id)arg2 payload:(id)arg3 chunkSize:(NSUInteger)arg4 ;
-(id)initWithFormatType:(unsigned char)arg0 type:(id)arg1 identifier:(id)arg2 payload:(id)arg3 chunkSize:(NSUInteger)arg4 ;
-(id)resolveURIString:(id)arg0 ;
-(id)wellKnownTypeTextPayloadWithLocale:(*id)arg0 ;
-(id)wellKnownTypeURIPayload;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setChunkSize:(NSUInteger)arg0 ;


@end


#endif