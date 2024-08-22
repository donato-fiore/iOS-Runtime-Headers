// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSTUNMESSAGE_H
#define IDSSTUNMESSAGE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface IDSStunMessage : NSObject {
    unsigned short _len;
    IDSStunAttribute _attributes;
    int _numAttribute;
    BOOL _requiresAES128CTR;
    *_CCCryptor _cryptorRef;
}


@property (copy, nonatomic) NSData *key; // ivar: _key
@property (readonly, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSData *transactionID; // ivar: _transactionID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)addAttribute:(struct IDSStunAttribute *)arg0 ;
-(BOOL)dataIndicationToBuffer:(char *)arg0 outputLength:(*int)arg1 data:(char *)arg2 dataLen:(int)arg3 keyData:(id)arg4 remainingLength:(NSUInteger)arg5 ;
-(BOOL)decryptAES128CTRStunAttributes:(id)arg0 ;
-(BOOL)getAttribute:(NSInteger)arg0 attribute:(struct IDSStunAttribute *)arg1 ;
-(BOOL)hasAttribute:(NSInteger)arg0 ;
-(BOOL)initAES128CTR:(id)arg0 ;
-(BOOL)read:(char *)arg0 inputLength:(NSUInteger)arg1 ;
-(BOOL)read:(char *)arg0 inputLength:(NSUInteger)arg1 internal:(BOOL)arg2 ;
-(BOOL)stunRequestToBuffer:(char *)arg0 outputLength:(*int)arg1 transactionID:(char *)arg2 reqCount:(int)arg3 userName:(char *)arg4 usernameLen:(int)arg5 sendTime:(unsigned short)arg6 keyData:(id)arg7 remainingLength:(NSUInteger)arg8 ;
-(BOOL)stunResponseToBuffer:(char *)arg0 outputLength:(*int)arg1 transactionID:(id)arg2 reqCount:(int)arg3 echoTime:(unsigned short)arg4 delay:(unsigned short)arg5 keyData:(id)arg6 remainingLength:(NSUInteger)arg7 ;
-(BOOL)verifyMessageIntegrityWithKey:(id)arg0 inputBuffer:(char *)arg1 inputLength:(int)arg2 ;
-(BOOL)write:(char *)arg0 outputLength:(*int)arg1 remainingLength:(NSUInteger)arg2 ;
-(BOOL)write:(char *)arg0 outputLength:(*int)arg1 remainingLength:(NSUInteger)arg2 internal:(BOOL)arg3 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_addBinaryDataAttribute:(NSInteger)arg0 value:(id)arg1 ;
-(void)_addUInt16Attribute:(NSInteger)arg0 value:(unsigned short)arg1 ;
-(void)_addUInt32Attribute:(NSInteger)arg0 value:(unsigned int)arg1 ;
-(void)_addUInt64Attribute:(NSInteger)arg0 value:(NSUInteger)arg1 ;
-(void)_addUInt8Attribute:(NSInteger)arg0 value:(unsigned char)arg1 ;
-(void)_addUUIDAttribute:(NSInteger)arg0 value:(id)arg1 ;
-(void)_addXORAddressAttribute:(NSInteger)arg0 value:(struct sockaddr *)arg1 ;
-(void)dealloc;
-(void)setAttributes:(id)arg0 ;


@end


#endif