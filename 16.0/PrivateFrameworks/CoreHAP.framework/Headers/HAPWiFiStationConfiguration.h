// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPWIFISTATIONCONFIGURATION_H
#define HAPWIFISTATIONCONFIGURATION_H

@class NSData, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPWiFiSecurityModeWrapper.h"

@interface HAPWiFiStationConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) NSData *PSK; // ivar: _PSK
@property (retain, nonatomic) NSString *SSID; // ivar: _SSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPWiFiSecurityModeWrapper *securityMode; // ivar: _securityMode
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSSID:(id)arg0 securityMode:(id)arg1 PSK:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif