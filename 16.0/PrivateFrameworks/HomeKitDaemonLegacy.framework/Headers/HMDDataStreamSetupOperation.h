// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMSETUPOPERATION_H
#define HMDDATASTREAMSETUPOPERATION_H

@class NSString, NSMutableSet;
@protocol HMDDataStreamSetupOperationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHAPAccessory.h"
#import "HMDService.h"

@interface HMDDataStreamSetupOperation : NSObject

@property (readonly, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (weak, nonatomic) NSObject<HMDDataStreamSetupOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) NSMutableSet *pendingBulkSendListeners; // ivar: _pendingBulkSendListeners
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) HMDService *transferManagementService; // ivar: _transferManagementService


+(id)hapSetupOperationWithAccessory:(id)arg0 queue:(id)arg1 logIdentifier:(id)arg2 transferManagementService:(id)arg3 maxControllerTransportMTU:(NSUInteger)arg4 setupOperationReadRequired:(BOOL)arg5 ;
+(id)tcpSetupOperationWithAccessory:(id)arg0 queue:(id)arg1 logIdentifier:(id)arg2 transferManagementService:(id)arg3 ;
-(BOOL)removeBulkSendListener:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 queue:(id)arg1 logIdentifier:(id)arg2 transferManagementService:(id)arg3 ;
-(void)_clearPendingBulkSendListeners;
-(void)addBulkSendListener:(id)arg0 fileType:(id)arg1 ;
-(void)cancelSetup;
-(void)continueStreamSetupWithResponse:(id)arg0 ;
-(void)dealloc;
-(void)movePendingBulkSendListenersToBulkSendProtocol:(id)arg0 ;
-(void)postDidFailWithError:(id)arg0 ;
-(void)postDidSucceedWithTransport:(id)arg0 sessionEncryption:(id)arg1 ;
-(void)processTransportSetupResponse:(id)arg0 ;
-(void)startSetup;


@end


#endif