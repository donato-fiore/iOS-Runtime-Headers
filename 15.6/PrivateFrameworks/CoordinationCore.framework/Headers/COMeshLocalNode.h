// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESHLOCALNODE_H
#define COMESHLOCALNODE_H

@class NSSet, NSDictionary, NSArray;


#import "COMeshNode.h"

@interface COMeshLocalNode : COMeshNode

@property (copy, nonatomic) NSSet *acceptableCommands; // ivar: _acceptableCommands
@property (copy, nonatomic) NSDictionary *commands; // ivar: _commands
@property (copy, nonatomic) id *controlFlagsProvider; // ivar: _controlFlagsProvider
@property (readonly, nonatomic) NSSet *ignoredIDSIdentifiers; // ivar: _ignoredIDSIdentifiers
@property (readonly, nonatomic) unsigned short listeningPort; // ivar: _listeningPort
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes
@property (readonly, nonatomic) NSArray *pendingActivation; // ivar: _pendingActivation


-(id)IDSIdentifier;
-(id)_createNodeForDevice:(id)arg0 configure:(id)arg1 ;
-(id)_handleDiscoveryRecord:(id)arg0 ;
-(id)_nodeForIDSIdentifier:(id)arg0 ;
-(id)initWithCompanionLinkClient:(id)arg0 source:(id)arg1 ;
-(void)_handleActivation:(id)arg0 ;
-(void)_handleEventIdentifier:(id)arg0 rapportRepresentation:(id)arg1 options:(id)arg2 fromNode:(id)arg3 ;
-(void)_handleFoundDevice:(id)arg0 ;
-(void)_handleLostDevice:(id)arg0 ;
-(void)_handleLostNode:(id)arg0 ;
// -(void)_handleRequestIdentifier:(id)arg0 rapportRepresentation:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 fromNode:(unk)arg4 at:(id)arg5  ;
-(void)_invalidateAndReintroduceNode:(id)arg0 ;
-(void)_updateListeningPort:(id)arg0 ;
-(void)activate;


@end


#endif