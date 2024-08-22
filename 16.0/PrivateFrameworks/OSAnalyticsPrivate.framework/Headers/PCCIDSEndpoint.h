// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCCIDSENDPOINT_H
#define PCCIDSENDPOINT_H

@class IDSService, NSMutableDictionary, NSString;
@protocol IDSServiceDelegate;


#import "PCCEndpoint.h"

@interface PCCIDSEndpoint : PCCEndpoint <IDSServiceDelegate>

 {
    IDSService *_pairedWatchService;
    IDSService *_homeDeviceService;
    NSMutableDictionary *_serviceByDevice;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDeviceNearby:(id)arg0 ;
-(id)deviceIds;
-(id)init;
-(id)send:(id)arg0 file:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(id)send:(id)arg0 message:(id)arg1 error:(*id)arg2 ;
-(id)serviceByDeviceID:(id)arg0 ;
-(id)startService:(id)arg0 ;
-(void)runWithDelegate:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;


@end


#endif