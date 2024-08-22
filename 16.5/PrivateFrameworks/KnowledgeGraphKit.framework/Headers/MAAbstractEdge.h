// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAABSTRACTEDGE_H
#define MAABSTRACTEDGE_H



#import "MAConcreteEdge.h"
#import "MAAbstractNode.h"

@interface MAAbstractEdge : MAConcreteEdge {
    MAAbstractNode *_sourceAbstractNode;
    MAAbstractNode *_targetAbstractNode;
}


@property (readonly) BOOL isDirected; // ivar: _isDirected
@property (readonly) NSUInteger maximum; // ivar: _maximum
@property (readonly) NSUInteger minimum; // ivar: _minimum


-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 minimum:(NSUInteger)arg5 maximum:(NSUInteger)arg6 directed:(BOOL)arg7 ;
-(id)oppositeNode:(id)arg0 ;
-(id)sourceNode;
-(id)targetNode;


@end


#endif