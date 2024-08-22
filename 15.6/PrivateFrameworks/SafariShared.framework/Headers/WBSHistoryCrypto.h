// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYCRYPTO_H
#define WBSHISTORYCRYPTO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface WBSHistoryCrypto : NSObject {
    NSData *_cachedCryptographicKey;
}


@property (readonly, nonatomic) NSData *cryptographicKey;
@property (readonly, nonatomic) NSData *salt; // ivar: _salt


-(id)_createCryptographicKey;
-(id)_createOrLoadCryptographicKey;
-(id)decryptDictionary:(id)arg0 ;
-(id)encryptDictionary:(id)arg0 ;
-(id)init;
-(id)initWithCryptographicKey:(id)arg0 salt:(id)arg1 ;


@end


#endif