// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRNETWORKOPERATION_H
#define TRNETWORKOPERATION_H



#import "TROperation.h"

@interface TRNetworkOperation : TROperation

@property (copy, nonatomic) id *sendingWiFiInfoHandler; // ivar: _sendingWiFiInfoHandler


-(void)_handleResponse:(id)arg0 ;
-(void)_sendRequestWithSSID:(id)arg0 password:(id)arg1 ;
-(void)execute;


@end


#endif