// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPUBLICEVENTNODECOLLECTION_H
#define PGGRAPHPUBLICEVENTNODECOLLECTION_H

@class NSSet;


#import "PGGraphNodeCollection.h"
#import "PGGraphBusinessNodeCollection.h"
#import "PGGraphPublicEventCategoryNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphPerformerNodeCollection.h"

@interface PGGraphPublicEventNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphBusinessNodeCollection *businessNodes;
@property (readonly, nonatomic) PGGraphPublicEventCategoryNodeCollection *categoryNodes;
@property (readonly, nonatomic) NSSet *eventNames;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPerformerNodeCollection *performerNodes;


+(Class)nodeClass;
+(id)publicEventNodesWithCategories:(id)arg0 inGraph:(id)arg1 ;


@end


#endif