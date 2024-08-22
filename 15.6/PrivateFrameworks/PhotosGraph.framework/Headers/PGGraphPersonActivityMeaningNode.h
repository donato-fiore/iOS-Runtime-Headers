// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPERSONACTIVITYMEANINGNODE_H
#define PGGRAPHPERSONACTIVITYMEANINGNODE_H

@class NSString;
@protocol PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"

@interface PGGraphPersonActivityMeaningNode : PGGraphOptimizedNode <PGAssetCollectionFeature>

 {
    NSString *_label;
}


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
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithPersonLocalIdentifier:(id)arg0 activity:(id)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif