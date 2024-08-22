// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDWAKEPACKETCONFIGURATIONTLV_H
#define HMDWAKEPACKETCONFIGURATIONTLV_H

@class NSString, NSData, HAPTLVUnsignedNumberValue;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDSleepConfigurationWakePacketTypeWrapper.h"
#import "HMDSleepConfigurationWakeUpTypeWrapper.h"

@interface HMDWakePacketConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *wakeDestinationAddress; // ivar: _wakeDestinationAddress
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *wakeDestinationPort; // ivar: _wakeDestinationPort
@property (retain, nonatomic) HMDSleepConfigurationWakePacketTypeWrapper *wakePacketType; // ivar: _wakePacketType
@property (retain, nonatomic) NSData *wakePattern; // ivar: _wakePattern
@property (retain, nonatomic) HMDSleepConfigurationWakeUpTypeWrapper *wakeType; // ivar: _wakeType


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithWakePacketType:(id)arg0 wakeDestinationPort:(id)arg1 wakeDestinationAddress:(id)arg2 wakeType:(id)arg3 wakePattern:(id)arg4 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif