// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGSNAPSHOTEDGE_H
#define KGSNAPSHOTEDGE_H

@class NSString, NSSet, NSDictionary;
@protocol KGEdge, KGNode;

#import <Foundation/Foundation.h>


@interface KGSnapshotEdge : NSObject <KGEdge>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSSet *labels; // ivar: _labels
@property (readonly, copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSObject<KGNode> *sourceNode; // ivar: _sourceNode
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<KGNode> *targetNode; // ivar: _targetNode


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(id)oppositeNodeFromNode:(id)arg0 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;


@end


#endif