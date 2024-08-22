// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWNETWORKAGENTREGISTRATION_H
#define NWNETWORKAGENTREGISTRATION_H

@class NSUUID;
@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NWNetworkAgentRegistration : NSObject

@property (retain) NSObject<NWNetworkAgent> *networkAgent; // ivar: _networkAgent
@property Class networkAgentClass; // ivar: _networkAgentClass
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_dispatch_source> *readSource; // ivar: _readSource
@property (readonly, nonatomic, getter=isRegistered) BOOL registered;
@property (retain) NSUUID *registeredUUID; // ivar: _registeredUUID
@property int registrationSocket; // ivar: _registrationSocket
@property (readonly, nonatomic) unsigned int tokenCount;
@property (nonatomic) NSUInteger useCount;


+(BOOL)addActiveAssertionToNetworkAgent:(id)arg0 ;
+(BOOL)removeActiveAssertionFromNetworkAgent:(id)arg0 ;
+(BOOL)useNetworkAgent:(id)arg0 returnUseCount:(*NSUInteger)arg1 ;
+(int)newRegistrationFileDescriptor;
-(BOOL)addNetworkAgentToInterfaceNamed:(id)arg0 ;
-(BOOL)addToken:(id)arg0 ;
-(BOOL)assignDiscoveredEndpoints:(id)arg0 toClient:(id)arg1 ;
-(BOOL)assignNexusData:(id)arg0 toClient:(id)arg1 ;
-(BOOL)assignResolvedEndpoints:(id)arg0 toClient:(id)arg1 ;
-(BOOL)createReadSourceWithRegistrationSocket:(int)arg0 ;
-(BOOL)flushTokens;
-(BOOL)registerNetworkAgent:(id)arg0 ;
-(BOOL)registerNetworkAgent:(id)arg0 withFileDescriptor:(int)arg1 ;
-(BOOL)removeNetworkAgentFromInterfaceNamed:(id)arg0 ;
-(BOOL)resetError;
-(BOOL)setLowWaterMark:(unsigned int)arg0 ;
-(BOOL)unregisterNetworkAgent;
-(BOOL)updateNetworkAgent:(id)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)initWithNetworkAgentClass:(Class)arg0 ;
-(id)initWithNetworkAgentClass:(Class)arg0 queue:(id)arg1 ;
-(int)dupRegistrationFileDescriptor;
-(void)dealloc;
-(void)handleMessageFromAgent;


@end


#endif