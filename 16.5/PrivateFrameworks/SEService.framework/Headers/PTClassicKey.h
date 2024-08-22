// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCLASSICKEY_H
#define PTCLASSICKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PTClassicKey : NSObject {
    ? ptKeyOutput;
    ? ptKeyBlob;
}


@property (readonly) BOOL isExportedData; // ivar: _isExportedData
@property (readonly) NSData *keyData; // ivar: _keyData


+(id)withData:(id)arg0 error:(*id)arg1 ;
+(id)withExportedBlob:(id)arg0 error:(*id)arg1 ;
-(id)assetACL;
-(id)assetACLAttestation;
-(id)description;
-(id)encryptedWrappedKeyBlob;
-(id)keyBlob;
-(id)keyIdentifier;
-(id)publicKey;
-(struct ? )assetACLAttestationItem;
-(struct ? )assetACLItem;
-(struct ? )encryptedWrappedKeyBlobItem;
-(struct ? )keyBlobItem;
-(unsigned int)keyNumber;


@end


#endif