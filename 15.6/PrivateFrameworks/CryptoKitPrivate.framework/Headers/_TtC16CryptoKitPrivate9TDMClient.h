// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16CRYPTOKITPRIVATE9TDMCLIENT_H
#define _TTC16CRYPTOKITPRIVATE9TDMCLIENT_H


#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate9TDMClient : NSObject {
    ? oprfClient;
    ? input;
    ? blind;
    ? be;
}




-(id)blindedElement;
-(id)finalizeWithFSR:(id)arg0 evaluatedElement:(id)arg1 proof:(id)arg2 publicKey:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithTID:(id)arg0 ;


@end


#endif