// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPSECURITYSESSIONENCRYPTION_H
#define HAPSECURITYSESSIONENCRYPTION_H

@class NSData, NSMutableData;

#import <Foundation/Foundation.h>


@interface HAPSecuritySessionEncryption : NSObject

@property (retain, nonatomic) NSData *inputKey; // ivar: _inputKey
@property (retain, nonatomic) NSMutableData *inputNonce; // ivar: _inputNonce
@property (retain, nonatomic) NSData *outputKey; // ivar: _outputKey
@property (retain, nonatomic) NSMutableData *outputNonce; // ivar: _outputNonce


-(id)decrypt:(*void)arg0 length:(NSUInteger)arg1 additionalAuthData:(*void)arg2 additionalAuthDataLength:(NSUInteger)arg3 authTagData:(*void)arg4 authTagDataLength:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)decrypt:(id)arg0 additionalAuthenticatedData:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 additionalAuthenticatedData:(id)arg1 ;
-(id)init;
-(id)initWithInputKey:(id)arg0 outputKey:(id)arg1 ;


@end


#endif