// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPWIFICONFIGURATIONCONTROL_H
#define HAPWIFICONFIGURATIONCONTROL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"
#import "HAPWiFiConfigurationOperationTypeWrapper.h"
#import "HAPWiFiStationConfiguration.h"
#import "HAPWiFiConfigurationUpdateStatusWrapper.h"

@interface HAPWiFiConfigurationControl : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *cookie; // ivar: _cookie
@property (retain, nonatomic) NSString *countryCodeConfiguration; // ivar: _countryCodeConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *operationTimeout; // ivar: _operationTimeout
@property (retain, nonatomic) HAPWiFiConfigurationOperationTypeWrapper *operationType; // ivar: _operationType
@property (retain, nonatomic) HAPWiFiStationConfiguration *stationConfiguration; // ivar: _stationConfiguration
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPWiFiConfigurationUpdateStatusWrapper *updateStatus; // ivar: _updateStatus


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperationType:(id)arg0 cookie:(id)arg1 updateStatus:(id)arg2 operationTimeout:(id)arg3 countryCodeConfiguration:(id)arg4 stationConfiguration:(id)arg5 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif