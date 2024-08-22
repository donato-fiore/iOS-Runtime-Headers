// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSKAPPAMANAGER_H
#define SOSKAPPAMANAGER_H

@class NSXPCConnection, NSString, NSHashTable;
@protocol SOSInternalClientProtocol, SOSClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SOSKappaManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) int connectionRequestNotificationToken; // ivar: _connectionRequestNotificationToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(BOOL)isKappaEnabled;
+(NSInteger)mapSOSFlowStateToKappaState:(NSInteger)arg0 ;
+(NSUInteger)mapServerResponseToKappaResponse:(NSInteger)arg0 ;
+(id)currentSOSStatus;
+(id)sharedInstance;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)detectedAnomalyWithElectedDevice:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)didDismissClientSOSBeforeSOSCall:(NSInteger)arg0 ;
-(void)didUpdateSOSStatus:(id)arg0 ;
-(void)dismissClientSOSWithCompletion:(id)arg0 ;
-(void)forceStartConnection;
-(void)removeObserver:(id)arg0 ;
-(void)setSendingLocationUpdate:(BOOL)arg0 ;
-(void)triggerKappaWithCompletion:(id)arg0 ;
-(void)updateClientCurrentSOSInitiationState:(NSInteger)arg0 ;
-(void)updateClientCurrentSOSInteractiveState:(NSInteger)arg0 ;
-(void)updateObserversWithKappaStatus:(id)arg0 ;


@end


#endif