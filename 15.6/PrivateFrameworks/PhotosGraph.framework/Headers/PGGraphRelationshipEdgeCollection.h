// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHRELATIONSHIPEDGECOLLECTION_H
#define PGGRAPHRELATIONSHIPEDGECOLLECTION_H



#import "PGGraphEdgeCollection.h"

@interface PGGraphRelationshipEdgeCollection : PGGraphEdgeCollection



+(Class)edgeClass;
+(id)confirmedRelationshipEdgesInGraph:(id)arg0 ;
+(id)inferredRelationshipEdgesInGraph:(id)arg0 ;
-(id)relationshipLabels;


@end


#endif