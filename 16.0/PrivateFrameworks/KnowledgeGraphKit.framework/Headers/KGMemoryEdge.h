// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGMEMORYEDGE_H
#define KGMEMORYEDGE_H

@class NSString, NSSet, NSDictionary;
@protocol KGEdge;

#import <Foundation/Foundation.h>

#import "KGMemoryNode.h"

@interface KGMemoryEdge : NSObject <KGEdge>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSSet *labels; // ivar: _labels
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) KGMemoryNode *sourceNode; // ivar: _sourceNode
@property (readonly) Class superclass;
@property (readonly, nonatomic) KGMemoryNode *targetNode; // ivar: _targetNode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(id)oppositeNodeFromNode:(id)arg0 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;


@end


#endif