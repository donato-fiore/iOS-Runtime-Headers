// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHIGHLIGHTTYPENODECOLLECTION_H
#define PGGRAPHHIGHLIGHTTYPENODECOLLECTION_H

@class NSString;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphHighlightGroupNodeCollection.h"
#import "PGGraphHighlightNodeCollection.h"

@interface PGGraphHighlightTypeNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodes;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)aggregationTypeNodesInGraph:(id)arg0 ;
+(id)concludedTripTypeNodesInGraph:(id)arg0 ;
+(id)defaultTypeNodesInGraph:(id)arg0 ;
+(id)longTripTypeNodesInGraph:(id)arg0 ;
+(id)onGoingTripTypeNodesInGraph:(id)arg0 ;
+(id)shortTripTypeNodesInGraph:(id)arg0 ;
+(id)tripTypeNodesInGraph:(id)arg0 ;
+(id)typeNodesWithLabel:(id)arg0 inGraph:(id)arg1 ;


@end


#endif