// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPERSONACTIVITYMEANINGNODE_H
#define PGGRAPHPERSONACTIVITYMEANINGNODE_H

@class NSString;
@protocol PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphPersonActivityMeaningNodeCollection.h"

@interface PGGraphPersonActivityMeaningNode : PGGraphOptimizedNode <PGAssetCollectionFeature>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphPersonActivityMeaningNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier
@property (readonly) Class superclass;


+(id)filter;
+(id)filterWithActivityLabels:(id)arg0 ;
+(id)filterWithPersonLocalIdentifiers:(id)arg0 label:(id)arg1 ;
+(id)momentOfPersonActivity;
+(id)personOfPersonActivity;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithPersonLocalIdentifier:(id)arg0 activity:(id)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif