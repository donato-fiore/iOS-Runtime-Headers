// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPOINODECOLLECTION_H
#define PGGRAPHPOINODECOLLECTION_H



#import "PGGraphNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphPOINodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;


+(Class)nodeClass;
+(id)poiNodesWithLabel:(id)arg0 inGraph:(id)arg1 ;


@end


#endif