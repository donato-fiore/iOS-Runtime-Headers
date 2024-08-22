// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPREDICTIONDEVICESTATECONTEXT_H
#define ATXPREDICTIONDEVICESTATECONTEXT_H

@class NSString;


#import "ATXPredictionContextDomain.h"

@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain

@property (readonly, nonatomic) BOOL inAirplaneMode; // ivar: _inAirplaneMode
@property (readonly, nonatomic) BOOL onWifi; // ivar: _onWifi
@property (readonly, nonatomic) NSString *wifiSSID; // ivar: _wifiSSID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPredictionDeviceStateContext:(id)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithWifiSSID:(id)arg0 onWifi:(BOOL)arg1 inAirplaneMode:(BOOL)arg2 ;
-(id)jsonDict;
-(id)proto;


@end


#endif