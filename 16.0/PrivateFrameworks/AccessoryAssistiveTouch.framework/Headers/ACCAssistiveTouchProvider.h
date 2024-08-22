// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCASSISTIVETOUCHPROVIDER_H
#define ACCASSISTIVETOUCHPROVIDER_H

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol ACCAssistiveTouchProviderProtocol, ACCAssistiveTouchXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCAssistiveTouchProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories; // ivar: _accessories
@property (nonatomic) BOOL cachedState; // ivar: _cachedState
@property (retain, nonatomic) NSObject<ACCAssistiveTouchProviderProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *providerUID; // ivar: _providerUID
@property (retain, nonatomic) NSObject<ACCAssistiveTouchXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection


-(BOOL)calculateDesiredState:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 initialState:(BOOL)arg1 ;
-(void)accessoryAssistiveTouchAttached:(id)arg0 ;
-(void)accessoryAssistiveTouchDetachAll;
-(void)accessoryAssistiveTouchDetached:(id)arg0 ;
-(void)connectToServer;
-(void)dealloc;
-(void)notifyAssistiveTouchEnabledState:(BOOL)arg0 ;
-(void)requestState:(id)arg0 ;
-(void)setEnabled:(id)arg0 flag:(BOOL)arg1 ;


@end


#endif