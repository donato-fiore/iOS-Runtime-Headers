// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHSEASONNODECOLLECTION_H
#define PGGRAPHSEASONNODECOLLECTION_H

@class NSString, NSSet;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphDateNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"

@interface PGGraphSeasonNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *names;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)seasonNodesForSeasonName:(id)arg0 inGraph:(id)arg1 ;


@end


#endif