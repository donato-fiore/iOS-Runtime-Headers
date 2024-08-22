// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPERSONACTIVITYMEANINGNODECOLLECTION_H
#define PGGRAPHPERSONACTIVITYMEANINGNODECOLLECTION_H

@class NSString;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"

@interface PGGraphPersonActivityMeaningNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)personActivityMeaningNodesForActivityLabel:(id)arg0 inGraph:(id)arg1 ;
+(id)personActivityMeaningNodesForActivityLabel:(id)arg0 personLocalIdentifiers:(id)arg1 inGraph:(id)arg2 ;
+(id)personActivityMeaningNodesForActivityLabels:(id)arg0 inGraph:(id)arg1 ;
-(id)personActivityMeaningLabels;
-(id)personLocalIdentifiers;
-(id)subsetWithActivityLabels:(id)arg0 ;


@end


#endif