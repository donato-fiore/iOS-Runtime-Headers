// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2TLVTHREADNETWORKCREDENTIALS_H
#define HAP2TLVTHREADNETWORKCREDENTIALS_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"

@interface HAP2TLVThreadNetworkCredentials : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *channel; // ivar: _channel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *extendedPanID; // ivar: _extendedPanID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *masterKey; // ivar: _masterKey
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *panID; // ivar: _panID
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *reattachPeriod; // ivar: _reattachPeriod
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithNetworkName:(id)arg0 channel:(id)arg1 panID:(id)arg2 extendedPanID:(id)arg3 masterKey:(id)arg4 reattachPeriod:(id)arg5 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif