// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NENEXUS_H
#define NENEXUS_H

@class NSMutableDictionary, NSString, NSArray;
@protocol NENexusAgentDelegate, NENexusDelegate, OS_nw_nexus;

#import <Foundation/Foundation.h>

#import "NENexusAgent.h"
#import "NENexusFlowManager.h"
#import "NEPolicySession.h"

@interface NENexus : NSObject <NENexusAgentDelegate>



@property (retain) NENexusAgent *agent; // ivar: _agent
@property (getter=isAsserted) BOOL asserted; // ivar: _asserted
@property (retain) NSMutableDictionary *assertions; // ivar: _assertions
@property (nonatomic) NSUInteger availability; // ivar: _availability
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NENexusDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dnsServerAddresses; // ivar: _dnsServerAddresses
@property (retain) NENexusFlowManager *flowManager; // ivar: _flowManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *interfaceName;
@property (retain) NSMutableDictionary *kernelNexusClientFlows; // ivar: _kernelNexusClientFlows
@property (readonly) NSUInteger level; // ivar: _level
@property (retain, nonatomic) NSArray *localAddresses; // ivar: _localAddresses
@property (nonatomic) NSUInteger maximumTransmissionUnit; // ivar: _maximumTransmissionUnit
@property (readonly) NSString *name; // ivar: _name
@property (retain) NEPolicySession *policySession; // ivar: _policySession
@property (readonly) Class superclass;
@property (retain) NSObject<OS_nw_nexus> *userNexus; // ivar: _userNexus
@property (retain) NSMutableDictionary *userNexusClientCount; // ivar: _userNexusClientCount
@property (retain) NSMutableDictionary *userNexusClientFlows; // ivar: _userNexusClientFlows
@property (retain) NSMutableDictionary *userNexusInstances; // ivar: _userNexusInstances
@property *NEVirtualInterface_s virtualInterface; // ivar: _virtualInterface


-(BOOL)handleRequestNexusFromClient:(id)arg0 ;
-(BOOL)setupFlowManager;
-(BOOL)setupPolicySession;
-(id)initWithLevel:(NSUInteger)arg0 name:(id)arg1 virtualInterfaceType:(NSInteger)arg2 delegate:(id)arg3 channelCount:(unsigned int)arg4 ;
-(id)initWithLevel:(NSUInteger)arg0 name:(id)arg1 virtualInterfaceType:(NSInteger)arg2 delegate:(id)arg3 channelCount:(unsigned int)arg4 netifRingSize:(unsigned int)arg5 kernelPipeTxRingSize:(unsigned int)arg6 kernelPipeRxRingSize:(unsigned int)arg7 execUUID:(id)arg8 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)cancel;
-(void)closeFlowWithClientIdentifier:(id)arg0 ;
-(void)connectNewFlow:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFlow:(id)arg0 ;
-(void)handleAssertFromClient:(id)arg0 ;
-(void)handleStartFromClient:(id)arg0 ;
-(void)handleUnassertFromClient:(id)arg0 ;
-(void)rejectFlowWithClientIdentifier:(id)arg0 ;


@end


#endif