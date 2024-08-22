// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGDIRECTEDBINARYADJACENCY_H
#define KGDIRECTEDBINARYADJACENCY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency.h"
#import "KGElementIdentifierSet.h"

@interface KGDirectedBinaryAdjacency : NSObject {
    _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency *_underlyingObject;
}


@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) KGElementIdentifierSet *sources;
@property (readonly, nonatomic) NSUInteger sourcesCount;
@property (readonly, nonatomic) KGElementIdentifierSet *targets;
@property (readonly, nonatomic) _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency *wrapper;


+(id)identityWith:(id)arg0 ;
-(BOOL)containsSource:(NSUInteger)arg0 target:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)differenceWith:(id)arg0 ;
-(id)init;
-(id)intersectingSourcesWith:(id)arg0 ;
-(id)intersectingTargetsWith:(id)arg0 ;
-(id)joinOnTargetsOfAdjacency:(id)arg0 ;
-(id)mutableCopy;
-(id)subtractingSourcesWith:(id)arg0 ;
-(id)subtractingTargetsWith:(id)arg0 ;
-(id)targetsForSourceIdentifier:(NSUInteger)arg0 ;
-(id)targetsForSources:(id)arg0 ;
-(id)targetsWithMinimumCount:(NSUInteger)arg0 ;
-(id)transposed;
-(id)unionWith:(id)arg0 ;
-(void)enumerateTargetsBySourceWith:(id)arg0 ;


@end


#endif