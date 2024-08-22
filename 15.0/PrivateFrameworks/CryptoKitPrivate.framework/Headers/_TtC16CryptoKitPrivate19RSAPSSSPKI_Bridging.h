// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16CRYPTOKITPRIVATE19RSAPSSSPKI_BRIDGING_H
#define _TTC16CRYPTOKITPRIVATE19RSAPSSSPKI_BRIDGING_H


#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate19RSAPSSSPKI_Bridging : NSObject {
    ? backingStruct;
}




-(NSUInteger)saltByteCount;
-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)publicKeyBytes;
-(struct ccdigest_info *)hashFunction;
-(struct ccdigest_info *)mgf;


@end


#endif