// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHBUSINESSNODECOLLECTION_H
#define PGGRAPHBUSINESSNODECOLLECTION_H

@class NSSet, NSString;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphBusinessCategoryNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphPublicEventNodeCollection.h"

@interface PGGraphBusinessNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) NSSet *businessNames;
@property (readonly, nonatomic) PGGraphBusinessCategoryNodeCollection *categoryNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *publicEventNodes;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)businessNodeForBusinessMuid:(NSUInteger)arg0 inGraph:(id)arg1 ;
+(id)restaurantBusinessNodesInGraph:(id)arg0 ;


@end


#endif