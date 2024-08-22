// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPRELAYPAIRINGCLIENT_H
#define HAPRELAYPAIRINGCLIENT_H

@class HMFObject, NSURL;
@protocol HAPRelayPairingClientDelegate;



@interface HAPRelayPairingClient : HMFObject

@property (readonly, nonatomic) NSURL *accessoryBagURL; // ivar: _accessoryBagURL
@property (weak) NSObject<HAPRelayPairingClientDelegate> *delegate; // ivar: _delegate


-(void)close;
-(void)open;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg0 pairingToken:(id)arg1 ;
-(void)requestControllerIdentifier;


@end


#endif