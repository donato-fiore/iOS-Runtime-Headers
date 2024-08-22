// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16CRYPTOKITPRIVATE9TDMSERVER_H
#define _TTC16CRYPTOKITPRIVATE9TDMSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate9TDMServer : NSObject {
    ? oprfServer;
    ? secret;
}




-(BOOL)verifyTokenWithOutput:(id)arg0 TID:(id)arg1 FSR:(id)arg2 ;
-(id)evaluateWithBlindedElement:(id)arg0 error:(*id)arg1 ;
-(id)info;
-(id)init;
-(id)publicKey;


@end


#endif