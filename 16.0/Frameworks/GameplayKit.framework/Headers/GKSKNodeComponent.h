// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSKNODECOMPONENT_H
#define GKSKNODECOMPONENT_H

@class NSString, SKNode, NSIndexPath;
@protocol GKSerializedNodeContaining, GKAgentDelegate;


#import "GKComponent.h"

@interface GKSKNodeComponent : GKComponent <GKSerializedNodeContaining, GKAgentDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKNode *node; // ivar: _node
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