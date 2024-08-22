// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKSYNCSERVICEENDPOINT_H
#define NNMKSYNCSERVICEENDPOINT_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue, NNMKSyncServiceTransport;

#import <Foundation/Foundation.h>


@interface NNMKSyncServiceEndpoint : NSObject

@property (readonly, nonatomic) NSUInteger connectivityState;
@property (retain, nonatomic) NSString *idsServiceName; // ivar: _idsServiceName
@property (retain, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer; // ivar: _repeatPreventionCleanupTimer
@property (retain, nonatomic) NSMutableDictionary *repeatPreventionRecords; // ivar: _repeatPreventionRecords
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // ivar: _serviceQueue
@property (retain, nonatomic) NSObject<NNMKSyncServiceTransport> *serviceTransport; // ivar: _serviceTransport


-(BOOL)_willIdRepeat:(id)arg0 ;
-(id)initWithIDSServiceName:(id)arg0 queue:(id)arg1 ;
-(id)sendProtobufData:(id)arg0 type:(NSUInteger)arg1 priority:(NSUInteger)arg2 repeatPreventionId:(id)arg3 timeoutCategory:(NSUInteger)arg4 allowCloudDelivery:(BOOL)arg5 ;
-(id)sendProtobufData:(id)arg0 type:(NSUInteger)arg1 priority:(NSUInteger)arg2 timeout:(CGFloat)arg3 allowCloudDelivery:(BOOL)arg4 ;
-(id)sendProtobufData:(id)arg0 type:(NSUInteger)arg1 priority:(NSUInteger)arg2 timeoutCategory:(NSUInteger)arg3 allowCloudDelivery:(BOOL)arg4 ;
-(id)sendResourceAtURL:(id)arg0 metadata:(id)arg1 priority:(NSUInteger)arg2 timeoutCategory:(NSUInteger)arg3 ;
-(void)_initializeServiceTransport;
-(void)_removeExpiredRepeatPreventionRecords;
-(void)_storeRepeatPreventionId:(id)arg0 priority:(NSUInteger)arg1 ;
-(void)connectivityChanged;
-(void)dealloc;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)readResourceAtURL:(id)arg0 metadata:(id)arg1 ;
-(void)resetRepeatPreventionHistory;
-(void)spaceBecameAvailable;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;
-(void)syncServiceTransport:(id)arg0 didFailSendingProtobufWithIdentifier:(id)arg1 errorCode:(NSInteger)arg2 ;
-(void)syncServiceTransport:(id)arg0 didReadProtobufData:(id)arg1 type:(NSUInteger)arg2 ;
-(void)syncServiceTransport:(id)arg0 didRecieveDataAtURL:(id)arg1 metadata:(id)arg2 ;
-(void)syncServiceTransport:(id)arg0 didSendProtobufSuccessfullyWithIdentifier:(id)arg1 ;
-(void)syncServiceTransportDidChangeConnectivity:(id)arg0 ;
-(void)syncServiceTransportDidReportSpaceBecameAvailable:(id)arg0 ;


@end


#endif