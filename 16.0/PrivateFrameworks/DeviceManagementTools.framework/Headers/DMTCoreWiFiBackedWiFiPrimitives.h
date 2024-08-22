// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTCOREWIFIBACKEDWIFIPRIMITIVES_H
#define DMTCOREWIFIBACKEDWIFIPRIMITIVES_H

@class NSString, NSTimer, CWFInterface;
@protocol DMTWiFiPrimitives;

#import <Foundation/Foundation.h>


@interface DMTCoreWiFiBackedWiFiPrimitives : NSObject <DMTWiFiPrimitives>



@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *joinNetworkCompletion; // ivar: _joinNetworkCompletion
@property (retain, nonatomic) NSTimer *joinNetworkTimeout; // ivar: _joinNetworkTimeout
@property (readonly) Class superclass;
@property (readonly, nonatomic) CWFInterface *wiFiInterface; // ivar: _wiFiInterface
@property (readonly, nonatomic) BOOL wifiInterfacesAvailable;
@property (readonly, copy, nonatomic) NSString *wifiNetworkName;


-(id)init;
-(void)cancelJoiningWiFi;
-(void)dealloc;
-(void)didJoinNetworkWithError:(id)arg0 ;
-(void)disassociateWiFiNetworkWithCompletion:(id)arg0 ;
-(void)foundNetworks:(id)arg0 forCredential:(id)arg1 error:(id)arg2 ;
-(void)joinNetworkWithCredential:(id)arg0 scanRecord:(id)arg1 ;
-(void)joinWiFiNetworkWithCredential:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(void)networkJoinTimeOutDidFire:(id)arg0 ;
-(void)scanForNetworksWithCredentials:(id)arg0 ;


@end


#endif