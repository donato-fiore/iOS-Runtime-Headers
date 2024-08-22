// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLNETRBCLIENT_H
#define WLNETRBCLIENT_H


#import <Foundation/Foundation.h>


@interface WLNETRBClient : NSObject {
    *NETRBClient _netrbClientRef;
    id *_dhcpStartCompletionBlock;
    id *_dhcpStopCompletionBlock;
}




-(BOOL)_completionsAreNil;
-(BOOL)_startDHCPWithInterface:(id)arg0 ;
-(BOOL)_stopDHCP;
-(BOOL)isIPAddressInRange:(id)arg0 ;
-(id)init;
-(struct NETRBClient *)_netrbClient;
-(void)_didStartDHCPWithSuccess:(BOOL)arg0 ;
-(void)_didStopDHCPWithSuccess:(BOOL)arg0 ;
-(void)startDHCPWithCompletion:(id)arg0 ;
-(void)stopDHCPWithCompletion:(id)arg0 ;


@end


#endif