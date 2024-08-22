// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSGROUPCONTEXTCONTROLLER_H
#define IDSGROUPCONTEXTCONTROLLER_H

@class NSString, CUTPromiseSeal;
@protocol IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate, IDSGroupContextControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSGroupContextController : NSObject <IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<IDSGroupContextControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CUTPromiseSeal *seal; // ivar: _seal
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(id)initWithServiceName:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(void)_contentWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)didCacheGroup:(id)arg0 completion:(id)arg1 ;
-(void)didCreateGroup:(id)arg0 completion:(id)arg1 ;
-(void)didReceiveDecryptionFailureForGroup:(id)arg0 completion:(id)arg1 ;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(id)arg0 ;
-(void)didUpdateGroup:(id)arg0 withNewGroup:(id)arg1 completion:(id)arg2 ;
-(void)groupContextWithCompletion:(id)arg0 ;
-(void)persistedTokenForTaskHandler:(id)arg0 completion:(id)arg1 ;
-(void)qGroupContextWithDeviceIdentity:(id)arg0 completion:(id)arg1 ;
-(void)qSetupSeal;
-(void)scheduleTransactionLogTask:(id)arg0 ;
-(void)taskHandler:(id)arg0 accountInfoForAliases:(id)arg1 completion:(id)arg2 ;
-(void)taskHandler:(id)arg0 groupsWithGroupIDs:(id)arg1 completion:(id)arg2 ;
-(void)taskHandler:(id)arg0 messagesFromToken:(id)arg1 completion:(id)arg2 ;
-(void)taskHandler:(id)arg0 participantsWithDestinations:(id)arg1 completion:(id)arg2 ;
-(void)taskHandler:(id)arg0 persistToken:(id)arg1 completion:(id)arg2 ;


@end


#endif