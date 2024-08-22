// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHBELONGSTOEDGE_H
#define PGGRAPHBELONGSTOEDGE_H



#import "PGGraphOptimizedEdge.h"
#import "PGGraphPersonNode.h"
#import "PGGraphSocialGroupNode.h"

@interface PGGraphBelongsToEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat importance; // ivar: _importance
@property (readonly) PGGraphPersonNode *personNode;
@property (readonly) PGGraphSocialGroupNode *socialGroupNode;


+(id)filter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromPersonNode:(id)arg0 toSocialGroupNode:(id)arg1 importance:(CGFloat)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif