// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGMUTABLEDIRECTEDBINARYADJACENCY_H
#define KGMUTABLEDIRECTEDBINARYADJACENCY_H



#import "KGDirectedBinaryAdjacency.h"
#import "_TtC17KnowledgeGraphKit39KGWrapperMutableDirectedBinaryAdjacency.h"

@interface KGMutableDirectedBinaryAdjacency : KGDirectedBinaryAdjacency

@property (readonly) _TtC17KnowledgeGraphKit39KGWrapperMutableDirectedBinaryAdjacency *mutableUnderlyingObject;


-(id)init;
-(void)formUnionWith:(id)arg0 ;
-(void)insertSource:(NSUInteger)arg0 target:(NSUInteger)arg1 ;
-(void)removeSource:(NSUInteger)arg0 target:(NSUInteger)arg1 ;
-(void)removeTargetsForSource:(NSUInteger)arg0 ;
-(void)setTargets:(id)arg0 forSource:(NSUInteger)arg1 ;
-(void)subtract:(id)arg0 ;


@end


#endif