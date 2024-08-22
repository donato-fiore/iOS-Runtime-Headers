// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHIGHLIGHTGROUPNODE_H
#define PGGRAPHHIGHLIGHTGROUPNODE_H

@class NSArray;


#import "PGGraphHighlightNode.h"
#import "PGGraphHighlightGroupNodeCollection.h"

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *collection;
@property (readonly) NSArray *highlightNodes;
@property (readonly) NSArray *sortedHighlightNodes;


+(id)filter;
+(id)filterWithUUIDs:(id)arg0 ;
+(id)highlightOfHighlightGroup;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg0 withName:(id)arg1 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg0 withName:(id)arg1 ;
+(id)momentInHighlight;
+(id)pathFromMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg0 ;
+(id)pathToMoment;
+(id)pathToTargetNodeDomain:(unsigned short)arg0 ;
+(id)typeOfHighlightGroup;
-(BOOL)isAggregation;
-(BOOL)isLongTrip;
-(BOOL)isPartOfAggregation;
-(BOOL)isPartOfLongTrip;
-(BOOL)isPartOfShortTrip;
-(BOOL)isPartOfTrip;
-(BOOL)isShortTrip;
-(BOOL)isTrip;
-(NSUInteger)featureType;
-(id)label;
-(void)enumerateHighlightEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateHighlightNodesUsingBlock:(id)arg0 ;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif