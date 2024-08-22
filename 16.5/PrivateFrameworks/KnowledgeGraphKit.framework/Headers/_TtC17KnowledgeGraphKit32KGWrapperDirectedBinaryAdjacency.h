// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17KNOWLEDGEGRAPHKIT32KGWRAPPERDIRECTEDBINARYADJACENCY_H
#define _TTC17KNOWLEDGEGRAPHKIT32KGWRAPPERDIRECTEDBINARYADJACENCY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "KGElementIdentifierSet.h"

@interface _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency : NSObject {
    ? adjacency;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) KGElementIdentifierSet *sources;
@property (nonatomic, readonly) NSInteger sourcesCount;
@property (nonatomic, readonly) KGElementIdentifierSet *targets;


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