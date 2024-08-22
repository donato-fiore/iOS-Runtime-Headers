// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDSPIDSSERVICE_H
#define _HDSPIDSSERVICE_H

@class IDSService, NSString;
@protocol HDSPIDSService, IDSServiceDelegate, HKSPQueueBackedScheduler, HDSPIDSServiceDelegate;

#import <Foundation/Foundation.h>


@interface _HDSPIDSService : NSObject <HDSPIDSService, IDSServiceDelegate>

 {
    IDSService *_service;
    id<HKSPQueueBackedScheduler> *_scheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPIDSServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCloudService; // ivar: _isCloudService
@property (readonly) Class superclass;


-(id)_cloudDestinations;
-(id)_localDestinations;
-(id)_loggingDescription;
-(id)initWithIsCloudService:(BOOL)arg0 scheduler:(id)arg1 ;
-(void)_sendSerializedMessage:(id)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)sendMessage:(id)arg0 completion:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif