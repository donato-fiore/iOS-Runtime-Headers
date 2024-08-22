// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTPEERREMOTECONNECTION_H
#define VTPEERREMOTECONNECTION_H

@class NSString, IDSService, NSMutableDictionary;
@protocol IDSServiceDelegate, OS_dispatch_queue, VTPeerRemoteConnectionDelegate;

#import <Foundation/Foundation.h>


@interface VTPeerRemoteConnection : NSObject <IDSServiceDelegate>

 {
    NSString *_identifier;
    BOOL _requireNearbyPeer;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_idsService;
    NSMutableDictionary *_completions;
    NSMutableDictionary *_responseClasses;
    id<VTPeerRemoteConnectionDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasNearbyPeer;
-(BOOL)hasPeer;
-(id)_account;
-(id)_destination;
-(id)_pairedDevice;
-(id)_service;
-(id)_wrappedSendFailureError:(id)arg0 ;
-(id)initWithServiceIdentifier:(id)arg0 ;
-(id)initWithServiceIdentifier:(id)arg0 requireNearbyPeer:(BOOL)arg1 ;
-(id)serviceIdentifier;
-(void)_invokeCompletionForIdentifier:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)_sendResponse:(id)arg0 forRequestId:(id)arg1 ;
-(void)sendRequestType:(NSUInteger)arg0 nonWaking:(BOOL)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif