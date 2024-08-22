// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NENEXUS_H
#define NENEXUS_H

@class NSMutableDictionary, NSString, NSArray;
@protocol NENexusAgentDelegate, OS_nw_nexus, NENexusDelegate;

#import <Foundation/Foundation.h>

#import "NENexusFlowManager.h"
#import "NEPolicySession.h"
#import "NENexusAgent.h"

@interface NENexus : NSObject <NENexusAgentDelegate>

 {
    NSObject<OS_nw_nexus> *_userNexus;
    NSMutableDictionary *_userNexusInstances;
    NSMutableDictionary *_userNexusClientCount;
    NSMutableDictionary *_userNexusClientFlows;
    NSMutableDictionary *_assertions;
    NENexusFlowManager *_flowManager;
    NEPolicySession *_policySession;
    NENexusAgent *_agent;
    NSObject<NENexusDelegate> *_delegate;
    NSMutableDictionary *_kernelNexusClientFlows;
}


@property (getter=isAsserted) BOOL asserted; // ivar: _asserted
@property (nonatomic) NSUInteger availability; // ivar: _availability
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dnsServerAddresses; // ivar: _dnsServerAddresses
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly) NSUInteger level; // ivar: _level
@property (retain, nonatomic) NSArray *localAddresses; // ivar: _localAddresses
@property (nonatomic) NSUInteger maximumTransmissionUnit; // ivar: _maximumTransmissionUnit
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property *NEVirtualInterface_s virtualInterface; // ivar: _virtualInterface


-(BOOL)handleRequestNexusFromClient:(id)arg0 ;
-(id)initWithLevel:(NSUInteger)arg0 name:(id)arg1 virtualInterfaceType:(NSInteger)arg2 delegate:(id)arg3 channelCount:(unsigned int)arg4 ;
-(id)initWithLevel:(NSUInteger)arg0 name:(id)arg1 virtualInterfaceType:(NSInteger)arg2 delegate:(id)arg3 channelCount:(unsigned int)arg4 netifRingSize:(unsigned int)arg5 kernelPipeTxRingSize:(unsigned int)arg6 kernelPipeRxRingSize:(unsigned int)arg7 execUUID:(id)arg8 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)cancel;
-(void)closeFlowWithClientIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)handleAssertFromClient:(id)arg0 ;
-(void)handleStartFromClient:(id)arg0 ;
-(void)handleUnassertFromClient:(id)arg0 ;


@end


#endif