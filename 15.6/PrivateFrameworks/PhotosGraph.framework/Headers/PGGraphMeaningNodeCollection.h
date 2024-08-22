// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMEANINGNODECOLLECTION_H
#define PGGRAPHMEANINGNODECOLLECTION_H

@class NSString;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphMeaningEdgeCollection.h"

@interface PGGraphMeaningNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphMeaningNodeCollection *childMeaningNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *parentMeaningNodes;
@property (readonly, nonatomic) PGGraphMeaningEdgeCollection *reliableMeaningEdges;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)meaningNodesWithMeaning:(NSUInteger)arg0 inGraph:(id)arg1 ;
+(id)meaningNodesWithMeaningLabels:(id)arg0 inGraph:(id)arg1 ;
-(id)meaningLabels;


@end


#endif