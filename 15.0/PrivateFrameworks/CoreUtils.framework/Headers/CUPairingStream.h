// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUPAIRINGSTREAM_H
#define CUPAIRINGSTREAM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUPairingStream : NSObject {
    *CryptoAEADPrivate _decryptAEAD;
    unsigned char _decryptNonce;
    *CryptoAEADPrivate _encryptAEAD;
    unsigned char _encryptNonce;
}


@property (nonatomic) NSUInteger authTagLength; // ivar: _authTagLength
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)decryptInputBytes:(*void)arg0 inputLength:(NSUInteger)arg1 inputAADBytes:(*void)arg2 inputAADLength:(NSUInteger)arg3 inputAuthTagPtr:(*void)arg4 inputAuthTagLength:(NSUInteger)arg5 outputBytes:(*void)arg6 error:(*id)arg7 ;
-(BOOL)encryptInputBytes:(*void)arg0 inputLength:(NSUInteger)arg1 inputAADBytes:(*void)arg2 inputAADLength:(NSUInteger)arg3 outputBytes:(*void)arg4 outputAuthTagBytes:(*void)arg5 outputAuthTagLength:(NSUInteger)arg6 error:(*id)arg7 ;
-(BOOL)prepareWithName:(id)arg0 isClient:(BOOL)arg1 pskData:(id)arg2 error:(*id)arg3 ;
-(id)decryptData:(id)arg0 aadBytes:(*void)arg1 aadLength:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)decryptData:(id)arg0 aadData:(id)arg1 error:(*id)arg2 ;
-(id)encryptData:(id)arg0 aadBytes:(*void)arg1 aadLength:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)encryptData:(id)arg0 aadData:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)_cleanup;
-(void)dealloc;


@end


#endif