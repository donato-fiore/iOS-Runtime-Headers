// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSCNNODECOMPONENT_H
#define GKSCNNODECOMPONENT_H

@class NSString, SCNNode, NSIndexPath;
@protocol GKSerializedNodeContaining, GKAgentDelegate;


#import "GKComponent.h"

@interface GKSCNNodeComponent : GKComponent <GKSerializedNodeContaining, GKAgentDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SCNNode *node; // ivar: _node
@property (retain, nonatomic) NSIndexPath *serializableNodeIndexPath; // ivar: _serializableNodeIndexPath
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)componentWithNode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNode:(id)arg0 ;
-(void)agentDidUpdate:(id)arg0 ;
-(void)agentWillUpdate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEntity:(id)arg0 ;


@end


#endif