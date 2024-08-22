// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLWIFIDEVICECLIENT_H
#define WLWIFIDEVICECLIENT_H


#import <Foundation/Foundation.h>


@interface WLWiFiDeviceClient : NSObject

@property (nonatomic) *__WiFiDeviceClient ref; // ivar: _ref


-(BOOL)_completionMapsAreEmpty;
-(id)_hostedNetworks;
-(id)_initWithoutWiFiDeviceClientRef;
-(id)hostedNetworkMatchingSSID:(id)arg0 ;
-(id)initWithWiFiDeviceClientRef:(struct __WiFiDeviceClient *)arg0 ;
-(int)_startNetworkWithRole:(int)arg0 request:(id)arg1 session:(id)arg2 ;
-(int)_stopNetwork:(id)arg0 session:(id)arg1 ;
-(void)dealloc;
-(void)disassociate;
-(void)startNetworkWithHostRole:(int)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)stopNetwork:(id)arg0 completion:(id)arg1 ;


@end


#endif