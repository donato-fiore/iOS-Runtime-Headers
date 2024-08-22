// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MABINARYADJACENCY_H
#define MABINARYADJACENCY_H


#import <Foundation/Foundation.h>

#import "KGDirectedBinaryAdjacency.h"
#import "MAGraphReference.h"
#import "MANodeCollection.h"

@interface MABinaryAdjacency : NSObject

@property (readonly, nonatomic) KGDirectedBinaryAdjacency *adjacency; // ivar: _adjacency
@property (readonly, nonatomic) MAGraphReference *graphReference; // ivar: _graphReference
@property (readonly, nonatomic) MANodeCollection *sources;
@property (readonly, nonatomic) Class sourcesClass; // ivar: _sourcesClass
@property (readonly, nonatomic) NSUInteger sourcesCount;
@property (readonly, nonatomic) MANodeCollection *targets;
@property (readonly, nonatomic) Class targetsClass; // ivar: _targetsClass


+(id)adjacencyWithSources:(id)arg0 relation:(id)arg1 targetsClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAdjacency:(id)arg0 ;
-(NSUInteger)hash;
-(id)differenceWith:(id)arg0 ;
-(id)initWithAdjacency:(id)arg0 graph:(id)arg1 sourcesClass:(Class)arg2 targetsClass:(Class)arg3 ;
-(id)initWithAdjacency:(id)arg0 graphReference:(id)arg1 sourcesClass:(Class)arg2 targetsClass:(Class)arg3 ;
-(id)intersectingSourcesWith:(id)arg0 ;
-(id)intersectingTargetsWith:(id)arg0 ;
-(id)subtractingSourcesWith:(id)arg0 ;
-(id)subtractingTargetsWith:(id)arg0 ;
-(id)targetsForSourceIdentifier:(NSUInteger)arg0 ;
-(id)targetsForSources:(id)arg0 ;
-(id)targetsWithMinimumCount:(NSUInteger)arg0 ;
-(id)transposed;
-(void)enumerateTargetsBySourceWithBlock:(id)arg0 ;


@end


#endif