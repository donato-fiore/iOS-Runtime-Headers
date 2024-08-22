// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSTARTSENDINGUPDATESFORWARDINGACTION_H
#define INSTARTSENDINGUPDATESFORWARDINGACTION_H

@class NSXPCConnection, NSString, NSXPCListenerEndpoint;
@protocol BSXPCCoding, INIntentResponseObserver;


#import "INIntentForwardingAction.h"

@interface INStartSendingUpdatesForwardingAction : INIntentForwardingAction <BSXPCCoding>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<INIntentResponseObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


+(Class)responseClass;
-(BOOL)executeRemotelyWithVendorRemote:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithIntent:(id)arg0 endpoint:(id)arg1 observer:(id)arg2 ;
-(id)initWithIntent:(id)arg0 endpointProvider:(id)arg1 observer:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif