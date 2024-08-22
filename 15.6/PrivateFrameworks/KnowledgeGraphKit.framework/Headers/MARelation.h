// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MARELATION_H
#define MARELATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MARelation.h"

@interface MARelation : NSObject

@property (readonly, nonatomic) MARelation *excludeSource;
@property (readonly, nonatomic) MARelation *inverse;
@property (readonly, nonatomic) MARelation *optionalStep;
@property (readonly, nonatomic) MARelation *transitiveClosure;
@property (readonly, nonatomic) NSString *visualString;


+(id)_scanNonChainRelationWithScanner:(id)arg0 ;
+(id)chain:(id)arg0 ;
+(id)relationWithVisualString:(id)arg0 ;
+(id)scanRelationWithScanner:(id)arg0 ;
+(id)union:(id)arg0 ;
-(id)adjacencyByJoiningWithAdjacency:(id)arg0 graph:(id)arg1 ;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)description;
-(id)initForSubclassing;
-(id)repeatWithCount:(NSUInteger)arg0 ;
-(id)repeatWithMinCount:(NSUInteger)arg0 maxCount:(NSUInteger)arg1 ;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif