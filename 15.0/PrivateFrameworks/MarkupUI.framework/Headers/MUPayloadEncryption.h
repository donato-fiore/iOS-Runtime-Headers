// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPAYLOADENCRYPTION_H
#define MUPAYLOADENCRYPTION_H


#import <Foundation/Foundation.h>


@interface MUPayloadEncryption : NSObject {
    BOOL _keyInitialized;
    BOOL _haveKey;
    unsigned char _key;
}




+(id)sharedInstance;
-(id)decryptData:(id)arg0 ;
-(id)encryptData:(id)arg0 ;
-(id)init;
-(void)initializeKey;


@end


#endif