// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHLOCALNODE_H
#define COMESHLOCALNODE_H

@class NSSet, NSDictionary, NSArray;


#import "COMeshNode.h"

@interface COMeshLocalNode : COMeshNode

@property (copy, nonatomic) NSSet *acceptableCommands; // ivar: _acceptableCommands
@property (copy, nonatomic) NSDictionary *commands; // ivar: _commands
@property (copy, nonatomic) id *controlFlagsProvider; // ivar: _controlFlagsProvider
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes


-(id)_nodeForIDSIdentifier:(id)arg0 ;
-(id)initWithCompanionLinkClient:(id)arg0 source:(id)arg1 ;
-(void)_handleEventIdentifier:(id)arg0 rapportRepresentation:(id)arg1 fromNode:(id)arg2 ;
-(void)_handleFoundDevice:(id)arg0 ;
-(void)_handleLostDevice:(id)arg0 ;
// -(void)_handleRequestIdentifier:(id)arg0 rapportRepresentation:(id)arg1 responseHandler:(id)arg2 fromNode:(unk)arg3 at:(id)arg4  ;
-(void)_invalidateAndReintroduceNode:(id)arg0 ;
-(void)activate;


@end


#endif