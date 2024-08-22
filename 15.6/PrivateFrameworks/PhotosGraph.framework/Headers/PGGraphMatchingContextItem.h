// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMATCHINGCONTEXTITEM_H
#define PGGRAPHMATCHINGCONTEXTITEM_H

@class NSSet, NSDate;

#import <Foundation/Foundation.h>

#import "PGGraphNode.h"

@interface PGGraphMatchingContextItem : NSObject

@property (readonly, nonatomic) NSSet *contextNodes; // ivar: _contextNodes
@property (nonatomic) NSUInteger criteria; // ivar: _criteria
@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (readonly, nonatomic) PGGraphNode *matchedNode; // ivar: _matchedNode
@property (readonly, nonatomic) PGGraphNode *referenceNode; // ivar: _referenceNode
@property (readonly, nonatomic) NSUInteger relatedType; // ivar: _relatedType
@property (nonatomic) CGFloat score; // ivar: _score


+(NSUInteger)criteriaForLocationLabel:(id)arg0 ;
+(id)contextItemWithRelatedType:(NSUInteger)arg0 score:(CGFloat)arg1 criteria:(NSUInteger)arg2 referenceNode:(id)arg3 matchedNode:(id)arg4 contextNodes:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContextItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)_matchedAddressNode;
-(id)debugDescription;
-(id)description;
-(id)initWithRelatedType:(NSUInteger)arg0 score:(CGFloat)arg1 criteria:(NSUInteger)arg2 referenceNode:(id)arg3 matchedNode:(id)arg4 contextNodes:(id)arg5 ;
-(void)_findLocalStartAndEndDate;


@end


#endif