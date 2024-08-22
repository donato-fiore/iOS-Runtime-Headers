// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHEDGECOLLECTION_H
#define PGGRAPHEDGECOLLECTION_H

@class MAEdgeCollection;



@interface PGGraphEdgeCollection : MAEdgeCollection



+(Class)edgeClass;
+(id)edgesFromNodes:(id)arg0 ;
+(id)edgesFromNodes:(id)arg0 toNodes:(id)arg1 ;
+(id)edgesInGraph:(id)arg0 ;
+(id)edgesOfType:(NSUInteger)arg0 betweenNodes:(id)arg1 andNodes:(id)arg2 ;
+(id)edgesOfType:(NSUInteger)arg0 onNodes:(id)arg1 ;
+(id)edgesToNodes:(id)arg0 ;
+(id)filter;


@end


#endif