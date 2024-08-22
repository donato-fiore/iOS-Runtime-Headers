// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMNANOIDSMANAGER_H
#define FMNANOIDSMANAGER_H

@class NSString, NSArray, NSMutableDictionary, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMNanoIDSManager : NSObject <IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int minVersion; // ivar: _minVersion
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests; // ivar: _outstandingRequests
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outstandingRequestsModQueue; // ivar: _outstandingRequestsModQueue
@property (retain, nonatomic) NSMutableDictionary *registeredRequestHandlers; // ivar: _registeredRequestHandlers
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (retain, nonatomic) NSString *serviceId; // ivar: _serviceId
@property (readonly) Class superclass;


-(BOOL)_checkMinVersionDeviceID:(id)arg0 ;
-(BOOL)cancelMessageWithId:(id)arg0 ;
-(id)_sendMessageWithProtobuf:(id)arg0 inResponseToRequest:(id)arg1 withPriority:(NSInteger)arg2 timeout:(CGFloat)arg3 bypassingDuet:(BOOL)arg4 deviceID:(id)arg5 responseHandler:(id)arg6 ;
-(id)_sendProtobuf:(id)arg0 priority:(NSInteger)arg1 responseIdentifier:(id)arg2 expectsResponse:(BOOL)arg3 bypassingDuet:(BOOL)arg4 deviceID:(id)arg5 ;
-(id)initWithServiceId:(id)arg0 minimumVersion:(NSInteger)arg1 ;
-(void)handleRequestsOfType:(unsigned short)arg0 withHandler:(id)arg1 ;
// -(void)sendMessageWithProtobuf:(id)arg0 inResponseToRequest:(id)arg1 withPriority:(NSInteger)arg2 timeout:(CGFloat)arg3 bypassingDuet:(BOOL)arg4 deviceID:(id)arg5 requestAcceptedHandler:(id)arg6 responseHandler:(unk)arg7  ;
// -(void)sendMessageWithProtobuf:(id)arg0 inResponseToRequest:(id)arg1 withPriority:(NSInteger)arg2 timeout:(CGFloat)arg3 bypassingDuet:(BOOL)arg4 requestAcceptedHandler:(id)arg5 responseHandler:(unk)arg6  ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)start;


@end


#endif