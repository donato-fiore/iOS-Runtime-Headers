// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSIDSSYNCSERVICE_H
#define DNDSIDSSYNCSERVICE_H

@class IDSService, NSString;
@protocol IDSServiceDelegate, DNDSSyncService, OS_dispatch_queue, DNDSSyncServiceDelegate;

#import <Foundation/Foundation.h>


@interface DNDSIDSSyncService : NSObject <IDSServiceDelegate, DNDSSyncService>

 {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_syncService;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSSyncServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_sendMessage:(id)arg0 withVersionNumber:(NSUInteger)arg1 messageType:(id)arg2 toDestinations:(id)arg3 requestIdentifier:(*id)arg4 error:(*id)arg5 ;
-(id)initWithIDSService:(id)arg0 ;
-(void)_queue_handleIncomingMessage:(id)arg0 deviceIdentifier:(id)arg1 ;
-(void)_queue_resume;
-(void)resume;
-(void)sendMessage:(id)arg0 withVersionNumber:(NSUInteger)arg1 messageType:(id)arg2 toDestinations:(id)arg3 completionHandler:(id)arg4 ;
-(void)sendMessage:(id)arg0 withVersionNumber:(NSUInteger)arg1 messageType:(id)arg2 toDestinations:(id)arg3 identifyingCompletionHandler:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif