// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17KNOWLEDGEGRAPHKIT39KGWRAPPERMUTABLEDIRECTEDBINARYADJACENCY_H
#define _TTC17KNOWLEDGEGRAPHKIT39KGWRAPPERMUTABLEDIRECTEDBINARYADJACENCY_H

@class TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency;



@interface _TtC17KnowledgeGraphKit39KGWrapperMutableDirectedBinaryAdjacency : TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency



-(id)init;
-(void)formUnionWith:(id)arg0 ;
-(void)insertSource:(NSUInteger)arg0 target:(NSUInteger)arg1 ;
-(void)removeSource:(NSUInteger)arg0 target:(NSUInteger)arg1 ;
-(void)removeTargetsForSource:(NSUInteger)arg0 ;
-(void)setTargets:(id)arg0 forSource:(NSUInteger)arg1 ;
-(void)subtract:(id)arg0 ;


@end


#endif