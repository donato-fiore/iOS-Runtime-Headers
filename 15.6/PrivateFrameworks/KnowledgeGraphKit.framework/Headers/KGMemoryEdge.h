// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KGMEMORYEDGE_H
#define KGMEMORYEDGE_H

@class NSString, NSArray, NSDictionary;
@protocol KGEdge;

#import <Foundation/Foundation.h>

#import "KGMemoryNode.h"

@interface KGMemoryEdge : NSObject <KGEdge>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *labels; // ivar: _labels
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) KGMemoryNode *sourceNode; // ivar: _sourceNode
@property (readonly) Class superclass;
@property (readonly, nonatomic) KGMemoryNode *targetNode; // ivar: _targetNode
@property (nonatomic) float weight; // ivar: _weight


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
-(id)oppositeNodeFromNode:(id)arg0 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;


@end


#endif