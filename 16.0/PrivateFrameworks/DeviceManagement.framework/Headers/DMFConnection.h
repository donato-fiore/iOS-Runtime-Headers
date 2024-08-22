// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFCONNECTION_H
#define DMFCONNECTION_H

@class NSString, CATOperationQueue, CATTaskClient;
@protocol CATTaskClientDelegate, DMFTransportProvider;

#import <Foundation/Foundation.h>


@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider>



@property (nonatomic) NSUInteger connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSystemConnection; // ivar: _isSystemConnection
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTaskClient *taskClient; // ivar: _taskClient
@property (readonly, weak, nonatomic) NSObject<DMFTransportProvider> *transportProvider; // ivar: _transportProvider


+(id)connectionForAppleID:(id)arg0 ;
+(id)connectionForUID:(unsigned int)arg0 ;
+(id)currentUserConnection;
+(id)sharedConnection;
+(id)systemConnection;
-(id)batchOperationToPerformOperations:(id)arg0 ;
-(id)initWithTransportProvider:(id)arg0 userInfo:(id)arg1 ;
-(id)initWithUserInfo:(id)arg0 ;
-(id)makeNewTransport;
-(id)prepareOperationForRequest:(id)arg0 ;
-(void)_operationDidFinish:(id)arg0 completion:(id)arg1 ;
-(void)_reconnectTaskClient;
-(void)client:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)clientDidConnect:(id)arg0 ;
-(void)clientDidDisconnect:(id)arg0 ;
-(void)clientDidInvalidate:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)performRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif