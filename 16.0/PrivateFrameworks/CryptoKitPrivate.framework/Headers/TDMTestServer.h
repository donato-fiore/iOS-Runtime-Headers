// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDMTESTSERVER_H
#define TDMTESTSERVER_H


#import <Foundation/Foundation.h>

#import "_TtC16CryptoKitPrivate9TDMServer.h"

@interface TDMTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate9TDMServer *tdmServer; // ivar: _tdmServer


-(BOOL)validateOutput:(id)arg0 TID:(id)arg1 ;
-(id)FSR;
-(id)evaluate:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)publicKey;


@end


#endif