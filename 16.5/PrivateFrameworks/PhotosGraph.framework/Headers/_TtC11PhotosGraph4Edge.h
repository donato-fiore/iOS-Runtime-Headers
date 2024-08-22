// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11PHOTOSGRAPH4EDGE_H
#define _TTC11PHOTOSGRAPH4EDGE_H

@class NSSet, NSDictionary;
@protocol KGEdge, KGNode;

#import <Foundation/Foundation.h>


@interface _TtC11PhotosGraph4Edge : NSObject <KGEdge>

 {
    ? labels;
    ? properties;
}


@property (nonatomic) NSUInteger identifier; // ivar: identifier
@property (nonatomic, copy) NSSet *labels;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, retain) NSObject<KGNode> *sourceNode; // ivar: sourceNode
@property (nonatomic, retain) NSObject<KGNode> *targetNode; // ivar: targetNode


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(id)oppositeNodeFromNode:(id)arg0 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;


@end


#endif