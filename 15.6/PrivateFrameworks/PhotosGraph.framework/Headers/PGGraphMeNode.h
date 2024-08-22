// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMENODE_H
#define PGGRAPHMENODE_H



#import "PGGraphPersonNode.h"

@interface PGGraphMeNode : PGGraphPersonNode



+(id)filter;
-(BOOL)_status:(NSUInteger)arg0 fitsQuery:(NSUInteger)arg1 ;
-(id)_relationshipLabelForRelationship:(NSUInteger)arg0 ;
-(id)label;
-(id)relationshipEdgesToPersonNode:(id)arg0 matchingQuery:(NSUInteger)arg1 ;
-(void)_enumerateRelationshipWithLabel:(id)arg0 matchingQuery:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonNodesWithRelationship:(NSUInteger)arg0 matchingQuery:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateSocialGroupNodesWithRelationship:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif