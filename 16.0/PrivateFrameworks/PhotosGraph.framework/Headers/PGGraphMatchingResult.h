// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHMATCHINGRESULT_H
#define PGGRAPHMATCHINGRESULT_H

@class NSMutableDictionary, PGGraphNode<PGGraphRelatableEvent>, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGGraphMatchingResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *context; // ivar: _context
@property (readonly, nonatomic) PGGraphNode<PGGraphRelatableEvent> *event; // ivar: _event
@property (readonly, nonatomic) NSDictionary *keywords; // ivar: _keywords
@property (nonatomic) CGFloat score; // ivar: _score


+(id)matchingDescriptionWithEventNode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)_contextItemsSortedByScoreAscending:(BOOL)arg0 ;
-(id)_highestScoredContextItemWithPreferredRelatedType:(NSUInteger)arg0 ;
-(id)contextItemForRelatedType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithEvent:(id)arg0 ;
-(id)keywordsForRelatedType:(NSUInteger)arg0 ;
-(id)localEndDate;
-(id)localStartDate;
-(id)sortedCriteria;
-(void)addKeywords:(id)arg0 forRelatedType:(NSUInteger)arg1 ;
-(void)clearKeywordsForRelatedType:(NSUInteger)arg0 ;
-(void)enumerateContextItems:(id)arg0 ;


@end


#endif