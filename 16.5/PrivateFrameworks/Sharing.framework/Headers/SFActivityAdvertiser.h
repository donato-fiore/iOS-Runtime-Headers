// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFACTIVITYADVERTISER_H
#define SFACTIVITYADVERTISER_H

@class NSString;
@protocol SFActivityAdvertiserClient, SFActivityAdvertiserDelegate;


#import "SFXPCClient.h"

@interface SFActivityAdvertiser : SFXPCClient <SFActivityAdvertiserClient>



@property (readonly, copy) NSString *debugDescription;
@property NSObject<SFActivityAdvertiserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedAdvertiser;
-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)init;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(void)_getRemoteObjectProxyOnQueue:(id)arg0 ;
-(void)activityPayloadForAdvertisementPayload:(id)arg0 command:(id)arg1 requestedByDevice:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)advertiseAdvertisementPayload:(id)arg0 options:(id)arg1 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg0 toDevice:(id)arg1 error:(id)arg2 ;
-(void)fetchLoginIDWithCompletionHandler:(id)arg0 ;
-(void)fetchPeerForUUID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)fetchSFPeerDevicesWithCompletionHandler:(id)arg0 ;
-(void)pairedDevicesChanged:(id)arg0 ;


@end


#endif