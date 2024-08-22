// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOMPANIONMANAGER_H
#define SFCOMPANIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver, SFCompanionServiceManagerProtocol, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *deviceID; // ivar: _deviceID
@property (copy) NSString *deviceIP; // ivar: _deviceIP
@property (copy) NSString *deviceName; // ivar: _deviceName
@property (readonly) NSUInteger hash;
@property (copy) NSString *identifier; // ivar: _identifier
@property (retain) NSObject<SFCompanionServiceManagerProtocol> *managerProxy; // ivar: _managerProxy
@property (retain) NSObject<OS_dispatch_semaphore> *managerSemaphore; // ivar: _managerSemaphore
@property (retain) NSObject<OS_dispatch_queue> *serviceIdentifierQueue; // ivar: _serviceIdentifierQueue
@property (retain) NSMutableDictionary *services; // ivar: _services
@property (retain) NSMutableDictionary *streamHandlers; // ivar: _streamHandlers
@property (readonly) Class superclass;


+(id)serviceManager;
-(id)init;
-(id)serviceForIdentifier:(id)arg0 ;
-(id)streamDataForIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)disableStreamSupportForIdentifier:(id)arg0 ;
-(void)getStreamsForData:(id)arg0 withStreamHandler:(id)arg1 ;
-(void)retrieveManagerProxy;
-(void)signalSemaphore;
-(void)streamToService:(id)arg0 withFileHandle:(id)arg1 acceptReply:(id)arg2 ;
-(void)streamsFromFileHandle:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)supportStreamsWithIdentifier:(id)arg0 withStreamHandler:(id)arg1 ;
-(void)xpcManagerConnectionInterrupted;
-(void)xpcManagerDidInvalidate:(id)arg0 ;


@end


#endif