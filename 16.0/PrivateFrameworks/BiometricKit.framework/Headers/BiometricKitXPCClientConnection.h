// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BIOMETRICKITXPCCLIENTCONNECTION_H
#define BIOMETRICKITXPCCLIENTCONNECTION_H

@class NSXPCConnection, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BiometricKitXPCClientConnection : NSObject {
    NSInteger _deviceType;
    NSXPCConnection *_xpcConnection;
    BOOL _invalidated;
    NSMutableDictionary *_clients;
    int _serverStartedNotificationToken;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;


+(id)connectionWithDeviceType:(NSInteger)arg0 ;
-(BOOL)addClient:(id)arg0 ;
-(BOOL)removeClient:(id)arg0 ;
-(id)client:(NSUInteger)arg0 ;
-(id)initWithDeviceType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enrollFeedback:(id)arg0 client:(NSUInteger)arg1 ;
-(void)enrollResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)enrollUpdate:(id)arg0 client:(NSUInteger)arg1 ;
-(void)homeButtonPressed:(NSUInteger)arg0 ;
-(void)matchResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)taskResumeStatus:(int)arg0 client:(NSUInteger)arg1 ;
-(void)templateUpdate:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)touchIDButtonPressed:(BOOL)arg0 client:(NSUInteger)arg1 ;


@end


#endif